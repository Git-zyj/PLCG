/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = (min(var_17, var_7));
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] = ((((((arr_3 [i_0 + 3] [i_3 - 1]) ? 4294967295 : (arr_3 [i_0 + 2] [i_3 - 1])))) ? (arr_2 [i_1]) : var_6));
                            var_19 *= ((((1 ? 1 : 18446744073709551615)) | 127));
                        }
                    }
                }
                var_20 = (min(var_20, (((((var_5 ? 1 : 2)) << (!var_4))))));
                arr_12 [i_0] = ((!(arr_1 [i_0])));
                arr_13 [i_0] [i_0] = ((max((arr_4 [i_0 + 1] [i_0 + 2]), (arr_4 [i_0 - 1] [i_0 + 3]))));
            }
        }
    }
    #pragma endscop
}
