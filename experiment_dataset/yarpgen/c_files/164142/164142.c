/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-var_4 ? var_10 : var_6));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_19 *= ((arr_0 [i_0]) ? 2147483647 : ((~(arr_0 [2]))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_20 = (((arr_4 [i_1] [i_0] [i_0 + 2]) << (!var_1)));

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                var_21 = (arr_5 [i_2 - 1] [i_2 - 2] [i_2]);
                var_22 = 15;
                var_23 = (max(var_23, ((min(var_15, 18446744073709551600)))));
            }
            var_24 = (max(var_24, 9223372036854775807));
            var_25 = var_6;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 4; i_4 < 20;i_4 += 1)
            {
                var_26 &= (min((((arr_4 [i_4 - 3] [i_4 - 2] [i_4 - 4]) & (arr_4 [i_4 - 3] [i_4 - 2] [i_4 - 4]))), ((((arr_4 [i_4 - 3] [i_4 - 2] [i_4 - 4]) || 18446744073709551600)))));
                var_27 = var_2;
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_16 [i_5] [i_3] [i_5] [i_0 - 1] = var_8;
                var_28 |= (~4380010940315627900);
                var_29 |= (arr_12 [i_5] [i_0 - 3]);
                arr_17 [i_0] [i_0] [i_0] = var_4;
            }

            /* vectorizable */
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                var_30 = (max(var_30, var_11));

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_31 &= ((-(arr_20 [i_6 - 1] [i_6 - 1])));

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_32 = var_17;
                        var_33 -= 32749;
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_34 = 1185820082;
                        var_35 |= (var_7 < var_4);
                    }
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_36 = 3998126030;
                    var_37 = (max(var_37, (arr_9 [i_3] [8])));
                    var_38 -= ((var_6 ? (((14932836763346277958 ? var_10 : 296841266))) : (arr_29 [i_6] [i_6 + 1] [i_6] [i_6 - 2] [i_6 - 2])));
                }
                var_39 += (arr_6 [i_0] [i_0 - 1]);
            }
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                var_40 = var_13;
                var_41 = (max(var_41, (var_0 > var_12)));
            }
        }
        var_42 = -var_17;

        /* vectorizable */
        for (int i_12 = 1; i_12 < 18;i_12 += 1)
        {
            var_43 = (-9223372036854775807 - 1);
            var_44 = (min(var_44, 868834650));
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_45 = arr_23 [i_13] [i_13] [i_13] [i_13];

            for (int i_14 = 4; i_14 < 19;i_14 += 1)
            {
                var_46 *= (((min((!296841258), var_7)) >> var_13));
                arr_40 [i_14] = (arr_28 [i_0 - 1] [i_13] [i_14 - 3] [i_0 + 1] [i_14]);
            }
        }
    }
    #pragma endscop
}
