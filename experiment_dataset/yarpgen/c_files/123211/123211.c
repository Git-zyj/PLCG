/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(var_6, var_5)) ^ (!var_10)))) ? (min(var_7, (min(var_2, var_6)))) : ((((!(36716 * 9973463055919054878))))));
    var_12 = (var_2 ^ var_8);

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_13 -= -var_10;
            arr_6 [i_1] = ((!(((-5184303408889388910 ? 1469424657 : 9163894797797544340)))));
            arr_7 [i_0] [i_1] = var_2;
            var_14 = (min(var_14, (!var_3)));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 4; i_3 < 8;i_3 += 1)
            {
                var_15 = ((~(!-var_8)));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_16 [i_4] [i_3] [i_3] [i_0] = (!(min((!var_8), (!var_3))));
                    var_16 = var_3;
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_17 = (max((((!628279118) == var_8)), (!var_9)));

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_18 = ((!((((((var_5 ? var_6 : var_6))) ? (((var_0 ? var_3 : var_0))) : ((var_10 ? var_2 : var_6)))))));
                        var_19 = (min(var_19, (((!((max((var_9 * var_3), (var_6 ^ var_6)))))))));
                        var_20 = ((!((((!var_7) ? (9185039265857068330 == 1763508747) : (~var_0))))));
                        var_21 = ((-((((min(-1763508759, 178))) ? -var_9 : var_7))));
                    }
                    var_22 *= (((((55 ? 1763508758 : 1353249080) + ((var_10 ? var_4 : var_2))))));
                    arr_24 [i_3] = ((!((max(1, -6586820479453885770)))));
                }
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_23 = (((((4046415451816573481 ? 9185039265857068322 : 13664))) ? (((min(var_4, var_7)))) : ((~(!var_4)))));
                    arr_30 [i_8] [i_8] [i_7] [i_8] [i_0] = (((!var_9) * (min((var_4 % var_8), -var_10))));

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_24 ^= max((var_10 ^ var_3), (((!var_6) % -var_0)));
                        var_25 = ((!(((~(max(var_1, var_1)))))));
                        arr_33 [i_0] [i_0] [i_8] [i_8] [i_9] [i_9] [i_9] = (min((((!(var_3 || var_10)))), (max(((var_9 ? var_0 : var_0)), (var_0 ^ var_5)))));
                    }
                }
                arr_34 [i_0] [i_2] [i_7] = (((var_4 ? ((max(var_3, var_3)) : var_4))));
            }
            for (int i_10 = 3; i_10 < 8;i_10 += 1)
            {
                arr_37 [i_10] [i_10] [i_10] [i_0] = (~((~((max(34, 1))))));
                var_26 = (max((max((!var_4), (max(var_5, var_4)))), ((((-147370658 || 34) && (!var_1))))));
                var_27 ^= ((~(!9261704807852483293)));
                arr_38 [i_0] [i_0] [i_10] [i_10] = (~(!-var_3));
            }
            var_28 = (min(var_28, ((((((599909246148904670 ? 253 : (~var_8)))) % -4046415451816573476)))));
            arr_39 [i_0] = ((!((!((max(var_5, var_7)))))));
        }
        arr_40 [i_0] [i_0] = -var_1;
        var_29 -= ((((((~var_9) ? var_7 : (!var_4)))) % (((((var_1 ? var_9 : var_9))) ? (var_4 + var_9) : (~4046415451816573474)))));
    }
    #pragma endscop
}
