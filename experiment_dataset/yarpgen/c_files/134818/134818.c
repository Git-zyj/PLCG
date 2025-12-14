/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (~67108863);
                    var_20 = 198;
                }
            }
        }
    }
    var_21 = var_8;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_22 = (((((var_16 ? 238 : 255))) % -13583288405144382248));
                    var_23 = ((!(((13583288405144382219 ? 138 : 138)))));

                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        var_24 = ((!(~var_5)));
                        var_25 = ((!var_15) ? 142 : ((max(var_11, var_17))));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_21 [i_3] [i_3] = ((!(((var_16 ? 5 : 17509314180732035873)))));
                        arr_22 [i_5] [i_4] [i_3] = max(((min(33, (!18446744073709551615)))), (6926961578713136391 % 109));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_26 = 6926961578713136417;
                            var_27 = (6926961578713136383 ? 141 : 1452969170389329101);
                        }
                        for (int i_9 = 1; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_28 = (((((13284954005462080354 ? 138 : 72))) && (!10198217647504319707)));
                            var_29 = ((var_15 ? ((((!4) || var_0))) : (var_17 ^ 98)));
                            var_30 = -14803733019918147431;
                            var_31 = max(233, 247);
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_32 = ((~((10729798483921127489 ? var_6 : 239))));
                            arr_31 [i_3] [i_3] [i_10] [i_3] = (18446744073709551615 ^ var_5);
                            arr_32 [i_10] [i_4] [7] = (~var_1);
                            var_33 = var_15;
                        }

                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_34 = (((!0) ? 158 : (min((min(15662976113687820652, 34)), 18432396423540295615))));
                            var_35 = (min(var_35, (((((((var_8 || 129) ^ 127))) && 7281312955654060844)))));
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            var_36 |= (max(11624254292038767764, (min(11519782494996415198, 252))));
                            arr_38 [i_4] [i_7] = 149;
                            arr_39 [i_12] [i_4] [i_12] [i_5] = (~124);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
