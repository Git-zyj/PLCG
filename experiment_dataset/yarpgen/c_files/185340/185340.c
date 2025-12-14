/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((((max(4294967289, (-2147483647 - 1)))) && ((((var_0 + 9223372036854775807) >> 0)))))), var_18));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (min((min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))), (arr_1 [i_0 + 2])));
                arr_5 [i_0] = (min((arr_2 [i_0] [i_1] [i_1]), (((max(var_13, (arr_2 [i_0] [i_1] [i_1])))))));
                arr_6 [i_1] = (!186);
                arr_7 [i_0 + 2] [i_1] [i_1] = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [i_3] [i_3] [i_3] = ((((4294967283 && (arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                            var_21 = ((-(max(0, 18446744073709551607))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
