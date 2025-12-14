/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_14 = ((var_10 ? (arr_4 [i_1 - 1] [i_1 - 1] [i_0 + 4]) : (0 + var_10)));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_15 = var_3;
                var_16 = (((arr_1 [i_1 - 1]) ? var_7 : (arr_1 [i_1 - 1])));

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_17 = (((arr_10 [i_0 + 4] [i_0 + 3] [i_0 + 1] [i_0 + 4] [i_0 + 4] [i_0 - 1]) ? -5556 : (arr_10 [i_0 + 1] [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0 - 1] [i_0 + 4])));
                    var_18 = (~(arr_2 [i_1 - 1] [i_0 + 2]));
                    var_19 += (var_12 > var_7);
                }
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_20 = 1045049332;
                var_21 *= ((1 ? 32762 : 1));
            }
            for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
            {
                var_22 *= ((((((arr_10 [i_5] [5] [i_5] [i_1] [i_1] [i_0]) ? 18993 : (arr_2 [i_1] [i_1])))) || (1788514330 && 77)));
                var_23 = -1144;
            }
            for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
            {
                arr_20 [i_1 - 1] &= (arr_16 [4]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_24 = ((((11549432127966601937 % (arr_4 [i_0] [i_0 + 2] [i_0]))) >= (((arr_13 [1]) ? -5156427457506295544 : 12916979286762338157))));
                            var_25 = (~var_9);
                            var_26 = -1143;
                        }
                    }
                }
            }
            var_27 += (((((var_4 ? (arr_18 [i_0]) : (arr_13 [16])))) ? (arr_8 [i_1 - 1] [i_0 - 1] [i_0] [i_0]) : (arr_0 [i_0 + 1] [i_1 - 1])));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_28 *= ((((((arr_7 [i_0 + 1] [i_0 - 1]) ? (arr_7 [i_0 + 4] [i_0 + 4]) : (arr_7 [i_0 + 2] [i_0 + 2])))) | (((((var_9 | (arr_26 [i_0] [i_0])))) * ((var_10 ? var_13 : (arr_11 [i_9] [i_9] [17] [i_9] [17])))))));
            var_29 = var_3;
            var_30 = ((((((((var_7 ? var_3 : (arr_19 [i_0] [i_9] [i_9] [i_0])))) != (max(201, 12560634913555526499))))) << (-5156427457506295555 + 5156427457506295558)));
        }
        for (int i_10 = 4; i_10 < 16;i_10 += 1)
        {
            var_31 = (((arr_1 [i_0 + 3]) < (arr_1 [i_0 + 1])));
            arr_30 [i_0] [i_0] [i_10] = ((-(((2755924054 - (arr_18 [i_10]))))));
            var_32 = (((min(1, 1)) ? ((var_8 ? var_11 : ((((arr_14 [4] [i_10] [i_10]) - var_11))))) : (((244 ^ (arr_13 [i_10]))))));
        }
        var_33 = (((((min((!1), ((var_11 && (arr_25 [i_0]))))))) & (min(var_4, (var_10 + 5886109160154025116)))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_34 = (arr_2 [i_11] [i_11]);
        var_35 = (4127461921 <= 45960);
        var_36 = var_3;
    }
    var_37 = (max(var_37, (var_6 > 1141)));
    var_38 = (max((((var_3 ? ((13632196716631665530 ? 2895735054 : 4284890660066143032)) : var_5))), (~var_2)));

    /* vectorizable */
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        arr_37 [i_12] = ((var_5 ? (((10872481014757022692 ? var_4 : (arr_36 [i_12] [i_12])))) : var_0));
        var_39 |= (((var_0 ? var_8 : (arr_35 [i_12] [12]))));
        var_40 = (((arr_36 [i_12] [i_12]) ? (arr_36 [i_12] [i_12]) : (arr_36 [i_12] [i_12])));
        var_41 = (((arr_35 [i_12] [i_12]) < (arr_35 [i_12] [i_12])));
    }
    var_42 = var_7;
    #pragma endscop
}
