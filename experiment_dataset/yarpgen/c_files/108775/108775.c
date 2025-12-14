/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-8372224 ? (0 && var_4) : ((max(var_3, var_0)))));
    var_19 = ((~(((var_12 ? var_8 : var_1)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = (((-(arr_4 [i_0]))));
            arr_6 [i_0] [i_0] [i_0] = var_9;
        }

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_21 = var_0;
            arr_11 [i_0] [i_2] [i_0] = (~var_10);
            arr_12 [i_0 + 1] [i_0] = ((((((var_17 ? var_3 : 2204656545)))) ? -var_8 : (((~var_10) ? var_10 : (((var_14 ? 255 : var_12)))))));
            var_22 = (((((-(arr_2 [i_0 - 1])))) ? (((((var_2 ? var_0 : var_11))) ? 5304 : (min(7258, 31)))) : (((arr_3 [i_0] [i_2]) ? var_13 : (arr_5 [i_0 - 1] [i_2] [i_0 - 1])))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                var_23 = (!7207228351757467498);

                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        var_24 += 2289288396660154118;
                        var_25 = (!-1266681584);
                    }
                    var_26 -= -32;
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    var_27 &= 26329;
                    var_28 = ((-(!var_10)));
                    var_29 = (!var_13);
                }
                var_30 = (min(var_30, 21066));
            }
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                var_31 += ((!((((arr_22 [i_8 + 3] [i_0 - 1] [i_0 + 1] [i_0 - 1]) ? 26329 : var_16)))));
                arr_28 [i_0] [i_0] [i_8 + 1] [i_0] = ((var_2 ? (((-9223372036854775807 - 1) ? (arr_23 [i_8 - 1] [i_3] [1] [i_3] [i_0 + 1]) : var_17)) : (((arr_22 [i_0] [i_0] [i_8] [i_8 - 1]) ? (((arr_7 [i_0] [i_3] [i_0]) + 21066)) : var_3))));
                var_32 = -26326;
                var_33 = -var_16;
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_34 = (!-var_5);
                var_35 = -17;
                var_36 = ((((((var_8 ? var_2 : 184518598))) ? 1574337843 : 90)));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                arr_34 [i_0] [i_3] [i_0] [i_0] = (arr_22 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                var_37 = ((~((var_10 ? (arr_25 [16] [8] [i_10]) : var_17))));
                var_38 = var_7;

                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    arr_39 [13] [i_0] = (!26329);
                    arr_40 [2] [1] [i_0] [i_11] = ((((16739025 ? 842294880 : 184518612))) ? (!-5448022110243414531) : (~var_4));
                    arr_41 [i_0] [i_3] [i_3] [i_10] [i_11] = (arr_9 [i_0] [i_0]);
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                {
                    var_39 = ((~((var_1 ? var_11 : var_11))));
                    var_40 = ((((((arr_30 [i_0] [i_0] [i_0] [i_0 + 1]) ? var_6 : 26324))) ? -var_9 : -0));
                }
                for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    var_41 = (~var_13);
                    var_42 = (((((122 ? 0 : 129))) ? (((0 ? 30127 : var_17))) : ((var_14 ? (arr_29 [i_0] [i_13]) : var_14))));
                }
            }
            var_43 = (((min(2, 1)) * (((arr_18 [i_0]) ? (arr_19 [i_0 + 1] [i_0] [i_3] [i_3] [i_3] [3]) : (arr_18 [i_0])))));
            var_44 = ((((((var_4 ? var_4 : -4466373052057349614)))) ? ((5 ? 11 : (((-15 ? var_1 : var_0))))) : (~17)));
        }
        var_45 = (((~(var_6 >= 1))));
        var_46 ^= (((~var_6) ? ((((((1 ? -22 : 18446744073709551598))) ? (!37986) : 110))) : (((((var_3 ? 31 : 955085273))) ? var_15 : (~var_0)))));
        var_47 = (max(var_47, (+-60546)));
    }
    var_48 = var_2;
    #pragma endscop
}
