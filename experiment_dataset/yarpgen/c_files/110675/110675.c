/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((((var_13 == (~-509722047))) ? (((((-1 ? 18446744073709551615 : -26189)) == (((var_2 ? var_9 : var_1)))))) : var_11));
    var_16 = ((1 ? 8 : 248));
    var_17 = (!-12831);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((-18 << 1) || ((max(-253, (12 / var_0))))));
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_19 = (min(var_19, -26190));
            arr_9 [i_1] = (var_1 >> (-26210 + 26260));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_20 = (((3 ? 7 : 12288)));
                var_21 = (((arr_4 [i_3]) ? -2 : 1));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                var_22 = (arr_3 [i_4]);

                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    var_23 = ((3 ? (arr_18 [i_4 - 1] [i_4 - 1]) : (26194 ^ -509722038)));
                    var_24 = var_6;
                    var_25 = ((-((-1976069944 ? 1 : -26189))));

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_26 = (arr_7 [i_4]);
                        var_27 = (((arr_6 [i_1] [i_6]) & (~13749150423675540644)));
                        arr_22 [i_6] [i_2] [i_4] [i_2] [i_1] = var_3;
                        var_28 = var_9;
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_29 = (max(var_29, (1 & 27883)));
                        var_30 = (!-23071);
                        var_31 = (((arr_23 [i_5 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_1]) % var_3));
                        var_32 = (min(var_32, ((((arr_21 [i_1] [i_5 + 2] [i_4 + 1] [i_5] [i_5]) / (arr_21 [i_7] [i_5 + 2] [i_4 + 1] [i_7] [i_7]))))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_33 = var_13;
                        var_34 = (((((629610095213968689 ? 30 : 18446744073709551590))) ? 629610095213968677 : 3));
                    }
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        var_35 = ((-16228 ? (var_2 > var_1) : (arr_26 [i_9] [i_2] [i_2] [i_1])));
                        var_36 = var_14;
                        var_37 = (-26185 && 16228);
                        var_38 = ((var_7 ? 1 : (arr_15 [i_4] [i_4 - 1] [3] [i_1] [10] [i_1])));
                        var_39 = (min(var_39, ((((arr_1 [i_5 - 2] [i_4 + 1]) ? 34 : (5597392234906711412 | -57))))));
                    }
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_40 |= var_11;
                    var_41 = (((24434 ? 41101 : 4939)) & (!57588));
                }
            }

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    arr_41 [i_1] = ((1073725440 ? 3 : -3));
                    arr_42 [i_11] [i_12] = (~70368744177663);
                    var_42 &= (max(-3839, (!5597392234906711412)));
                    var_43 = (((!238) ? (!255) : ((((!var_14) == ((68719476736 ? -23 : (arr_3 [11]))))))));
                    arr_43 [i_11] [i_12] = var_9;
                }
                var_44 = (((arr_3 [i_11]) || ((var_1 >= (arr_4 [i_11])))));
            }
        }
        var_45 = (31 & -1073725422);
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {
        var_46 = arr_0 [i_13];
        var_47 = -8188;
        var_48 ^= (((((arr_27 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) ? (arr_27 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) : (arr_27 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))) << (42632 + 125)));
        var_49 &= var_6;
    }
    #pragma endscop
}
