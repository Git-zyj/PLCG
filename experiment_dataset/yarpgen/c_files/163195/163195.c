/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((min(var_8, ((min(var_3, 6))))), (max(var_9, (max(58, var_8))))));
    var_19 = min(var_16, (((!(var_16 == var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 += max((((arr_4 [4] [i_1]) << (((((arr_4 [6] [i_1]) + var_10)) - 264833150)))), ((max(((max(var_11, (arr_2 [4])))), -6158))));
                var_21 = var_0;
                arr_5 [i_0] [i_1] = max((max(var_8, 25252)), (((((max((arr_1 [i_0] [i_1]), (arr_0 [i_0])))) + ((-(arr_1 [i_0] [i_1])))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_22 = var_15;
                    var_23 = (max(((max((arr_8 [i_0] [17] [i_1] [i_2]), var_17))), ((58 | ((max((arr_0 [i_0]), 58730)))))));
                    var_24 = 1;
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_3] = max(112, -29003);
                    var_25 -= ((var_16 + (1840960440151859289 != 896479107)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_26 = var_2;
                                var_27 -= (arr_12 [i_5] [i_4] [i_3] [i_4] [i_3]);
                            }
                        }
                    }
                }

                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    arr_22 [11] [11] [i_0] [i_0] = (min(var_12, var_13));
                    var_28 += var_15;
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_29 = (arr_8 [i_0] [i_1] [i_6] [i_8]);
                                var_30 = (((min((27062 | var_3), (38473 || var_2))) <= var_17));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_31 = (-9223372036854775807 - 1);
                    var_32 = ((((((((var_8 || (arr_1 [i_0] [i_1])))) >= (!var_0)))) * 121));
                    var_33 = (max(58730, 59223));

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_34 = min((0 != 0), 58730);
                        var_35 = (((arr_13 [i_0]) < (((201 || (((arr_13 [i_0]) == 0)))))));
                        var_36 = ((!(arr_27 [i_0] [i_0] [10] [i_10] [7])));
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_0] = var_2;
                        var_37 = 15291;
                        var_38 = (max((0 > 0), ((((var_14 - (arr_25 [i_0] [1]))) >> ((((var_4 << (var_9 - 63419))) - 28199918))))));
                        var_39 = (((((((max(var_0, 192)) != (((((arr_6 [8] [10] [0]) > 0)))))))) ^ (arr_35 [i_1] [i_1] [i_1] [10])));
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((~((max(var_16, 32599))))) * ((((!var_6) || (111 || 993004437))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_40 = (arr_2 [i_0]);
                        var_41 = 6806;
                        var_42 ^= (((((arr_25 [i_12] [i_1]) - var_3)) % var_1));
                    }
                }
            }
        }
    }
    #pragma endscop
}
