/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                var_17 -= (~var_2);

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_18 = (max(var_18, var_1));
                    var_19 = 536870656;
                    arr_11 [i_3] = var_10;
                }
            }
            var_20 -= (((((arr_5 [i_0]) + 49525)) + 57740));
            var_21 = (max(var_21, 10252043585023143251));
            arr_12 [i_0] [i_1] [i_1] &= var_6;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_15 [i_0] [i_4] = ((((-(((arr_5 [i_0]) >> (10252043585023143227 - 10252043585023143188)))))) ? -284830369 : ((((1364624578 - (arr_1 [i_0]))) | 10252043585023143251)));
            var_22 = (!1);
            var_23 = -1;
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            var_24 = ((((var_15 == var_10) / var_7)) << (((((var_16 * -4583614558468105867) ? -var_3 : (max((arr_19 [i_0]), 0)))) - 4294950616)));
            var_25 = ((((arr_3 [i_0] [i_0]) > 0)));
        }
        arr_20 [i_0] [i_0] = var_3;
        arr_21 [i_0] = (((((~var_13) * 47)) != (((((-(arr_0 [i_0])))) + -9087103313498356783))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                {
                    var_26 = (10725 - var_4);
                    arr_28 [i_6] [0] [i_8] |= var_14;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_27 = ((((((10252043585023143251 + (arr_6 [i_6] [i_6] [i_6]))))) - var_10));
                    var_28 *= (arr_19 [i_10]);
                    var_29 = (arr_10 [i_6] [i_10] [i_9] [i_10] [i_10]);
                    var_30 ^= ((10252043585023143264 >> (!var_6)));
                    var_31 = var_16;
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 18;i_11 += 1)
    {
        var_32 = ((((((arr_35 [i_11]) + (arr_36 [i_11] [i_11]))) - ((max(1, var_12))))));
        arr_38 [i_11] = ((~(((1 != -111) - (((!(arr_37 [i_11]))))))));
        var_33 = (min(var_33, (((((~(min(var_12, (arr_36 [i_11] [i_11]))))) | (((~(4033232402 ^ 1)))))))));
        var_34 *= (min(((((!var_7) < 49))), -21));
    }
    var_35 |= (~10252043585023143269);
    var_36 = ((var_6 ? (~-19680) : var_3));
    #pragma endscop
}
