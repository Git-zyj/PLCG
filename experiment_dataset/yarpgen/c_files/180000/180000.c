/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((var_4 / ((min(var_16, 3246034559)))))));
    var_20 = ((min(var_8, (((var_14 ? 1048932737 : 3246034559))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_21 += (((((((arr_0 [i_0]) <= 1048932755)))) > (16 + 3246034559)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 &= ((((((arr_7 [i_0] [i_0] [i_2]) - var_3))) ? (arr_7 [i_0] [i_0 + 1] [i_0 + 1]) : (((1048932736 ? 0 : 0)))));
                    var_23 = (((1048932719 ? var_7 : var_10)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_24 = (max(124, (min(25, var_13))));
                            var_25 |= (arr_17 [i_6] [i_6 - 2] [i_6] [i_6 - 2] [i_6] [i_6]);
                        }
                    }
                }

                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    var_26 = (min(var_26, ((min((((!(0 & 1)))), -8064735485697543991)))));
                    var_27 = (arr_20 [i_3] [i_7 + 1] [i_7 - 3]);
                    var_28 -= var_5;
                }
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    arr_25 [i_3] [i_3] [i_3] = (arr_21 [i_3] [i_3] [i_3]);
                    var_29 = (min(var_29, (((((1093540945 ? (!var_11) : (~var_10))) + 0)))));

                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 17;i_9 += 1)
                    {
                        var_30 = 65535;
                        var_31 = (var_18 ? var_5 : 4294967295);
                    }

                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            var_32 ^= (min((min(var_11, 256786448926331224)), ((((var_14 % var_15) > var_1)))));
                            var_33 = (arr_16 [i_3]);
                            var_34 = (min(var_34, ((max(((((arr_14 [i_3] [i_3] [i_3] [i_3]) ? 2948145888 : ((((arr_30 [i_3] [i_3] [i_3] [i_3]) | var_12)))))), (max(7019910167404134673, ((((arr_26 [i_11] [i_10] [i_8] [i_4] [i_3]) ? 0 : 65531))))))))));
                            var_35 = (((((var_2 ? (((min(124, 0)))) : (max((arr_22 [i_10]), 12339049780970788698))))) ? (min(var_2, 11)) : var_11));
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_36 = ((((min((-6808639513675340600 >= 2948145888), 2948145888))) ? ((min(2147483647, ((0 ? var_9 : var_0))))) : -var_2));
                            var_37 |= (arr_23 [i_4] [i_4] [i_4]);
                            arr_38 [i_12] [i_3] [i_10] [i_8] [6] [i_3] [i_3] = ((-(min(((max(33996, 65531))), 15194148112427177659))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            var_38 = ((((((arr_37 [i_3] [i_3]) % 7))) ? (arr_30 [i_4] [i_4] [i_4] [i_8 - 2]) : (~1781524884)));
                            var_39 = var_13;
                        }
                        var_40 = (((((arr_36 [i_8 - 2] [i_8 + 2] [i_8 - 2] [i_8 - 2]) && var_15)) && (arr_14 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 1])));
                    }
                    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
                    {

                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            var_41 = 0;
                            arr_48 [i_3] [6] [i_8] [i_3] [i_3] [i_4] = (max(((((min(var_6, var_10))) < 5025617953847590418)), ((!(arr_13 [i_3] [i_3] [i_8])))));
                            var_42 = 3246034540;
                            var_43 -= ((((min(-1193178033, (!4097535610)))) || ((min(((((arr_46 [i_8] [i_4]) || (arr_12 [i_8])))), (arr_29 [i_3] [i_8 - 2] [i_8]))))));
                            arr_49 [i_3] [i_4] [i_4] [i_14] [i_15] [i_15] |= (min((((((arr_37 [i_3] [i_4]) ^ (arr_13 [i_3] [i_3] [i_3]))) + (arr_32 [i_14] [i_4] [i_8 - 1] [i_14] [i_14]))), ((max(((min(0, 1193178032))), (min(631797536, (arr_9 [i_8]))))))));
                        }
                        var_44 = (max((-9223372036854775807 - 1), (arr_31 [i_8] [i_8] [i_3] [i_8 - 1] [i_8 - 2] [i_14])));
                    }
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_45 = (min(var_45, (max(1048932737, (((var_13 / 747899383) + ((min(127, var_13)))))))));
                        arr_53 [i_16] [i_3] [i_3] [i_3] = 7;
                        arr_54 [i_3] [i_8] [i_8] [8] |= (((max(-9223372036854775794, 105)) ^ (((~(!3246034574))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
