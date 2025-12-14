/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((var_10 * (var_10 <= var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_2] [i_2] [i_2] [i_2] = ((var_4 / (((arr_3 [i_0] [i_0 + 1] [7]) + 2496541734624200104))));
                        var_16 = ((((2496541734624200132 ? (arr_6 [i_0] [i_1 + 3] [i_2 + 1]) : var_5)) <= (arr_3 [i_2 + 1] [i_1] [i_1])));
                        var_17 |= (((var_13 + 2147483647) << ((((~(arr_0 [i_0]))) - 8283604167809468767))));
                    }
                    arr_13 [i_0] [i_1] [i_2] [i_2] = ((((((((105 && (arr_3 [i_0] [i_1] [i_1])))) + ((min(var_12, var_11)))))) ? ((+(((arr_6 [i_0] [i_0] [i_0]) >> (var_2 - 9577))))) : (((((arr_8 [i_0] [i_0] [i_0 + 1] [i_0]) + 2147483647)) >> ((((~(arr_2 [i_2]))) + 62885))))));
                    var_18 = max((((arr_10 [i_2] [i_0] [i_0]) ? var_11 : (min(var_7, 277112074699232128)))), ((((arr_4 [i_2 - 1] [i_2] [i_0 + 1] [9]) ? ((max((arr_7 [i_2] [i_1] [i_0] [i_0]), var_9))) : ((max(var_11, (arr_4 [6] [i_1 + 1] [i_0] [i_0]))))))));
                    var_19 = ((var_6 & (((-var_9 ? var_8 : (var_12 / var_7))))));
                    var_20 *= ((~((min((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_1 - 2] [i_0 + 1]))))));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 6;i_4 += 1)
                {
                    var_21 ^= ((!(arr_0 [i_1 + 3])));
                    arr_16 [i_4] [i_1] [i_0 + 1] [i_0] = (~var_11);
                    var_22 = ((-1073741823 ^ ((~(arr_14 [9] [i_1] [i_4])))));

                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        arr_21 [i_0 + 1] [i_1] [i_4] [i_0 + 1] = (-var_6 || (((~(arr_17 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1])))));
                        var_23 ^= (arr_20 [i_0] [i_0] [i_0 + 1] [i_5 - 2]);
                    }
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    arr_24 [i_0] |= var_9;
                    var_24 = (-(arr_14 [i_0] [i_1 + 3] [i_0]));
                }
                var_25 |= ((((arr_19 [i_0 + 1]) ? (((var_1 ? (arr_18 [i_1 + 4] [3] [i_1 - 2] [i_1] [i_0]) : var_3))) : ((1001613831 ^ (arr_22 [i_1]))))));
                var_26 = ((((arr_14 [i_0] [i_0 + 1] [i_1 + 3]) < (arr_6 [i_0] [i_0 + 1] [i_1 - 2]))));
            }
        }
    }
    var_27 |= var_12;
    var_28 += (min((max(-var_9, (((var_13 + 2147483647) << (var_5 - 37081))))), var_5));
    #pragma endscop
}
