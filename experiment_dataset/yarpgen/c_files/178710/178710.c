/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~((var_6 ? var_13 : var_10))))) ? (min(((var_3 ? var_11 : var_3)), 1)) : ((min(var_13, var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] = max((arr_1 [i_0]), ((max(((-(arr_3 [i_0] [i_1]))), 1))));
                arr_5 [i_1] = var_8;
                var_15 = (arr_3 [i_0] [i_0 - 4]);

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_16 = (min(var_16, ((((arr_7 [i_2] [i_2 + 1] [i_2 + 1]) ? (((var_1 != (arr_7 [i_2] [i_2 + 1] [i_2 + 1])))) : (0 + 1))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, ((((arr_7 [i_3] [i_2] [i_0]) ? (((((!(arr_1 [i_1]))) || 0))) : ((1248005466190306086 ? (!0) : (~var_11))))))));
                        arr_11 [i_1] [i_1 + 1] [i_2] [i_3] = ((!((!(!var_7)))));
                        var_18 = (((((!16015) && 1)) || var_9));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_19 -= (((var_0 || var_2) || 1));
                            var_20 = (max(var_20, ((((min(((((arr_6 [i_1] [i_2] [i_4]) || var_1))), 1096528442))) ? var_13 : (arr_8 [19] [i_1])))));
                            arr_17 [i_0] [i_0] [12] [i_2 + 1] [i_0] [i_4] [i_1] = ((~(((!(arr_14 [i_0] [i_4]))))));
                            var_21 = ((-1 | ((1 | (arr_8 [i_2 + 1] [i_5])))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_22 -= (min((((arr_7 [i_6] [i_6] [i_2]) * (arr_13 [i_0] [i_0] [1] [1] [i_0 + 1] [i_0 - 4]))), (((min((arr_9 [i_0] [i_1 - 2] [8] [i_6] [i_6] [i_4]), 6))))));
                            var_23 |= (((arr_6 [i_1 - 1] [i_2 - 2] [i_2 - 2]) + (((!((min((arr_15 [16] [4] [i_2] [i_4] [i_6]), (arr_2 [8])))))))));
                            var_24 |= (max((((arr_14 [i_0] [i_0 - 3]) ? (((min((arr_14 [i_2 + 1] [i_1]), 1)))) : (min(1, 14805072630962228156)))), ((1 ? (arr_13 [i_0] [i_0] [i_2] [i_4] [i_4] [i_6]) : (10 + var_12)))));
                            var_25 = (min(var_25, (arr_19 [i_4] [i_0] [i_0])));
                        }
                        var_26 = 18446744073709551609;
                        var_27 = (min(var_27, (arr_6 [18] [i_1] [i_2 - 1])));
                    }
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_1] = (arr_22 [i_1]);
                        var_28 = (((((arr_15 [i_0] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_8]) || (arr_10 [i_1]))) ? (arr_19 [i_0] [i_7 + 1] [19]) : (arr_24 [i_8 + 1] [i_7 - 1] [i_1 + 1] [i_0 - 1])));
                    }
                    var_29 = (max(var_29, (arr_24 [i_0] [i_0] [i_0] [i_7])));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {

                    for (int i_10 = 4; i_10 < 19;i_10 += 1)
                    {
                        var_30 *= ((var_6 ? (arr_14 [i_0] [i_1]) : (arr_24 [i_0] [i_1] [i_9] [i_0])));
                        var_31 = (arr_31 [i_1] [i_1]);
                        var_32 = (max(var_32, (((((arr_19 [i_0 - 2] [i_1] [i_0 - 2]) ? (min(1, 2687716230)) : var_9))))));
                    }
                    var_33 = (min(((!(arr_18 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1] [i_0 - 4] [i_0 - 1]))), (((max(1, var_9)) != (arr_21 [i_1])))));
                    var_34 = (arr_22 [i_1]);
                    arr_33 [i_1] = (max((arr_24 [i_9] [i_9] [i_0 + 2] [i_0 + 2]), ((min((arr_26 [i_1] [i_1]), (arr_2 [i_1]))))));
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_13 = 3; i_13 < 19;i_13 += 1)
                            {
                                arr_45 [17] [17] [i_1] [i_13] [i_13 - 3] [i_13] [i_0 + 2] = (arr_30 [i_1] [i_12] [i_11 - 1] [i_1]);
                                var_35 ^= ((~var_2) ? ((-(arr_13 [i_0 - 4] [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))) : (((arr_32 [i_0] [i_1 + 1] [i_0] [i_12]) + (arr_21 [i_12]))));
                                var_36 &= (arr_35 [i_0] [i_12]);
                                arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1] = 6;
                                var_37 = (min(var_37, (((+(((arr_27 [i_1] [i_12] [i_13]) * var_4)))))));
                            }
                            var_38 = ((((var_8 - (arr_28 [i_1] [i_1]))) != ((var_6 ? (arr_28 [i_1] [i_1]) : (arr_28 [i_1] [i_1])))));
                            arr_47 [i_0] [i_12] [i_0] [16] [6] &= (min(((!(arr_42 [i_12] [i_11] [i_11] [i_11] [i_11 - 1] [i_11 + 3]))), ((16026547615687837398 && (arr_42 [i_12] [i_11] [i_11 + 3] [i_11] [i_11 + 2] [i_11 + 2])))));
                        }
                    }
                }
            }
        }
    }
    var_39 = (max(((var_7 ? var_7 : var_9)), (min(var_6, var_12))));
    var_40 = (max(var_40, ((max(var_3, (((var_13 ? ((min(var_11, var_7))) : ((35 ? var_6 : var_8))))))))));
    #pragma endscop
}
