/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (864398908 - var_12);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = ((!((max((-935489026868018049 != 864398908), ((75 ? 4078008046 : -6950286902905854456)))))));
        arr_2 [i_0] = (max((arr_0 [i_0]), ((var_7 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = arr_6 [i_0] [12] [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [9]) ? (max(1, var_9)) : 2726190151));
                                arr_13 [i_2] [i_4] [4] [i_2] [i_1] [i_0] [i_0] = -91;
                                arr_14 [i_0] [i_0] = -935489026868018049;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_17 -= 133;
                        var_18 |= ((((-28270 ? -79 : -3224)) + ((var_11 | (arr_15 [i_6])))));
                        var_19 *= (max((((~var_3) ? (((153 ? -109 : -55))) : var_4)), (((var_4 && (-2147483647 - 1))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
