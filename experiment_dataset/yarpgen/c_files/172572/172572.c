/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_20 = var_13;
        var_21 = (max(var_21, 3840));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((((arr_2 [i_1 - 1]) <= 12)))));
        arr_6 [i_1 + 3] = (((((210 ? (arr_4 [i_1]) : 7))) ? (arr_3 [i_1 + 2] [i_1 - 1]) : (7 % var_4)));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_23 = (((arr_4 [i_1]) ? 1 : ((193 >> (((arr_7 [i_1] [i_1]) + 41157842))))));
            var_24 ^= (!88);
        }
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            arr_12 [i_1] [i_3] = (((arr_8 [i_1 - 1] [i_1 + 3]) > (arr_8 [i_1 + 1] [i_1 + 2])));
            var_25 = ((95 ? var_6 : 27411));

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                arr_15 [i_1] [10] [i_1] = 18446744073709551612;

                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_26 = (var_13 / var_0);
                        var_27 = (~247);
                    }
                    arr_20 [i_4] = (!var_5);
                }
                var_28 |= (((arr_19 [i_4] [i_4] [i_4 - 1] [i_3] [i_3 + 1] [i_1] [i_1]) % 1));
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_27 [i_1] [22] [i_3] [i_3] [i_8] = ((531920610 ? (-2147483647 - 1) : 104));
                    var_29 = 1;
                }
                arr_28 [i_1] [i_1] = (arr_21 [i_3 - 3] [i_3 - 3] [i_3 - 2] [i_1 + 3]);
            }
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_30 = (((arr_16 [i_1] [i_9] [i_9] [i_1 + 3] [i_1]) ? (arr_16 [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_10 [i_1] [i_1] [i_9])));
            arr_32 [i_1] [i_9] [1] = 13;
            var_31 = (arr_22 [i_9] [i_1 + 3]);
            var_32 = (max(var_32, (arr_16 [i_1] [i_1] [13] [i_1 + 2] [i_1 - 1])));
            var_33 = ((var_11 ? ((~(arr_29 [i_1 + 2] [i_1 + 1] [i_9]))) : 253));
        }
        arr_33 [i_1] = ((18446744073709551591 > (2147479552 <= 4976615775263334704)));
    }
    for (int i_10 = 1; i_10 < 20;i_10 += 1) /* same iter space */
    {
        var_34 = (1 < -var_8);
        var_35 = (((((min((arr_9 [i_10 - 1] [i_10 + 1] [i_10 + 1]), (arr_9 [i_10 - 1] [i_10 + 3] [i_10 + 1]))))) >= (((arr_2 [i_10 + 1]) >> (1100078368 - 1100078340)))));
    }
    var_36 = ((var_1 ? ((2146959360 ? (var_1 >= 1) : (max(17179869152, var_15)))) : ((((var_7 < ((min(48, 33)))))))));
    var_37 = (min(var_37, 7));
    #pragma endscop
}
