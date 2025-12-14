/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(var_6, (~5350839274902903101)))) || var_14);
    var_17 = ((~((~(var_5 * var_14)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = 425404899;
        var_19 -= (((var_5 * var_11) * (min(7720957752720447483, ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] = (0 | -6405962569530706855);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (((arr_4 [i_1]) - (arr_4 [i_1])));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_21 = (max(var_21, var_6));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_22 = (arr_7 [i_1] [i_1]);

                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, (((((((arr_4 [i_2]) / 4235102676275121666))) ? (arr_5 [i_4]) : 2092169296)))));
                    var_24 = -6405962569530706845;
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_25 = var_10;
                    arr_20 [i_1] [i_3] [12] [i_1] = 112;
                    arr_21 [i_1] [i_2] [i_3] [i_5] [i_5] = ((((arr_17 [i_5]) << (((-5905711676948999412 + 5905711676948999427) - 15)))) & (arr_17 [i_2]));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        arr_27 [i_1] = (((((15 ? -1848049928 : 218))) || (arr_25 [i_7 + 1] [i_7] [i_1] [0] [i_1] [i_6] [i_3])));
                        arr_28 [i_2] [i_6] [i_1] = ((2206484473 < (~509254886756312474)));
                        var_26 ^= (arr_22 [i_1] [i_2] [i_3] [i_3] [i_6] [i_7]);
                    }

                    for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_27 ^= (arr_3 [i_2]);
                        var_28 = (((~var_13) >> 0));
                    }
                    for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_29 = arr_26 [1];
                        var_30 = (((arr_32 [i_9] [7] [i_9 + 1] [10] [i_9 + 3] [i_9]) ? (arr_32 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 3] [i_9]) : (arr_32 [i_9] [14] [i_9 + 2] [i_9 + 4] [i_9] [i_9])));
                        arr_37 [i_1] [i_2] [i_2] = var_7;
                        var_31 = ((24 ? (arr_7 [i_1] [i_1]) : var_10));
                    }
                    var_32 = ((!var_11) ? ((-(arr_3 [i_1]))) : 2995369539);
                    var_33 = (max(var_33, (((~(arr_6 [i_2] [i_3] [11]))))));
                }
                var_34 = (17937489186953239169 ? (arr_32 [i_1] [i_1] [i_1] [i_2] [i_1] [i_3]) : (2484968545 * var_7));
            }
            var_35 -= (((arr_8 [i_1] [i_2] [i_2] [7]) - (arr_36 [i_1])));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_36 = ((32767 ? 6405962569530706845 : 59));
            arr_40 [i_1] = var_10;
        }
    }
    #pragma endscop
}
