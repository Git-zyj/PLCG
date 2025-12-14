/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_14 = var_5;
        var_15 += (((-32767 - 1) ? (max((((41655 ? 23880 : 394291718))), (((-9223372036854775807 - 1) + var_7)))) : -var_7));
        var_16 = (min(var_16, (!var_7)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = (!-var_9);
        arr_6 [i_1] &= ((-var_12 || (41659 != 4095)));
        arr_7 [i_1] [i_1] = (-((max(var_11, 1))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            var_18 = (-var_8 || -var_8);
            arr_16 [i_2] [i_3 + 3] = ((((-392618373 ? 3204918744 : 32752)) - (((min(23870, var_10))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_19 = (min(var_19, (min((!0), (min(15360, -392618358))))));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_25 [i_4] = (min((!1429455535), (max(51184, -1666763713))));
                            var_20 = (max(var_20, ((max((min(var_11, (min(var_8, 12475)))), (((!(~var_0)))))))));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_21 ^= (~363974493);
                            var_22 = var_1;
                        }
                        var_23 = (363974493 + 3900675578);
                        var_24 = (min(var_24, (((((min(1, var_1) ? ((var_9 ? var_0 : 24325)) : ((-1904715682 ? var_11 : var_4)))))))));
                    }
                }
            }
            arr_28 [19] = ((-1094 ? 18446744073709551615 : 950585725));
            var_25 ^= (!-0);
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_26 = ((~((1 ? 18775 : var_10))));
            var_27 -= (((((-18775 ? var_13 : var_13))) || (~0)));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    var_28 = (max(var_28, (((-(~9232999846099041612))))));
                    var_29 = (var_3 ? (~146912845) : 25430);
                }
            }
        }
        arr_38 [i_2] = (~0);
    }
    var_30 &= var_6;
    var_31 = var_5;
    #pragma endscop
}
