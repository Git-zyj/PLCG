/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 = (((var_11 || (arr_3 [i_0] [i_1]))));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_17 += (arr_6 [i_0] [i_1] [i_2] [i_2]);
                var_18 = 2147483622;
                var_19 = (max(var_19, ((((arr_4 [i_0]) / (arr_4 [i_1]))))));
            }
        }
        var_20 *= (var_1 | var_11);
        arr_7 [i_0] = (~var_4);
        var_21 = (max(var_21, (arr_5 [12] [i_0] [12] [i_0])));
        var_22 = (((arr_3 [i_0] [15]) == (((arr_4 [i_0]) % -15339))));
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = (((((var_14 ^ (arr_9 [i_3] [i_3 + 1])))) & (((~(max((arr_9 [i_3] [i_3]), 3311313357)))))));
        var_23 = (arr_9 [i_3 - 1] [i_3]);
        arr_11 [i_3 - 3] = (max(((((min(var_12, (-2147483647 - 1))) & var_6))), (min(983653938, 9223372036854775797))));
        arr_12 [i_3] [3] = -var_10;

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_17 [8] [i_4] [8] |= ((max(48, (arr_14 [18]))));
            arr_18 [18] &= ((-(min(-var_14, ((max(var_5, var_6)))))));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_24 = (min((((var_0 / var_12) / (min(8796093022207, var_6)))), ((min((((!(arr_14 [i_5])))), (arr_19 [i_5]))))));
            arr_21 [i_5] = (min(((min(((max(var_1, -8259))), var_9))), (min(((min(8796093022207, var_3))), (min(5920440761650394814, (arr_16 [i_5])))))));
            var_25 &= (((((73 ? 9223372036854775797 : 3311313357))) ? (min((arr_13 [i_3 - 3] [6] [i_5]), (arr_16 [16]))) : var_7));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_31 [i_8] [i_7] [i_5] [i_5] [i_5] [i_3] = (((((min((arr_30 [i_3 + 1] [i_3 - 3] [i_3]), (arr_30 [i_6] [4] [i_3]))))) - (~-9223372036854775798)));
                            var_26 = ((-(min(983653927, 3311313374))));
                            arr_32 [i_7] [i_5] [i_5] [i_5] [i_8] = ((((min(5920440761650394837, (-2147483647 - 1)))) | var_12));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_27 = (min(((max(983653939, 387724625))), (min((arr_9 [i_3 - 2] [i_9]), var_10))));
            var_28 *= (18230587771393891143 + 32749);
            var_29 = (min(var_29, ((((((min(((max(-2035592241, var_1))), (~-9223372036854775797))) + 9223372036854775807)) << (((((min(((min((arr_30 [i_3] [i_9] [i_9]), var_2))), -4472191515021872667)) + 4472191515021872706)) - 39)))))));
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_30 = (~-8796093022208);
        arr_38 [i_10] [i_10] = (min(((~(min((arr_33 [i_10] [15]), 1930175858)))), ((min((min(var_1, var_0)), var_12)))));
    }
    var_31 = ((~(!var_13)));
    var_32 = ((var_9 & (min(((min(57931, var_9))), var_11))));
    var_33 = ((1188340022 ? 1248855583 : var_11));
    #pragma endscop
}
