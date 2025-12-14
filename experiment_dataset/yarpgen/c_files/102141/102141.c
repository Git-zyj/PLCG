/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-6922 ^ var_0);
    var_14 = (!var_0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 |= 1;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = (1 ? (arr_0 [i_1]) : (max(var_10, (arr_0 [i_0]))));
            var_17 ^= (min(1096, (~1)));

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_18 -= ((((min(var_11, 1))) ? (min((min((arr_2 [i_1] [0]), (arr_4 [i_0]))), ((1 ? var_6 : (arr_5 [i_1]))))) : var_6));
                var_19 *= ((+(max((arr_4 [i_1]), var_12))));
            }
            /* vectorizable */
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                var_20 = (((arr_2 [i_3 - 2] [i_3 - 1]) ? (arr_2 [i_3 - 3] [i_3 - 3]) : 23822));
                arr_9 [i_3] [i_1] [i_0] = (var_10 * var_1);
                var_21 = (((((0 ? 736745304 : var_5))) & ((var_5 ? -4 : var_3))));
            }
            var_22 *= ((-5977 ? (~7129148082189097109) : (min(16777215, 1))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_23 = -var_9;

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_18 [11] [i_4] [i_5] [i_6] = 56;
                    var_24 = (arr_2 [i_0] [i_6]);
                }
                var_25 = var_10;

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_26 = (min(var_26, ((((((18388993906661961589 >> (var_12 - 31913)))) ? var_2 : -4)))));
                    arr_21 [i_0] [i_4] [i_5] [i_7] [i_4] = (((arr_7 [9] [i_4] [i_4]) ? (arr_7 [i_4] [i_5] [i_7]) : (arr_7 [i_4] [i_5] [i_7])));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    arr_24 [i_8] [i_5] [i_4] [18] |= (((arr_17 [i_0] [i_0] [i_0] [i_0]) ? 4294967291 : 16));
                    var_27 = var_4;
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_28 = var_8;
                    var_29 = ((((!(arr_0 [18]))) ? ((~(arr_10 [i_0] [6] [i_0]))) : (var_5 && var_9)));
                    var_30 = 1;
                }
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    var_31 = 944095866897406214;
                    var_32 -= ((~(arr_14 [i_10 + 3] [i_10 + 3] [i_10] [i_10])));
                }
            }
            var_33 -= 1;
            var_34 = ((-(arr_5 [i_4])));
            var_35 = 25;
        }
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        var_36 = (max(var_36, (((max((arr_22 [i_11] [i_11] [i_11] [i_11] [i_11]), ((((-14 + 2147483647) >> (((arr_20 [7] [i_11] [i_11] [i_11] [i_11] [i_11]) - 18179835837126404479)))))))))));
        var_37 = ((~-6006629154546553679) ? -68 : ((1 ? 10 : (((max(10, 10)))))));
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        var_38 = ((1 ? 17653310699470445400 : -82));
        var_39 = (arr_3 [i_12] [i_12] [i_12]);
    }
    var_40 = (min((max(-var_3, ((max(var_9, var_2))))), 2147483628));
    var_41 = 15499694940567178364;
    #pragma endscop
}
