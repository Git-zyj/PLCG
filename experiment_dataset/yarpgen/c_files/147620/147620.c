/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((min(var_5, var_2)))), var_4));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((max((6133976339231829875 / -6133976339231829876), (~2147483641))) + -6133976339231829886);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, (arr_8 [2] [4])));
                        var_22 = -6133976339231829883;
                        var_23 -= 32746;
                        var_24 *= ((((+(((arr_7 [i_0 - 1] [i_0] [i_2] [1]) / (arr_0 [i_0]))))) >= var_4));
                    }
                }
            }
            var_25 = (min(var_25, var_11));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((max((arr_0 [i_1]), ((15360 ? var_10 : 4294967285))))) ? var_15 : (min(6133976339231829875, (((var_7 ? var_14 : -56)))))));
                        var_26 = (((((var_3 ? -27055 : var_19))) && var_4));
                        var_27 = (max(var_27, (((-((((!103) || var_6))))))));
                        var_28 = (max(var_28, (((((var_13 ? (arr_15 [i_0] [i_0] [i_4] [i_5]) : (!17845459089635634960))) << ((((max((!4294967285), (arr_8 [i_5] [i_5])))) - 17585)))))));
                    }
                }
            }
            var_29 = ((~((var_8 ? 10 : (arr_15 [i_0] [i_0] [i_0] [i_1])))));
            arr_18 [14] [i_1] = (arr_0 [i_0]);
        }
        var_30 = (((min((((6133976339231829851 || (-9223372036854775807 - 1)))), (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ var_15))))) ? (((min(var_15, (arr_13 [15]))) * (!27025))) : 112);
        arr_19 [i_0] = ((max((((var_5 || (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1])))), (arr_14 [10] [i_0 - 1] [15]))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_31 = var_10;
                    var_32 *= ((((!(~var_3))) ? (arr_2 [i_0 + 3]) : (((((-82 | (arr_11 [i_7] [i_7] [i_0] [i_7] [i_0])))) ? -15 : (arr_1 [i_6])))));

                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        var_33 ^= ((((((arr_5 [i_0 + 3] [i_8]) / (arr_10 [i_0 - 1] [16] [i_0 + 1] [i_8 - 2])))) ? (((arr_16 [i_0] [i_0] [i_0 + 1] [i_0 + 3] [i_7]) ? (arr_15 [i_8 + 1] [i_8 + 1] [7] [i_0]) : (arr_10 [i_0 + 2] [22] [i_0 + 3] [i_8 - 2]))) : (((arr_16 [12] [i_0] [i_0 + 1] [i_0 + 1] [i_7]) ? (arr_15 [i_8] [i_8 + 1] [i_8 - 2] [i_6]) : var_5))));
                        var_34 = (min(var_34, (arr_26 [i_0] [i_6] [i_7] [i_8])));
                        arr_28 [i_0] [i_6] [i_7] = -27055;
                    }
                    for (int i_9 = 4; i_9 < 20;i_9 += 1)
                    {
                        var_35 = (max(var_35, (-2147483647 - 1)));
                        var_36 = (min(var_36, 96));
                        var_37 = (arr_15 [i_0] [i_7] [i_7] [i_0 - 1]);
                        var_38 *= (arr_27 [i_0 + 2] [i_9 + 1] [i_9] [i_9 - 4]);
                    }
                    var_39 ^= (((arr_23 [13] [i_6]) || (var_3 || 0)));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_40 = (min(var_40, (((((arr_13 [i_10]) ? var_15 : (arr_8 [i_10] [i_10])))))));
        var_41 = (((((~var_7) ? (min(75, (arr_6 [i_10] [i_10]))) : var_2)) << var_15));
        var_42 *= (arr_20 [16]);
        arr_33 [i_10] = ((-((((!(arr_30 [10] [18])))))));
        var_43 = ((var_8 ^ (~-6133976339231829882)));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 19;i_12 += 1)
        {
            {
                var_44 ^= var_14;
                arr_39 [i_11] [i_11] [i_11] = var_3;
            }
        }
    }
    var_45 = (((((4717642595171104055 || (var_13 + var_9)))) / (((var_2 && var_11) ? var_14 : (var_12 >= 4294967271)))));
    #pragma endscop
}
