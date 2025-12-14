/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_13 -= (164 ? 249 : (arr_1 [i_0]));
        var_14 = (-24 ? ((13269 ? (((-65 ? var_3 : (arr_0 [i_0] [i_0])))) : var_10)) : (arr_0 [i_0] [i_0]));
        var_15 = (((((((max((arr_0 [i_0] [i_0 - 3]), -71))) ? (var_10 % -579394850) : -1758191868))) ? ((((var_0 + 2147483647) >> ((((40905 ? 61 : var_0)) - 58))))) : -var_7));
        var_16 = (max((min((arr_1 [i_0 + 2]), var_12)), (arr_1 [i_0 + 3])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = var_5;
        var_18 = (max(var_18, ((((arr_4 [i_1]) % var_12)))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_19 = arr_7 [i_2] [i_2] [i_1];
                    arr_10 [i_1] [0] [i_1] [i_1] &= (((var_12 > 4294967295) ? (arr_9 [i_2 - 2] [5] [i_2 - 1] [i_2]) : (arr_2 [i_2 - 2])));
                }
            }
        }

        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            var_20 = ((-71 ? -8783726960934382118 : 72));

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_21 = 1758191868;
                var_22 = ((((((arr_9 [i_1] [i_1] [i_1] [i_5]) ? 107 : (arr_11 [i_1] [i_1] [i_1])))) ? (arr_4 [i_4 + 1]) : 109));
            }
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                var_23 = (arr_3 [i_1] [i_1]);
                var_24 = var_8;
                var_25 = ((65535 ? (((~(arr_3 [24] [i_4])))) : (arr_17 [i_4] [i_1])));
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                var_26 = (arr_8 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4]);
                var_27 = (max(var_27, (((((3492219081 ? -108 : 92)) % 1)))));
                var_28 = (max(var_28, (((arr_14 [i_1] [i_4 - 1] [i_4 + 1]) ? (arr_14 [i_1] [i_4 + 2] [i_4 + 2]) : 24))));
                var_29 &= (((arr_12 [i_4 + 1] [i_4 + 2] [i_4 + 2]) ? (arr_12 [i_4 + 2] [i_4 - 1] [i_4 + 1]) : (arr_15 [i_1] [i_4 + 2] [i_4 + 2] [i_1])));
                var_30 = (8783726960934382118 >= 29503);
            }
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 21;i_9 += 1)
                {
                    {
                        var_31 += 9223372036854775807;
                        var_32 = (~577619484289151098);
                        arr_25 [i_1] [i_1] [i_1] [i_1] [i_9] = (!var_8);
                    }
                }
            }
            arr_26 [i_1] [6] [i_1] &= (arr_21 [i_1] [i_1]);
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_31 [i_1] [i_1] [i_1] = arr_22 [i_1];

            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                arr_34 [16] = ((845575710 ? var_7 : 28467));
                arr_35 [i_1] [i_10] = ((arr_18 [i_1]) ? (arr_29 [i_1] [i_10] [i_1]) : ((191 ? (arr_18 [i_10]) : 4358255367447827677)));
                var_33 = (max(var_33, (((~(arr_12 [6] [i_10] [i_1]))))));
            }
        }
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_34 = max(-256077764, 127);
        var_35 = (max(var_35, ((((((arr_14 [2] [i_12] [i_12]) >= (arr_3 [i_12] [i_12]))) || var_3)))));
    }
    var_36 += 80;
    #pragma endscop
}
