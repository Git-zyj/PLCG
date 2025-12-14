/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 % (~var_3)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    {
                        var_19 = ((max((((var_14 ? -6 : 1506385021))), (arr_0 [i_0 + 2]))));
                        arr_9 [i_0] [i_2] [i_1] = -4928151467252092216;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_20 = var_0;
                            var_21 ^= var_11;
                            arr_20 [i_0] [i_0] [i_4] [i_0 + 3] [i_0] = ((16 ? var_15 : (arr_6 [i_0] [i_4] [i_5] [i_7 - 1])));
                            var_22 = (max(var_22, ((((-(arr_7 [i_0 + 1] [i_0 + 2] [i_6] [1] [i_7 - 1])))))));
                        }
                    }
                }
            }
            var_23 -= (max((((arr_12 [6] [i_0 + 1]) ? 20 : 20)), (!1)));
            arr_21 [i_4] [i_4] = ((((!(((var_0 ? (arr_11 [i_4]) : var_4))))) ? (min((!-70989409), ((var_13 ? 1 : 4294967276)))) : var_6));
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_24 *= (-(((arr_16 [i_8] [i_8] [i_0] [4]) ? (arr_22 [i_0 + 3]) : (((arr_17 [i_0] [i_0] [17] [1]) ? var_12 : 2753750660)))));

            for (int i_9 = 2; i_9 < 24;i_9 += 1)
            {
                var_25 -= 20;

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_26 += var_9;
                    var_27 = (min((~53), ((-(arr_26 [i_0 + 1] [i_9])))));

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_31 [i_0] [i_10] [i_9] [i_10] [7] = var_1;
                        var_28 = var_16;
                    }
                    for (int i_12 = 1; i_12 < 24;i_12 += 1)
                    {
                        arr_35 [i_0] [i_8] [i_9 - 1] [i_10] [15] [i_0] = ((((((((arr_6 [14] [i_0] [i_9] [i_10]) >= var_4))))) | (arr_11 [i_12 + 1])));
                        var_29 |= (((((min(4294967275, var_17))) ? 13726594530064437941 : (arr_8 [18] [i_8] [18]))));
                        var_30 = (!4294967275);
                    }
                }
            }
            for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {
                    var_31 = (max(var_31, 3318304017));
                    var_32 = ((((var_10 ? 549755813887 : var_0))));
                    var_33 -= var_13;
                    arr_42 [i_0 + 3] = 6126726232845471997;
                }
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    var_34 = (((((((7 ? 1 : 15999))) ? (var_7 * var_14) : ((((arr_40 [i_0] [i_8]) / (arr_12 [i_13] [6])))))) != (((~(max(65535, 38)))))));
                    var_35 = (min(var_35, -28555));
                    arr_45 [i_0 + 2] [i_0 + 2] [i_13] [i_0 - 1] = (((1541216635 ? -10668 : (min(909603218, 0)))));
                }
                for (int i_16 = 1; i_16 < 23;i_16 += 1)
                {
                    arr_48 [i_0] [i_0] [i_0 + 3] [i_0] [i_0] = (arr_46 [11] [1] [i_13] [i_16]);
                    arr_49 [i_0] [i_0 + 2] [2] [2] [22] [i_16 + 2] = ((29866 ? ((((min(976663272, 1725679554))) ? var_0 : 3842568866113339110)) : (((arr_43 [i_16]) ? (((-(arr_1 [i_0] [i_0])))) : (arr_14 [i_13])))));
                    var_36 = var_8;
                    var_37 = (((var_7 ? (arr_24 [i_0 - 1]) : 1725679555)));
                }
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    arr_54 [i_8] [i_17] [11] [i_8] [i_0] = (((((var_10 ? (arr_16 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_13]) : (arr_53 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? ((var_10 ? var_4 : (((arr_18 [i_13] [i_8] [i_13] [1] [i_13]) / var_10)))) : (!1)));
                    var_38 = ((!(((33 ? (arr_8 [i_13] [i_0 + 3] [i_0 + 2]) : 1)))));
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        {
                            var_39 = (min(var_39, ((((-7 ? -1725679557 : 28))))));
                            var_40 = var_15;
                            var_41 += (max(((min(0, ((min(var_2, var_17)))))), ((-(var_0 / 1)))));
                        }
                    }
                }

                for (int i_20 = 0; i_20 < 0;i_20 += 1)
                {
                    var_42 = (((((1 ? 0 : 2753750636))) << (((!(arr_1 [i_0] [i_20 + 1]))))));
                    var_43 &= ((arr_10 [i_13] [i_20 + 1] [i_0 + 1]) ? -4294967287 : var_16);
                }
            }
            for (int i_21 = 0; i_21 < 25;i_21 += 1) /* same iter space */
            {
                var_44 = (min(var_44, (arr_36 [i_0 + 2])));
                var_45 = var_13;
            }
            for (int i_22 = 0; i_22 < 25;i_22 += 1) /* same iter space */
            {
                var_46 = 6218562083652022322;
                var_47 = (max(var_47, ((min(0, 1)))));
            }
        }
    }
    #pragma endscop
}
