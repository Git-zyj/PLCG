/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = -24;
                var_15 = (arr_3 [i_0]);
                var_16 = (min(var_16, 8));
                var_17 = ((((((arr_0 [i_0]) % (min((arr_3 [i_1]), 1102438161))))) ? ((-2033193149 ? -20 : -9)) : ((min((arr_2 [i_0]), (arr_0 [i_1]))))));
            }
        }
    }
    var_18 &= var_10;
    var_19 = (max((max(var_5, 1102438165)), (((-45 ? -11755 : 0)))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_20 = ((536870904 ? 1 : 9));
                            arr_15 [i_5] [11] [i_3] [i_2] [i_2] = (min(3192529127, 1102438161));
                        }
                    }
                }
                var_21 = var_9;
                var_22 += (1102438180 ? 3192529122 : (min(25, (64 | 18))));

                /* vectorizable */
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_25 [i_2 + 1] [i_3] [i_6] [i_7] [i_3] [i_6] = (-1 > 4094264438);
                                var_23 = ((14741718311539238680 ? 35093 : 3192529124));
                                var_24 = var_1;
                                var_25 = ((var_1 ? (arr_13 [i_8 - 4] [i_3] [i_6 - 1] [i_7] [i_6 - 1]) : (arr_13 [i_8 + 3] [i_3] [i_3] [i_3] [i_6 + 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_32 [i_6] &= 19;
                                var_26 = ((var_6 ? (arr_17 [i_3]) : (((arr_29 [i_2]) ? var_1 : var_8))));
                                arr_33 [i_2] [i_3] [i_3] [i_9] [i_10] = var_12;
                                var_27 = ((1102438165 ? 3192529120 : 24560));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = min(65535, ((3192529132 ? var_9 : var_13)));
    #pragma endscop
}
