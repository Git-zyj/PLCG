/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_11 / var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(((1 ? var_10 : 180)), (arr_3 [i_0])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_22 -= (arr_6 [4]);
                    var_23 -= (arr_7 [i_0] [i_0] [i_0]);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_24 = ((var_11 || (((var_19 ? var_4 : var_4)))));
                            var_25 = var_4;
                            var_26 = (max(var_26, (((((((var_11 ? var_13 : 71)) + 2147483647)) << ((((180 ? var_10 : (arr_11 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0]))) - 5)))))));
                            var_27 = (min(var_27, (arr_8 [i_0] [i_0] [i_4] [i_0])));
                        }
                        var_28 += ((54 / (arr_13 [i_0] [i_0] [i_0])));
                    }
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        var_29 -= ((-(62 & var_19)));
                        var_30 *= 194;
                    }
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_31 = (max(var_31, (arr_0 [i_1])));
                    var_32 = (max(var_13, ((((max((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 71))) ? ((max((arr_8 [i_0] [i_1] [i_0] [i_6]), 180))) : ((197 ? 71 : 62))))));
                    var_33 = var_16;
                    var_34 = 113;
                }
                for (int i_7 = 4; i_7 < 19;i_7 += 1)
                {
                    var_35 -= ((-(arr_25 [i_0] [i_1] [i_7])));

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_36 = ((((max(75, var_3))) ? 184 : (((max(var_18, 181))))));
                        var_37 = (max(var_37, (var_19 / 195)));
                        var_38 = (((arr_5 [i_8] [i_0]) ? (((min((arr_18 [i_0] [i_1] [i_7] [i_7] [i_8]), var_11)))) : 10497921742673001063));

                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            var_39 = (min(var_39, (((-((max((arr_1 [i_7]), (arr_14 [i_9] [i_9] [i_9] [i_9] [i_9 + 4])))))))));
                            var_40 -= (arr_5 [i_8] [i_0]);
                            var_41 *= (arr_30 [i_9 + 1] [i_8] [i_7 + 1] [i_1] [i_1] [i_1] [i_0]);
                            var_42 += (!183);
                            var_43 = ((((arr_15 [i_0] [i_7 - 3] [i_7 - 4] [i_7] [i_7]) >= (arr_2 [i_0]))) ? (((((((arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_0]) ? 70 : 4073))) || (((var_1 / (arr_24 [i_0] [i_7] [i_1] [i_0]))))))) : ((var_19 ? 63 : ((var_13 ? var_2 : var_11)))));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_44 = max(((max((arr_8 [i_0] [i_7 - 1] [i_0] [i_10]), (arr_8 [i_8] [i_0] [i_0] [i_0])))), (max((max(var_4, (arr_18 [i_0] [i_8] [i_7] [i_1] [i_0]))), (arr_4 [i_0]))));
                            var_45 = ((((((var_18 ? 106 : 181))) ? (arr_5 [i_0] [i_0]) : (var_1 >= 185))));
                            var_46 = var_17;
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_47 -= (max((((183 >= 80) << (var_15 - 144))), (((((-(arr_36 [i_11] [i_8] [i_7] [i_1] [i_0]))) >= 188)))));
                            var_48 -= ((var_9 ? ((var_18 ? -58 : (54 >= 157))) : (((((var_13 & (arr_7 [i_7] [i_1] [i_0])))) ? var_16 : (var_2 / 186)))));
                            var_49 = (min(var_49, (arr_36 [i_0] [i_1] [i_7] [i_8] [i_11])));
                            var_50 = (max(var_50, (arr_33 [i_1] [i_1] [i_1] [i_1] [i_1])));
                        }
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_51 = (arr_29 [i_7] [i_1] [i_7]);
                        var_52 = 76;
                        var_53 *= var_10;
                        var_54 += (min((arr_10 [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_7 - 1] [i_12])));
                        var_55 = (arr_0 [i_12]);
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {

                        for (int i_14 = 1; i_14 < 18;i_14 += 1)
                        {
                            var_56 = 180;
                            var_57 += (arr_19 [i_0] [i_1] [i_13] [i_13] [i_14] [i_7]);
                            var_58 = (-165 / 157);
                        }
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_59 = ((182 << (var_9 - 3114059740870767270)));
                            var_60 *= ((!(((180 ? 184 : 96)))));
                            var_61 = -202;
                        }
                        var_62 = ((67 ? (arr_10 [i_0] [i_7] [i_7 - 2] [i_13]) : (arr_10 [i_7] [i_7] [i_7 - 3] [i_13])));
                        var_63 = (max(var_63, ((((!184) ? (!35081) : (arr_15 [i_7] [i_7 - 2] [i_7] [i_7 - 4] [i_7 + 1]))))));
                        var_64 -= (arr_46 [i_13] [i_0]);
                    }
                    var_65 = (max(var_65, ((max(((((!(arr_35 [i_7] [i_7] [i_0]))))), (max((((arr_20 [i_0] [i_7]) ? (arr_0 [i_0]) : (arr_12 [i_0] [i_1] [i_7] [i_7]))), (185 >= 75))))))));
                    var_66 *= var_14;
                }
            }
        }
    }
    #pragma endscop
}
