/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, -var_2));
    var_12 = (((((max(220, 35)))) >= (max(var_1, var_3))));
    var_13 = ((((!((min(209, 47108))))) ? 27 : (var_3 == -1461100886)));
    var_14 = (min(((((((var_0 ? var_10 : var_5))) ? ((47102 ? var_7 : var_0)) : (!var_10)))), ((max(var_9, var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((29 * 220) % (min((arr_0 [i_1]), (min(var_7, (arr_4 [i_0] [i_0]))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = -18430;
                                var_17 = (((((~(min(18434, var_7))))) ? (~var_6) : ((((arr_4 [i_1] [i_4]) ? (arr_4 [i_3] [i_0]) : (arr_4 [i_0] [i_2]))))));
                                var_18 = ((((((((4294967295 ? (-9223372036854775807 - 1) : 11358))) ? 0 : (!0)))) ? 37743 : 103));
                                var_19 = (arr_3 [i_4] [i_1] [i_1]);
                                var_20 = (((arr_10 [i_0] [i_1] [i_2] [i_3]) >= ((((min(var_2, var_4))) * ((max(220, 61970)))))));
                            }
                        }
                    }
                    var_21 -= (((((((4294967295 ? 2669791959 : var_3)) * (arr_4 [i_0] [i_1])))) ? ((2517848375 ? (-11359 & 1777118921) : (71916856549572608 && 41016469))) : (((((min(-5564471528946592343, var_3))) ? -36 : ((min((arr_6 [i_0]), (arr_8 [i_0])))))))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_22 = var_4;
                        var_23 = 0;
                        var_24 = (arr_3 [i_0] [i_1] [i_0]);
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((((min(var_5, (arr_11 [i_0] [i_1] [i_1] [i_2] [22] [i_5])))) * (min((arr_2 [i_0]), 2564128198))))) ? (((-((~(arr_10 [i_5] [i_2] [22] [i_0])))))) : (((arr_15 [i_0]) ? (min(var_2, (arr_14 [i_5] [i_2] [i_1] [i_0]))) : (((-8890 ? 27219 : 1)))))));
                        var_25 = (max((((arr_16 [i_1] [i_1] [i_1] [3]) ? ((2517848355 ? var_2 : (arr_11 [i_5] [i_2] [i_0] [i_1] [1] [i_0]))) : (((min(var_5, (arr_12 [i_0] [i_1] [i_2] [12] [i_5]))))))), ((((var_0 >= var_4) != var_1)))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] = 4294967295;
                        var_26 = (arr_4 [i_1] [i_1]);
                        var_27 -= (min(((+((var_7 << (((var_1 + 7639770994949405171) - 5)))))), ((((!(arr_12 [i_0] [i_1] [i_2] [i_6] [i_6])))))));
                        arr_21 [i_1] [4] [i_1] = (min((min((arr_7 [i_0]), (arr_7 [i_1]))), (min((((arr_5 [i_0] [i_0] [i_0]) ? (arr_9 [i_0]) : (arr_6 [i_6]))), ((((arr_8 [i_0]) | var_8)))))));
                    }
                }
                var_28 = var_1;

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_25 [i_0] [i_1] [i_7] = -0;

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_29 = (((arr_15 [22]) | var_1));
                        var_30 = (((((var_8 ? var_10 : var_9))) ? (~var_5) : -var_8));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            var_31 = 3566;
                            var_32 ^= (((var_2 + 2147483647) << (((((arr_28 [i_0] [i_1] [i_7] [i_9] [i_10]) + 98)) - 6))));
                            var_33 = ((!(((var_1 ? var_1 : (arr_22 [i_0] [i_0]))))));
                            var_34 = ((~(arr_0 [i_0])));
                            var_35 = var_7;
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] = ((((min(var_3, 4294967295))) << (((((min(4167748026674471503, 1))) && var_7)))));
                            var_36 = (((min((((var_1 ? var_8 : var_5))), (arr_11 [i_0] [i_1] [i_0] [i_9] [i_9] [i_9])))) ? (arr_29 [7]) : (((((-(arr_9 [i_0])))) ? var_4 : (arr_37 [i_1]))));
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                        {
                            arr_44 [i_0] [i_12] [i_0] [i_0] [4] [i_0] = ((!(((~(~var_6))))));
                            var_37 -= (arr_0 [i_1]);
                            var_38 = ((((min((min((arr_2 [i_0]), (arr_11 [i_12] [i_12] [i_9] [i_7] [i_1] [15]))), (arr_7 [i_9])))) ? (~7680) : (((arr_28 [i_0] [i_0] [i_0] [i_9] [i_0]) ^ (arr_42 [i_12])))));
                            var_39 = var_3;
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                        {
                            var_40 = (~47);
                            var_41 ^= min((((arr_22 [i_13] [i_13]) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : var_2)), ((~(arr_23 [i_9] [i_9] [i_9] [i_9]))));
                            var_42 = (var_5 ? (((var_6 - var_9) ? (var_10 - var_3) : (((-(arr_3 [i_13] [i_0] [i_0])))))) : (((((((arr_22 [i_0] [i_0]) + var_3))) ? var_5 : (arr_28 [i_13] [i_1] [i_7] [i_13] [i_13])))));
                            var_43 = (((min((min((arr_14 [14] [i_1] [i_7] [14]), var_5)), (((~(arr_43 [22] [6] [22] [i_9] [i_9] [i_13]))))))) ^ (3566 ^ 5091881565906657128));
                        }
                        var_44 = (min(var_44, ((min((((~((min(11358, 18436)))))), ((-(var_5 | var_1))))))));
                        var_45 = ((~(((!(((var_7 / (arr_42 [18])))))))));
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_46 = var_8;

                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            arr_52 [i_0] [i_1] [i_7] [4] [i_15] = (~var_4);
                            var_47 = ((((((~var_2) * ((min((arr_4 [4] [4]), (arr_42 [20]))))))) >= (max(var_9, ((var_0 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [3]) : var_9))))));
                            var_48 = (max(var_48, 11012));
                            var_49 = (max(var_49, var_3));
                            var_50 -= ((~(arr_18 [i_7])));
                        }
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            var_51 = ((var_6 ? ((min(-var_2, (((arr_5 [i_14] [i_1] [i_14]) ? -6 : 100))))) : (((var_1 + (arr_36 [i_0] [i_1] [i_7]))))));
                            var_52 = (((((min(var_2, var_6)))) | (((((var_1 ? var_7 : var_7))) ? (max(var_9, var_1)) : -var_6))));
                            arr_56 [8] [8] [i_1] [i_1] [i_1] = ((((min((arr_15 [i_16]), var_5))) ? (((~-108) + (min(99, 7448116419642501870)))) : ((((var_5 ? var_6 : var_3))))));
                            arr_57 [i_0] [i_1] [i_1] [i_0] [i_0] = (min((min((min(var_3, var_0)), (((var_4 ? var_7 : var_5))))), var_8));
                        }
                        var_53 = (min(var_53, (((((min(((var_1 ? (arr_54 [i_14] [i_14] [i_14] [i_7] [i_7] [19] [i_0]) : var_2)), (arr_13 [i_14] [i_7] [i_14] [i_7] [i_1] [i_0])))) ? ((-(arr_54 [i_0] [i_0] [2] [i_14] [2] [i_14] [i_0]))) : (min((!-15856), ((var_0 ? var_4 : var_9)))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
