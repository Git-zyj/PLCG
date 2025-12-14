/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((min(var_9, 7434122038029354461)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_4;
                var_12 = (arr_3 [i_1]);

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_13 &= 4366976360017938709;
                        var_14 = (8386560 ? -1 : 16634408760207185438);
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_15 -= 14079767713691612892;
                            arr_16 [i_4] [i_1] [i_2] [i_4] [i_2] [i_0] = (!var_4);
                            arr_17 [i_1] [4] [i_1] [i_1] = (min(var_8, 16634408760207185438));
                        }
                        var_16 = ((((min((var_4 <= 14079767713691612902), ((-(arr_12 [i_0] [i_2] [i_0] [i_1] [i_0] [i_0])))))) >= (min((arr_10 [i_0] [i_0] [i_0] [i_0]), ((var_10 ? 17583596109824 : var_7))))));
                        var_17 = (min(var_17, (max((!-5), -var_1))));
                        var_18 -= (min(var_3, 6382680356807789608));
                    }
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        arr_22 [i_2] [i_6] [i_2] [i_0] [i_0] = (arr_6 [i_0] [i_1] [i_1] [i_6]);
                        var_19 &= (min((-12064063716901762020 && 1828493186), 4063232));
                        var_20 ^= min(var_0, ((~(max((arr_8 [i_1]), var_9)))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_25 [5] [i_6] [i_1] [i_2] [i_1] [i_0] = ((((((arr_4 [i_1] [i_2]) <= var_10))) <= (arr_13 [i_2] [i_1] [i_7] [i_6])));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_6 - 2]);
                            var_21 &= -var_5;
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_30 [i_0] [i_1] = (1812335313502366150 && 2147483628);
                            arr_31 [i_0] [i_1] [i_2] [i_0] [i_8] [i_1] = (1125899902648320 <= var_3);
                        }
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_35 [10] [i_2] [10] [i_0] = 30117;
                        arr_36 [6] [i_1] [4] [i_1] [i_1] [i_1] = (!-var_1);

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_22 = (max(var_7, (((((max(2001539494, 134217727))) && ((((arr_24 [i_0] [7] [7] [i_2] [i_9] [i_9] [i_10]) ? var_9 : (arr_1 [i_9] [i_10])))))))));
                            var_23 &= var_2;
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_24 *= (~(!var_5));
                            var_25 = (min((((((arr_39 [i_0] [2] [2] [2] [3]) ? var_3 : var_3)))), (arr_40 [i_0] [i_0])));
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_26 = (max(-var_3, 12064063716901762015));
                            arr_44 [i_2] [i_2] [8] [i_9] [i_12] = ((~(((-32759 + 2147483647) >> (var_6 - 14931227627688571314)))));
                        }
                    }
                    arr_45 [i_0] [i_1] [i_2] = var_2;
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    var_27 += max((((!((min(var_8, var_3)))))), ((((((arr_13 [i_0] [i_0] [6] [i_0]) + (arr_4 [i_0] [i_0])))) ? -25156 : (max(var_10, (arr_7 [i_13]))))));
                    var_28 = (!918581188);
                    arr_49 [i_0] [2] = (((((arr_37 [i_13] [i_1] [i_1] [i_1] [i_0]) ? (arr_37 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_4)) > -730384333));
                }
            }
        }
    }
    var_29 = (min(((-((15758308200197301378 ? 8070362847077627578 : var_0)))), 960));
    var_30 = ((var_8 ? var_0 : (var_0 | var_10)));
    #pragma endscop
}
