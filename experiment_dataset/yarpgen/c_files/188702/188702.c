/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((min(var_15, var_3))) ? var_13 : (1063626792 - 126))) % ((((var_7 ? 3322388037231116099 : var_9)) << (((var_14 % var_8) - 119))))));
    var_19 += (((~(0 ^ -1644771989))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 &= (((((-var_6 | (((max(-10, -91))))))) ? (((min((arr_3 [0]), (arr_4 [i_0] [8] [i_0]))) / (((max(-10, var_3)))))) : var_12));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = ((((((min(9, 25))) ? (min((arr_14 [i_0] [i_1] [i_1] [i_3] [8]), (arr_7 [i_0] [1] [i_4]))) : (var_9 ^ 9))) ^ var_3));
                                var_22 &= (-(((arr_5 [i_0] [i_3]) ? (((arr_7 [i_0] [i_0] [i_2]) ? var_8 : (arr_4 [i_1] [i_3] [i_4]))) : ((max(var_3, var_2))))));
                                var_23 = ((((2360447360172307999 >> (-29 + 88))) << (((((arr_5 [i_0] [i_0]) ? var_9 : 821211002)) - 14156169358993373058))));
                            }
                        }
                    }
                    var_24 = max(var_3, (((-33 | 11) ? (max((arr_5 [i_0] [i_0]), var_1)) : 15)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            {
                var_25 &= (((((max((((var_13 >= (arr_16 [i_5])))), 9)))) + ((var_2 ? var_11 : (max((arr_16 [13]), -23))))));

                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_28 [i_5] = (min((min((min((arr_16 [i_5]), var_9)), ((var_11 ? 23 : (arr_19 [i_5] [i_7] [i_8]))))), var_1));
                                var_26 = var_7;
                            }
                        }
                    }
                    arr_29 [i_5] [i_7] = (max(var_7, (min((max((arr_26 [i_6 - 2] [11] [i_5] [i_6]), var_5)), var_4))));
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_27 = (arr_21 [i_5] [12]);

                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_28 = (~var_3);

                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 10;i_12 += 1)
                        {
                            var_29 = (821211002 < var_9);
                            var_30 = (max(var_30, ((var_7 - (-16 % -210566396)))));
                            var_31 += -33;
                            var_32 *= (((((var_9 ? (arr_32 [i_11] [i_10]) : 0))) ? (-50 % var_3) : ((-(arr_20 [i_5] [i_5] [1] [13])))));
                            var_33 = (((!var_11) < 210566395));
                        }
                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            var_34 = (27 / -56);
                            var_35 = ((((max((arr_21 [i_11] [i_13]), 6360526838630361124)) ^ 5708374575566489621)));
                            var_36 = (max(var_36, (arr_32 [i_5] [i_5])));
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            arr_43 [i_5] [8] [i_10] [i_5] [i_14] [i_11] = (((max((min((arr_40 [i_5] [i_6]), var_15)), 0))) ? ((-32 + (min(1848044940609674969, 12208580223438766311)))) : ((((max(var_17, var_10))) & var_9)));
                            var_37 = -747763167;
                        }
                        var_38 = (-2 < 210566374);

                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            var_39 *= var_3;
                            var_40 *= (-3 + 27);
                        }
                        for (int i_16 = 1; i_16 < 13;i_16 += 1) /* same iter space */
                        {
                            var_41 = (min(var_41, (((-((((((var_7 ? 0 : -2062519161))) && ((((arr_38 [i_5] [i_6] [i_10] [i_11] [i_16 + 1]) ? var_10 : (arr_23 [i_5] [i_5] [i_5]))))))))))));
                            var_42 = (-(((10 || (~var_12)))));
                            var_43 ^= var_11;
                        }
                        for (int i_17 = 1; i_17 < 13;i_17 += 1) /* same iter space */
                        {
                            arr_52 [i_5] [i_6] [3] [i_17] [i_10] [i_11] = ((max((arr_51 [6] [i_6 - 1] [6] [i_11] [i_5] [i_6 - 1] [i_17 - 1]), var_8)));
                            arr_53 [i_5] [i_17] [i_5] [i_5] [i_5] = max(77, (arr_26 [i_5] [i_5] [i_5] [i_5]));
                        }
                        for (int i_18 = 1; i_18 < 13;i_18 += 1) /* same iter space */
                        {
                            var_44 ^= ((3036650379902419550 && (((var_10 ? 821211002 : var_4)))));
                            var_45 -= (((((((arr_50 [i_5] [i_11] [i_10] [i_6] [i_5]) / var_15)))) < var_7));
                        }
                    }
                    arr_57 [i_5] [i_6] [i_10] = (var_14 >= var_15);
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 14;i_20 += 1)
                        {
                            {
                                var_46 = (max(-94, -9));
                                arr_62 [i_5] [i_5] [i_5] [1] [i_5] [i_5] = (min(((((0 >> (11332347982853079174 - 11332347982853079139))) + var_0)), 245069797));
                                var_47 = (((((58 + (arr_42 [i_20] [i_19] [i_6 - 2] [i_6 - 2] [i_5]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
