/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= 18446744073709551610;
    var_18 = (max(var_18, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] = -18446744073709551610;
                    arr_11 [i_0] [7] = 3312160004;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = (min(3636408272, (arr_6 [i_3] [i_2] [i_1])));
                                var_19 += ((~((var_13 ? (arr_7 [i_1]) : 5))));
                                var_20 ^= (var_14 ? (min(((-(arr_8 [i_0] [i_1] [i_4]))), var_4)) : ((var_14 - (var_12 + var_9))));
                                arr_17 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (17371258634947731971 | 22);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_21 ^= ((+(min((arr_19 [i_5] [i_5]), (arr_19 [i_5] [i_5])))));
        var_22 = ((var_0 ? (((((-(-32767 - 1)))) ? (arr_18 [i_5] [i_5]) : (~-21655))) : var_3));
        arr_20 [i_5] = ((min(-4040471041802530124, -var_5)));
    }
    #pragma endscop
}
