/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (arr_2 [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 = (((arr_7 [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [i_2]) : var_9));
                    arr_8 [i_0] [0] [0] = (((arr_5 [i_0] [i_0]) || 1));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_17 = (arr_0 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_18 += ((715 ? -4555 : 593648748));
                                var_19 = (((arr_4 [18] [i_1] [i_3]) ? var_8 : 4027204722));
                                arr_17 [i_0] [i_0] [i_0] [i_0] = ((-556917058 & ((1 ? -556917069 : -16936))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_20 = 32767;
                            var_21 = 971959374;
                            var_22 = (-556917073 >= 153476005);

                            for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
                            {
                                var_23 = (min(((((min(var_8, -1))) ? ((var_11 ^ (arr_13 [i_7] [i_6] [i_0]))) : (arr_13 [i_1] [i_6] [i_7]))), (((!(arr_9 [i_8 + 1] [i_1]))))));
                                arr_28 [i_1] [i_1] [i_6] [i_7] = var_3;
                            }
                            /* vectorizable */
                            for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
                            {
                                arr_31 [i_9] = var_7;
                                var_24 = ((-1 | ((var_5 ? 6392269735578007463 : 15933123693890088719))));
                                arr_32 [i_0] [i_6] [i_7] [i_9] = (((var_0 ? var_0 : -117226820)));
                                var_25 = 1;
                                var_26 = (min(var_26, var_1));
                            }
                            for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
                            {
                                var_27 = (min(((var_8 ? (arr_15 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [19]) : var_8)), var_8));
                                var_28 *= (min((arr_16 [19] [19] [19] [i_7] [19]), (((!(((891540231097259240 >> (var_8 - 1308855613)))))))));
                                arr_35 [i_0] [i_0] [i_1] [i_1] [i_6] [i_10] [i_0] = min(var_4, (((-1 != ((var_7 ? (arr_14 [i_10] [1] [i_0] [i_0] [i_0] [i_0]) : 2987101087))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_29 = var_2;
                            var_30 = ((((((!var_6) ? ((267762574 ? 1277313690 : 1)) : (~var_10)))) ? (!7098766854475188999) : (min(53475, (~var_3)))));
                            arr_42 [i_0] [i_1] [i_1] [i_1] [i_11] [i_12] = (!556917060);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 19;i_14 += 1)
                    {
                        {
                            var_31 += (arr_43 [i_0] [5] [1]);
                            var_32 = (max(var_32, (arr_15 [i_14 - 3] [i_14 - 3] [1] [i_13] [i_13] [i_13] [i_13])));

                            for (int i_15 = 0; i_15 < 20;i_15 += 1)
                            {
                                var_33 = ((30 ? (~var_5) : 1277313690));
                                var_34 = ((((!(1 <= var_13))) ? var_2 : var_13));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
