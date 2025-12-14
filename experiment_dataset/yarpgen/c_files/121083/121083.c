/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 18446744073709551615;
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 = (((arr_4 [i_0] [i_0] [i_0 - 1] [16]) ? (((arr_8 [i_0 + 1] [i_2] [i_0]) - 13)) : (!var_2)));
                            arr_9 [i_0 + 1] [i_1] [i_0] [i_0 + 1] [i_2] [i_0] = ((+(((var_8 && ((((arr_5 [1] [i_2] [i_0]) ? var_2 : var_2))))))));
                        }
                    }
                }
                var_17 = (max((869649300 && var_10), (max((arr_6 [i_0 - 1] [i_1 - 2] [i_1] [i_1 - 2] [i_1]), (arr_6 [i_0 + 1] [i_1 - 4] [13] [i_1 - 2] [i_1 - 2])))));
            }
        }
    }
    #pragma endscop
}
