/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_16 &= ((!(((58433 % (((arr_0 [i_0] [i_0]) ? var_13 : 103)))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0] = (((((var_6 ? 1 : (arr_0 [i_0 + 2] [i_1])))) ? var_3 : ((((arr_3 [i_0 + 1] [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0 - 1]) : (arr_3 [i_0 + 1] [i_0 - 1]))))));
            arr_5 [i_0] [i_0] = (~-48);
            var_17 = -5729187891227228472;

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_18 |= (((min((arr_7 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 1]), var_7)) << (-var_9 + 6275)));
                var_19 = ((!((max(((~(arr_8 [i_0] [i_0] [i_0]))), ((max(var_10, (arr_8 [i_2] [15] [i_2])))))))));
            }
            for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
            {
                var_20 = (((arr_8 [i_0] [i_1] [i_3 - 1]) ^ (arr_8 [i_0 - 2] [i_1] [i_1])));

                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        var_21 = (((var_5 != -112) || var_10));
                        var_22 |= (max(var_10, ((49 / (arr_12 [i_0 + 1] [i_0 + 1] [i_3] [i_5 - 2] [i_3 - 1] [i_0 + 1])))));
                        arr_17 [i_0] [11] = var_15;
                        var_23 += (((arr_10 [i_5 - 1] [i_1]) ? (((((arr_1 [i_4 + 2]) + 2147483647)) >> (((arr_13 [i_3] [18] [7] [7] [i_4 - 1] [18]) - 201)))) : var_4));
                    }

                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        var_24 = ((var_7 ? ((max(var_15, 127))) : (2738536188 / 94)));
                        arr_20 [i_0] [i_0] [i_3] [i_0] = ((!(arr_0 [i_3 + 1] [i_6 - 3])));
                        arr_21 [i_0] [i_1] [i_1] [i_3 + 1] [18] [i_1] |= ((var_9 > ((~(max(947512362, var_1))))));
                    }
                }
                var_25 = (min(var_25, (((((max(75, 1590795442))) && (arr_7 [i_0 + 1] [i_0] [i_0] [i_0]))))));
            }
            for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
            {
                var_26 = (max(var_26, ((((((-(max(var_15, 4294967277))))) ? (((-((var_0 - (arr_2 [i_1])))))) : (arr_15 [i_0] [i_1] [i_1] [i_1] [i_0]))))));
                var_27 = (((((1 ? 26 : 32918))) ? (max(((1 ? var_8 : -1036032385)), (((!(arr_3 [17] [17])))))) : (~65232)));
                var_28 = ((((-118 ? 127 : (arr_13 [i_0] [i_1] [i_1] [i_7 - 1] [i_7] [i_7])))) ? ((min((arr_13 [i_0] [i_1] [i_7] [i_7 - 1] [i_7] [i_7]), (arr_13 [i_0] [i_0] [i_7] [i_7 - 1] [i_0 + 2] [i_0])))) : ((-1045704369 ? (arr_13 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] [i_7]) : (arr_13 [i_0] [i_0] [i_0] [i_7 + 1] [i_7] [i_0 + 2]))));
            }
        }
        var_29 = -1590795436;
    }
    var_30 = 21703;
    var_31 = (((!-1570369657) ? ((min(118, -32))) : var_14));
    var_32 = ((((((((var_13 ? 4346647557207385061 : var_13))) ? (96 > var_1) : var_9))) ? var_10 : ((var_12 ? var_5 : ((var_1 ? 1 : 2147483647))))));
    var_33 = (var_2 ? 65533 : 6942525032652902205);
    #pragma endscop
}
