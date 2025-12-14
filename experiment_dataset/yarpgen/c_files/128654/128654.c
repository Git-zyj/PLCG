/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_19 += 0;

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_20 = ((-7 ? (max(((2147483647 ? 18446744073709551612 : 6)), 8191)) : 10));
                var_21 += ((((!(56043 <= 32351))) ? ((+(min((arr_8 [i_0] [i_1] [i_2]), var_14)))) : (((~(min(773341405, var_6)))))));
            }
            arr_9 [i_0] [i_0] [i_0] = ((~(((((max(230, (arr_8 [i_0] [i_0] [i_1])))) || 1789860538876071612)))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {

                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    arr_18 [i_0] [i_3] [i_4] [i_5 - 2] [i_5 + 1] = 8176;
                    arr_19 [i_0] [i_0] [i_4] [i_5 - 1] = (arr_16 [i_4 - 1] [i_4 - 1] [i_0] [i_5] [i_5 - 1] [i_5 - 1]);
                    arr_20 [i_5 - 2] [i_0] [i_0] [i_0] = (((arr_0 [i_4 + 1]) ? 219 : (arr_0 [i_4 + 1])));
                    arr_21 [i_3] [i_3] [i_4] [i_5] [i_4] [i_4] |= 4;
                }
                var_22 = var_18;
                var_23 += 178294373;
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_24 = (max(var_24, ((((arr_3 [i_3]) ? (arr_4 [i_6] [i_3] [i_0]) : var_13)))));
                arr_24 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_6]);
            }
            var_25 |= 65535;
            var_26 = (((arr_7 [i_0]) ? var_2 : ((var_9 ? 15 : var_2))));
            var_27 = (max(var_27, var_17));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_27 [i_0] [i_7] &= 18446744073709551615;
            arr_28 [i_7] [i_0] |= 159;
            var_28 = (max(var_28, var_8));
        }
        var_29 = ((26 / (arr_2 [i_0])));
        var_30 = -235;
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_32 [i_8] [i_8] = var_16;
        arr_33 [i_8] = (max(((max(var_18, (arr_30 [i_8] [i_8])))), (max((((var_18 / (arr_29 [i_8])))), (max(var_10, var_8))))));
    }
    var_31 = (((((var_13 << (var_15 - 12404594616139427173))) | ((10935778668358714138 ? 65535 : -54)))));
    var_32 *= ((175 ? 13618 : (max(32767, 1918367673))));
    #pragma endscop
}
