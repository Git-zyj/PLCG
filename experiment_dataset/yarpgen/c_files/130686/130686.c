/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(var_1, var_10)) | (!var_4))) - (((var_2 ? var_10 : var_3)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_13 = (max(var_13, (((+(min((var_8 > var_6), ((var_9 ? var_11 : var_9)))))))));
            arr_6 [i_0] [i_0] [i_1] = ((((115 ? -1 : 255))) ? (max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_1]))) : ((((!var_11) + (arr_4 [i_0])))));
            var_14 = ((-((min((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_1]))))));
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_15 *= ((var_1 ? ((var_0 >> (((arr_4 [i_2]) - 190)))) : var_0));
            arr_9 [i_0] = ((var_11 ? (var_10 % var_8) : ((4 ? -8 : -5))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_16 = (min(var_16, (min(var_3, (((min(48678, (arr_14 [i_0] [i_3])))))))));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_17 [i_4] [i_4] [i_3] [i_4] = var_4;
                        var_17 = (min(var_17, var_6));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_18 = ((!((max(((var_7 ? (arr_4 [i_4]) : var_5)), (var_4 ^ var_9))))));
                            var_19 = (max((~var_1), (((var_1 & var_8) ^ var_2))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_20 &= (((((7836 ? 14 : var_10))) ? ((min((arr_8 [i_7] [i_5]), var_4))) : (~var_3)));
                            var_21 = (((!((max(var_11, var_7))))));
                            var_22 = ((var_6 & (!var_11)));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_23 = ((12997760101019828724 % (((var_10 <= var_7) ? (-6 != var_11) : var_10))));
                            var_24 = ((((((var_0 * var_8) ? var_11 : (((var_0 ? (arr_8 [i_3] [i_8]) : 5676)))))) || ((((var_3 ? 8653 : var_9))))));
                            var_25 = (((((8634 > -15) ? var_9 : (((max(0, (arr_16 [i_0] [i_3] [i_4] [i_5] [i_8]))))))) * ((((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) >> (var_8 - 13738))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_29 [i_10] [i_3] [i_4] [i_9] [i_9] |= (arr_19 [i_9 + 1] [i_9 - 1]);
                                var_26 = (((((var_8 ? var_2 : (arr_21 [i_10] [i_3] [i_3])))) ? (min(56904, 107)) : ((min(var_10, var_2)))));
                            }
                        }
                    }
                    var_27 = (!-var_6);
                    arr_30 [i_0] [i_0] [i_4] [i_4] &= var_5;
                }
            }
        }
        var_28 -= ((var_2 ? (((((arr_2 [i_0]) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_1)) * var_0)) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
