/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((max(((var_11 ? var_5 : var_8)), ((min(var_9, var_4)))))) ? var_4 : -195)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_15 = ((((~(!1227990012340057688)))) ? ((((((arr_1 [2] [i_1]) <= -903542532))))) : (~9223372036854775807));
                    var_16 = ((!((102766808 && ((!(arr_3 [i_0] [i_0] [i_2])))))));
                    var_17 = (max(var_17, ((((max(102766830, (~var_11)))) ? ((max(var_6, var_5))) : ((((!((max(var_1, var_6)))))))))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_18 = (((arr_0 [i_3 + 2] [i_3 + 4]) <= var_7));
                    var_19 = (~var_12);
                    var_20 += (102766808 || -102766809);
                }
                for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    var_21 = (~((max(var_4, 47))));
                    var_22 = ((1 ? ((min(1, (arr_9 [i_0] [i_0] [i_4 + 1] [6])))) : ((102766808 ? (arr_6 [11] [11] [11] [i_4 - 1]) : (arr_6 [i_4] [i_4] [i_4] [i_4 + 4])))));
                }
                var_23 = (~var_7);

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_24 = (max((var_5 & var_7), -var_11));
                    var_25 = (((1411811923 >= 1372529473) || ((((arr_5 [i_5] [i_1] [i_1] [i_0]) ? (min(var_1, var_2)) : -var_5)))));
                }

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_26 = var_5;
                    var_27 = min((-9223372036854775807 - 1), var_10);
                    var_28 = 10138658371789823419;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_29 = ((!((max(((var_3 ? 2013655856166779226 : var_5)), -102766808)))));
                                var_30 = (1 <= var_11);
                                var_31 = (max(((min((arr_19 [i_1] [i_7] [i_8 + 3] [i_1] [i_8]), 102766808))), (~-8289878720584022030)));
                                var_32 = ((-(min((max((arr_15 [i_0] [i_1] [i_6] [i_7]), var_7)), (((~(-9223372036854775807 - 1))))))));
                                var_33 = max(((((var_5 ? var_3 : 4151141823593925825)))), (min((max(12609932193302335095, 127)), 10138658371789823419)));
                            }
                        }
                    }
                    var_34 = (((-9223372036854775807 - 1) ? var_4 : (!var_1)));
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_35 = max(8308085701919728195, (arr_18 [i_1]));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_36 = (((!var_6) <= (((arr_27 [i_11] [i_1] [i_11] [i_11] [i_11] [3] [i_11 + 2]) ? (arr_19 [i_0] [i_1] [i_0] [i_10] [i_1]) : (arr_28 [i_11 - 1] [i_10 - 1] [i_9] [i_11] [i_0])))));
                                var_37 += (var_12 != var_2);
                                var_38 = ((~(min(var_3, var_12))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_39 += (arr_26 [i_9] [i_1] [i_9] [1]);
                                var_40 |= ((var_13 ? (arr_19 [i_0] [i_1] [i_9] [6] [i_13]) : ((5279104333868965193 ? var_0 : (~var_13)))));
                                var_41 = (min(var_1, (((arr_0 [i_0] [i_1]) ? (!2523160830) : var_3))));
                            }
                        }
                    }
                    var_42 = ((((arr_13 [i_0] [i_1] [i_9] [i_0]) != (var_12 <= var_4))) && (arr_13 [i_0] [i_0] [i_0] [i_0]));
                    var_43 = ((-(~0)));
                }
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 12;i_16 += 1)
                        {
                            {
                                var_44 = (!var_8);
                                var_45 = ((-((-28 - (~var_5)))));
                            }
                        }
                    }
                    var_46 = ((-((-((-(arr_29 [i_0] [i_1] [i_1] [i_14])))))));
                    var_47 = ((((max(var_6, var_3))) ? 7447239672971665894 : ((max(var_4, (((arr_5 [1] [1] [i_1] [i_14]) + 1)))))));
                    var_48 = ((!(((7292781295715839786 ? (arr_8 [i_0] [i_1] [i_14]) : (arr_8 [i_0] [i_1] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
