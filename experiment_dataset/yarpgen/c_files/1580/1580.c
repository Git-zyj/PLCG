/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] |= 0;
        var_14 = (((((var_4 ? var_3 : (arr_0 [i_0] [i_0]))))));
        var_15 = (((((min(4294967292, (!4294967290))))) - (((((max((arr_0 [i_0 - 2] [i_0 - 2]), var_3)))) | -7323910047522875790))));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_16 ^= ((((34597 ? ((16383 ? -265222700 : 11)) : 4294967292)) > (~1)));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, (!56966)));
                        var_18 = -945;
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_14 [10] [i_5] [i_3] [1] [i_2] [i_1] = (min(var_4, (((var_12 ? -124 : -7986371985254912493)))));
                        var_19 = (max(var_19, (((~(arr_13 [i_1 + 1] [i_3 - 1]))))));
                        var_20 &= ((((min(0, (arr_8 [i_5])))) * (((0 == (arr_3 [i_3]))))));
                    }
                    var_21 = ((((var_2 ^ (arr_6 [i_3]))) <= ((((max((arr_7 [i_2]), var_9))) ? 126 : -1954410481))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_22 [i_6] [i_2] [i_2] [i_2] [i_2] = (min((min(var_11, (-7986371985254912493 / 127))), ((((arr_3 [i_1]) ? (arr_18 [i_3] [i_6] [i_1 + 2] [i_6] [i_1]) : (arr_19 [i_6 - 1] [i_1 + 2] [i_3 - 1] [i_1 + 2] [i_1 - 3] [i_1]))))));
                                var_22 = (((((((var_2 ? (arr_10 [i_1 - 2] [i_2] [i_3 - 1] [i_2] [i_1 - 2] [i_7]) : 4294967281)) ^ (arr_21 [i_6] [i_3 - 1] [i_1 + 1] [i_1 + 1])))) ? (arr_5 [i_7]) : ((((min(var_3, 4294967289))) ? (min(-7986371985254912493, (arr_5 [i_1 - 3]))) : (!0)))));
                                var_23 = ((0 ? -14103331 : -4616024569263229236));
                            }
                        }
                    }
                }
            }
        }
        var_24 |= ((max((var_2 + var_3), 1)));
    }
    var_25 = (max(var_25, var_12));
    #pragma endscop
}
