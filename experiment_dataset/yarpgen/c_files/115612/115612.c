/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = ((var_2 ? (max(var_6, (arr_0 [i_0]))) : (((min(1, (arr_2 [i_0] [i_0])))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_9 [i_0] [i_1] [i_2] = (min((((~(17369735240825109985 < 1)))), (var_8 * 1077008832884441641)));
                var_15 -= (((~17369735240825109985) ? (!1077008832884441660) : ((1 ? (min((arr_8 [i_1] [i_0]), var_3)) : ((((((arr_7 [i_0] [i_1 - 1] [i_2]) + 2147483647)) << (((((arr_5 [i_2] [i_1]) + 8061921456837841698)) - 21)))))))));
            }
            arr_10 [i_0] [i_1] = ((~((min((arr_3 [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 - 1] [i_1 - 1]))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [5] [i_3] [i_3] [i_3] [i_0] = (((((((arr_11 [7] [i_1] [i_0]) ? 1 : (arr_3 [i_5] [i_5])))) ? (((max((arr_0 [5]), var_1)))) : (max((arr_5 [i_1] [i_0]), 141)))) > (arr_11 [i_0] [i_1] [i_3]));
                            arr_19 [i_3] [i_3] [i_3] [i_3] [i_0] = (((min((arr_13 [i_0] [i_0] [6] [i_0]), (arr_1 [i_1])))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_22 [i_6] [1] [i_0] = (arr_12 [i_0] [i_0] [i_6]);
            var_16 = (arr_0 [i_0]);
            arr_23 [i_6] [i_6] = ((-(arr_13 [i_0] [i_6] [1] [1])));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_26 [i_7] = -2240657949343599181;
            var_17 = ((17369735240825109955 ? 17369735240825109974 : 47817));
            var_18 |= ((((((arr_5 [i_0] [i_7]) + (arr_12 [i_0] [10] [i_7])))) ? ((((arr_5 [i_0] [i_0]) || var_11))) : (arr_11 [i_0] [i_7] [i_7])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    {
                        arr_32 [i_7] [0] [0] [i_9] [4] = var_4;
                        var_19 = (((arr_2 [i_8] [i_7]) ? ((32767 ? (arr_8 [i_0] [i_9 - 1]) : 17369735240825109974)) : (arr_4 [i_9 + 1] [i_7])));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_35 [0] [i_10] [i_10] = min(((1 ^ ((-32744 ? 6047813222894286937 : var_6)))), (((arr_31 [i_0] [i_10] [i_0] [i_10] [i_0] [i_10]) ? (arr_31 [i_0] [i_10] [i_0] [i_10] [i_0] [i_0]) : 1)));
            arr_36 [i_0] = (var_4 ? ((((!(arr_20 [i_0] [i_10]))) ? (3458764513820540928 + 1) : (((511 ? var_10 : (arr_17 [i_0] [i_0])))))) : ((((((arr_24 [i_10] [i_0]) ? (arr_25 [i_0]) : var_7))))));
            var_20 = (max(var_20, ((min(((~((var_6 << (((arr_21 [i_0] [i_10]) - 10307034017436551429)))))), (((~(arr_15 [i_0] [i_10] [i_0] [i_10])))))))));
        }
    }
    #pragma endscop
}
