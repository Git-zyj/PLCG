/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_17 = (((((-((max(1, 10)))))) && 10));
                                var_18 = (max(((1 ? (arr_5 [i_1] [i_4]) : (arr_7 [i_0]))), (((!(arr_7 [i_0]))))));
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                arr_18 [i_3] = (max(-10, (((!((max((arr_2 [i_1]), (arr_11 [i_0] [i_0] [i_0])))))))));
                                var_19 += ((!(((-(arr_0 [i_1]))))));
                                var_20 = (max(var_20, ((((((arr_11 [i_0] [i_0] [i_0]) * (min(var_10, var_0)))))))));
                                var_21 = ((-8192 < (arr_17 [i_0] [i_3] [i_2] [i_3] [i_3] [i_5] [i_5])));
                            }
                            var_22 += arr_11 [i_2 - 2] [i_2 - 2] [i_0];
                            arr_19 [i_0] [i_1] [i_3] [i_3] = (((((var_4 ? (arr_17 [i_0] [i_3] [i_1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_3]) : -2065404934))) ? 32736 : ((var_13 ? -32752 : 32796))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        {

                            for (int i_8 = 0; i_8 < 24;i_8 += 1)
                            {
                                arr_26 [i_0] [i_1] [i_6 - 1] [i_7] [i_7] = (arr_24 [i_7] [i_7] [i_6 - 1]);
                                arr_27 [i_0] [i_0] [i_7] [i_7] [i_1] [i_0] [i_7] = var_3;
                            }
                            for (int i_9 = 0; i_9 < 24;i_9 += 1)
                            {
                                var_23 = ((-((min((arr_21 [i_6 - 1] [i_7 - 2] [i_7 - 2]), (arr_21 [i_6 + 1] [i_7 + 3] [i_6]))))));
                                arr_32 [i_7] [i_1] [i_1] [i_7] = ((((arr_25 [i_0] [9] [i_7] [i_7 + 3] [i_1] [i_0]) ? (arr_7 [i_0]) : (arr_3 [i_9]))));
                            }
                            for (int i_10 = 1; i_10 < 20;i_10 += 1)
                            {
                                arr_37 [i_0] [i_0] [i_1] [i_6] [i_7] [i_7 - 1] [i_10] = var_4;
                                arr_38 [i_0] [i_1] [i_6] [i_7] [i_10 + 1] = (((arr_29 [i_7] [i_1] [i_1] [20] [i_7] [i_10]) * (arr_33 [i_10 + 4] [i_10] [i_7] [i_0] [1] [i_0] [i_0])));
                            }
                            for (int i_11 = 0; i_11 < 24;i_11 += 1)
                            {
                                arr_41 [i_7] [23] = (arr_17 [i_0] [i_7] [i_1] [i_0] [i_7 + 1] [21] [i_6 + 1]);
                                arr_42 [i_7] [i_7] [i_6] [i_7] [i_7] = (0 / 8769884631145023439);
                                var_24 &= ((max((max(224, -1829083816322491449), (((var_7 * (arr_34 [i_0] [i_1] [i_1] [i_6] [i_1] [i_7 - 1] [i_11]))))))));
                                arr_43 [18] [i_0] [i_0] [i_6] [i_0] [i_7] [i_11] = var_2;
                            }
                            var_25 = 65525;
                        }
                    }
                }
            }
        }
    }
    var_26 = ((22 ? 234 : 21814));
    #pragma endscop
}
