/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_8 + var_2) - (((var_0 ? var_8 : var_7))))) >> (((min((min(-28778, 1526986147)), 1924075327)) - 1526986118))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_15 = 5267076811745316568;
            var_16 = ((var_3 ? var_9 : (((-1357649425 + 2147483647) >> (var_9 - 5718)))));
        }
        for (int i_2 = 4; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0 + 1] [i_2] [i_0] = (var_5 > 9332741854472523658);

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_11 [i_0] [i_0] [i_2] [i_3] = (var_13 || 167);
                arr_12 [i_2] &= ((1357649421 ? 1924075327 : (-3088811106280920734 || var_0)));
            }
            var_17 = ((var_10 && (1924075327 && 3088811106280920734)));
            var_18 = (89 ? ((76 ? var_12 : var_11)) : 180);
            arr_13 [i_0] = (987663222 % var_12);
        }
        for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_19 = (9332741854472523660 && 1);

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                arr_21 [i_0] [i_4 + 1] [i_4] [i_4] = ((52 << ((((-3088811106280920734 ? var_2 : 4277661300)) - 15176179106041406338))));
                var_20 = ((((var_5 ? 1 : 22063)) / (((-9223372036854775807 - 1) ? 79 : 0))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_27 [i_7] [i_0] [i_5] [i_0] [i_0] = ((((var_10 ? 4277661326 : var_5)) > var_7));
                            var_21 = ((var_2 | 0) ? var_8 : ((var_9 ? 1010424259 : 9114002219237027958)));
                            var_22 &= (0 > 14421);
                        }
                    }
                }
            }
            var_23 = (((var_3 % var_3) ? 1023 : var_0));
        }
        arr_28 [i_0] = (((((167 ? 1023 : 0))) || (((-1 ? 408 : 10304)))));
    }
    var_24 = (17305966 && 5720757665205291625);
    #pragma endscop
}
