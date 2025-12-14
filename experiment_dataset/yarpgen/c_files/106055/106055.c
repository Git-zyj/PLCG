/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 &= ((-(min((((2147483647 ? 1508388592 : -1508388592))), var_10))));
                    var_19 -= ((((((arr_6 [i_0] [i_0] [i_1 - 3] [i_0]) ? 972518860 : (arr_6 [i_0] [i_1] [i_1 - 3] [i_1 + 2])))) ? (min((arr_1 [i_0] [i_1]), var_8)) : (arr_1 [i_0] [i_0])));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_13 [i_1] [i_3] = (min((arr_2 [i_2] [i_1 + 2]), var_5));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_20 = (max(var_20, ((min((max((arr_0 [i_1] [i_2]), (arr_5 [i_2] [i_1] [i_0]))), var_0)))));
                            var_21 *= var_10;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_22 *= var_16;
                            var_23 |= (~18446744073709551615);
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_24 |= (((arr_3 [i_1 - 2] [i_6]) - (0 * 2365879102)));
                            var_25 = (((arr_9 [i_0] [i_1 - 1] [i_6] [i_1 - 2] [i_6] [8]) / (arr_0 [i_0] [i_0])));
                            arr_23 [1] [i_1] [i_1] [9] [1] = (i_1 % 2 == 0) ? ((max(((((!var_3) << ((((max((arr_21 [i_1] [i_0] [i_1]), (arr_2 [i_2] [i_3])))) - 12094))))), (80 | -6599412465452411469)))) : ((max(((((!var_3) << ((((((max((arr_21 [i_1] [i_0] [i_1]), (arr_2 [i_2] [i_3])))) - 12094)) + 8840))))), (80 | -6599412465452411469))));
                            var_26 = (max(var_26, (-2147483647 - 1)));
                            var_27 = (max(var_27, (98 + 80)));
                        }
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            var_28 *= (min((min((arr_1 [i_7 - 1] [i_1 - 2]), 8)), (arr_1 [i_7 - 1] [i_1 - 2])));
                            var_29 = -348212481;
                        }
                        var_30 = ((var_4 | (((max((arr_21 [i_1 + 3] [i_1] [i_1]), (arr_21 [i_1 + 3] [1] [i_1])))))));
                        arr_26 [i_1] [i_1] = (-1 | 4294967285);

                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            arr_30 [i_1] [i_1] [i_8] [i_3] [12] = ((max((((-(arr_7 [i_0] [i_1] [i_2])))), ((-(arr_29 [i_0] [i_1] [i_2] [i_3] [i_1] [i_8]))))));
                            arr_31 [8] [i_1] [i_1] = ((((arr_2 [i_1 + 2] [i_8 - 1]) ^ (arr_5 [i_8 - 1] [i_1 + 2] [i_1 - 1]))));
                            var_31 = (max(var_31, ((((arr_7 [i_8] [i_1 + 2] [i_0]) >= (arr_28 [i_1 + 1] [i_8 - 1] [i_8 - 1] [i_3] [i_8]))))));
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_32 = (arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0]);
                            var_33 = ((min((arr_11 [9] [i_1 + 1] [i_1 + 1] [i_2]), (~var_13))));
                            var_34 = arr_8 [i_0] [i_1] [i_2] [i_3];
                            arr_35 [9] [i_1] [i_2] [11] [i_9] [i_9] = (arr_18 [i_0] [i_1] [i_2]);
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [i_1] [i_1] [i_1] [i_10] = ((!(((~(var_15 & 16384))))));
                            var_35 -= -23022;
                        }
                    }
                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        var_36 += (((max(-18129, var_6))));
                        var_37 -= ((((arr_0 [1] [19]) ^ (8873365042846917740 > 1))));
                        var_38 = (min((arr_22 [i_1]), ((-((min(11334, 1)))))));
                        arr_42 [i_0] [i_1] [i_11] = (min((max(-2650183923371775052, (arr_11 [i_11] [i_11 + 1] [i_11 - 2] [i_11]))), (((((((arr_29 [i_0] [i_1] [i_1] [17] [i_1] [i_0]) || (arr_21 [i_0] [i_0] [i_1])))) < (arr_41 [i_0] [i_1 - 1] [i_1] [i_11] [i_0] [i_0]))))));
                        var_39 = (!1);
                    }
                    for (int i_12 = 3; i_12 < 20;i_12 += 1)
                    {
                        var_40 = 65535;
                        arr_46 [15] [i_1] [i_1] [i_1] = -20178;
                    }
                }
            }
        }
    }
    var_41 = (min(var_41, var_6));
    var_42 = ((var_8 ? ((8165 ? 1 : 101)) : 1));
    #pragma endscop
}
