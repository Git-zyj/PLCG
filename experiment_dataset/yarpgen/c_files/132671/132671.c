/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_21 ^= ((!((min((arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 + 2] [i_1 + 2] [i_1 - 1]))))));
                    arr_7 [i_1] = ((((!((!(arr_6 [i_1]))))) ? (arr_6 [i_1]) : var_0));
                    arr_8 [i_1] [i_1] [i_0] [i_1] = ((!((((arr_6 [i_1]) ? (arr_6 [i_1]) : var_8)))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = 11088434638010978329;
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_22 = (max(var_22, (((!((max(var_6, (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))))));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_23 = ((1 ? (((((-2147483647 - 1) ? 1 : 1)))) : (!var_3)));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_4] = (arr_6 [i_1]);
                            arr_18 [i_0] [i_0] [i_0] [i_1] = (arr_16 [i_5] [i_1] [i_1] [i_4] [i_5] [i_3]);
                            var_24 = 23;
                            var_25 = (arr_10 [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_26 = (!var_5);
                            arr_22 [i_1] [i_3] [i_4] [i_4] = 40;
                        }
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_27 = (min((((arr_23 [i_1 - 1] [i_0] [i_0]) ? (arr_20 [i_7] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_0]) : (arr_23 [i_1 - 1] [i_1] [i_1]))), ((var_6 ? (arr_20 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_0]) : var_0))));
                        var_28 = (max(var_28, ((((!1) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_29 -= ((((arr_19 [i_1 + 2] [i_1] [i_1 + 2]) >> (((arr_19 [i_1 + 1] [i_1 - 1] [i_1 - 1]) - 193)))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_30 = (max(var_30, ((((arr_13 [i_0] [i_1 + 2] [i_0] [i_1]) ? (arr_29 [i_0] [i_1 + 2] [i_1] [i_1]) : var_1)))));
                            var_31 = (((((arr_24 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_1]) : (arr_10 [i_1])))) ? (arr_14 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]) : (arr_14 [i_1] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 1] [i_0]));
                        }
                        for (int i_9 = 2; i_9 < 15;i_9 += 1)
                        {
                            var_32 -= ((((((arr_4 [i_1 - 1] [i_1 + 2]) ? ((var_1 ? var_17 : (arr_4 [i_1 + 2] [i_9]))) : (!var_13)))) ? 71987225293750272 : (max((arr_5 [i_0] [i_0] [i_0] [i_0]), ((var_14 ? 9223372036854775807 : var_7))))));
                            arr_33 [i_9] [i_7] [i_1] [i_1] [i_0] = ((!(((var_7 ? -8242 : (arr_10 [i_1]))))));
                            var_33 = ((!((!(arr_1 [i_9] [i_9])))));
                        }
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            var_34 ^= var_7;
                            var_35 = (((((17437149946358990181 ? ((((arr_35 [i_0] [i_0] [i_3] [i_3] [i_0] [i_10 + 2]) || (arr_11 [i_0] [i_1] [i_1] [i_10])))) : (arr_0 [i_0] [i_0])))) ? var_13 : (!var_3)));
                            arr_37 [i_1] [i_0] [i_1] [i_1] [i_7] [i_7] [i_10] = var_18;
                            var_36 = (arr_20 [i_1] [i_1 + 1] [i_10 - 2] [i_10 + 2] [i_1] [i_10]);
                        }
                    }
                }
                arr_38 [i_0] [i_0] [i_1] = (arr_36 [i_1] [i_1] [i_1 + 1] [i_0] [i_0]);
                var_37 = (((arr_23 [i_1] [i_1] [i_1 + 2]) * ((var_14 ? (!var_13) : (arr_0 [i_0] [i_0])))));
                var_38 = (max(var_38, 1));

                /* vectorizable */
                for (int i_11 = 3; i_11 < 15;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_39 = var_16;

                        for (int i_13 = 1; i_13 < 12;i_13 += 1) /* same iter space */
                        {
                            var_40 *= (arr_47 [i_1] [i_0] [i_12] [i_13]);
                            var_41 = (min(var_41, var_12));
                        }
                        for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
                        {
                            var_42 |= ((!((!(arr_14 [i_14] [i_14] [i_12] [i_11] [i_1 + 2] [i_0])))));
                            var_43 &= ((!(arr_40 [i_14 + 3] [i_14 + 3] [i_14 + 2])));
                            var_44 = (((var_9 ^ var_12) ? (arr_19 [i_1 + 2] [i_1 + 1] [i_1 + 1]) : (arr_45 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11] [i_1])));
                            var_45 = (((((var_8 + 2147483647) >> 1)) <= (arr_13 [i_1] [i_1 + 2] [i_11 + 1] [i_14])));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 16;i_16 += 1)
                        {
                            {
                                var_46 = (min(var_46, (((!(!var_0))))));
                                var_47 = ((!(((31 ? 1 : 1)))));
                                arr_56 [i_11 - 3] [i_1] [i_0] = (((((arr_13 [i_1] [i_11] [i_15] [i_16]) ? var_13 : 18268341383694337897)) ^ (~8394422794297470907)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_48 = (max(var_48, var_1));
    var_49 = ((8394422794297470903 ? var_6 : ((((max(2, 816564214095656883))) ? var_8 : ((var_4 ? var_7 : var_6))))));
    #pragma endscop
}
