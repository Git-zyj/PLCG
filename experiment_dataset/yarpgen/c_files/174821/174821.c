/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_9));
    var_17 ^= (max(var_15, var_2));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 *= (((arr_1 [i_0]) * (arr_0 [i_0] [i_0])));
        var_19 = (max(var_19, var_3));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_20 &= var_3;

            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                var_21 &= (arr_8 [i_1] [i_2] [i_3] [i_3 + 1]);
                var_22 = (min(var_22, (arr_3 [i_1 - 1])));
            }
        }
        var_23 = (max(var_23, var_10));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_24 *= ((37261 ? 37255 : 14517847162868988126));
            arr_14 [1] |= min((min(var_10, var_7)), (arr_3 [i_1 - 1]));

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_25 = ((255 ? -3811 : (-9223372036854775807 - 1)));
                arr_17 [16] |= var_12;
                var_26 = (min(var_26, (arr_12 [i_4] [i_4])));

                /* vectorizable */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    arr_22 [i_1 - 1] [i_4] [4] [i_1] [i_1] = 224;
                    var_27 |= var_2;

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_25 [4] [i_7] [i_5] [i_5] [i_7] [i_1 - 1] &= 1108307720798208;
                        var_28 = (max(var_28, -var_10));
                        var_29 = (var_1 + 37261);
                        var_30 *= (arr_5 [i_1 - 1] [i_1 - 1]);
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        arr_28 [i_1 - 1] [i_1 - 1] [i_4] [i_1] [i_8] [i_4] [i_5] = ((~(arr_8 [i_5] [i_6 - 1] [i_6 - 1] [i_6 - 1])));
                        var_31 = (max(var_31, (var_7 - 14517847162868988144)));
                    }
                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        var_32 = (min(var_32, -1492377652));
                        var_33 |= ((~(arr_12 [i_4] [i_5])));
                        arr_31 [i_1] [i_4] [i_4] = (arr_20 [i_9 - 1] [i_4] [i_1] [i_6 - 1]);
                    }
                }
            }
            var_34 *= ((-((var_12 ? (((min(var_14, var_10)))) : (var_1 / var_4)))));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_35 &= var_8;
            var_36 |= (arr_7 [i_1]);
            var_37 -= (((var_15 != 0) != var_14));
        }
        var_38 *= (max(((((max(var_9, var_9))) ? 64 : (var_12 / var_7))), ((min((((arr_24 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [15]) ? (arr_9 [i_1] [i_1] [7] [i_1]) : var_13)), (((arr_30 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [1]) ? var_15 : var_2)))))));
    }
    #pragma endscop
}
