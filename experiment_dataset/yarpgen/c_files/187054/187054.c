/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 ^= ((-((min((arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2]), (arr_6 [i_2 + 2] [i_2 - 3] [i_2 - 4]))))));
                            var_16 += ((-(((arr_5 [i_0] [i_1] [i_2 - 3]) ^ (~var_9)))));
                        }
                    }
                }
                var_17 = (((32640 / 2075294744) / (arr_10 [1] [i_0] [i_1] [12])));
                var_18 = ((-(arr_10 [i_0] [8] [i_1] [i_1])));
            }
        }
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_19 = ((!(arr_12 [i_4])));
        var_20 |= (arr_12 [i_4]);
        var_21 -= ((var_3 ? (((arr_12 [i_4]) * (arr_12 [i_4]))) : (((!(arr_12 [i_4]))))));
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        var_22 = (max(var_22, var_7));
        var_23 = (min((arr_11 [i_5]), ((-var_14 * (!2471)))));
        var_24 = ((!((((((var_4 / (arr_15 [2] [i_5])))) * var_8)))));
        var_25 = var_2;
    }
    var_26 = var_3;
    #pragma endscop
}
