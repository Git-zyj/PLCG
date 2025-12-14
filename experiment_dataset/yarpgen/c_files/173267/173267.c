/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_2;
    var_20 = (((((~var_16) + (94 * var_17)))) ? ((max(var_11, (max(1, var_16))))) : (var_18 && var_4));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = ((-var_0 < ((((((((arr_1 [6] [0]) || (arr_0 [i_0 - 3]))))) < ((-(arr_0 [i_0]))))))));
        var_21 = (((((-(((arr_0 [i_0 - 3]) ? (arr_0 [i_0]) : (arr_1 [10] [i_0 + 2])))))) ? (((((((arr_1 [8] [8]) % 13656200250410455714)) <= (((~(arr_0 [i_0])))))))) : (((arr_0 [i_0 + 2]) & (arr_0 [i_0 + 1])))));
        var_22 = (max(var_9, (max(((max((arr_1 [i_0 + 1] [i_0]), 32767))), (arr_0 [i_0])))));
        var_23 = ((((max(((var_15 ? (arr_1 [i_0] [i_0]) : var_6)), (var_16 == -80)))) ? (((arr_1 [i_0] [i_0 - 1]) ? (arr_1 [i_0] [i_0 - 3]) : (arr_1 [i_0] [i_0 + 1]))) : (((!(((arr_1 [i_0] [i_0]) >= -859707663)))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_24 += (((1148019093 ? 158678475 : 15500412008459887673)));
            var_25 += (((arr_6 [i_1] [i_1]) || (((((min(var_3, (arr_5 [i_2] [i_2] [i_1])))) ? ((2946332065249663943 ? var_9 : -813250717)) : (!var_7))))));
        }
        var_26 *= 0;
        var_27 = (((((arr_3 [7] [i_1]) % (arr_4 [i_1])))) | (((arr_4 [i_1]) / 2946332065249663942)));
        var_28 = (((arr_5 [20] [i_1] [i_1]) ? ((-(arr_4 [i_1]))) : (((max(var_3, (15500412008459887672 <= var_3)))))));
        var_29 = (min(var_29, ((((arr_3 [i_1] [i_1]) ? (arr_5 [i_1] [i_1] [i_1]) : (!var_1))))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_30 = ((((17116650076311611234 ? (var_11 / -813250717) : ((((arr_3 [i_3] [i_3]) && var_12))))) * (((arr_9 [18] [i_3]) ? (arr_9 [16] [i_3]) : (arr_9 [i_3] [i_3])))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_31 = var_8;
            var_32 = var_15;
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            var_33 = (((arr_9 [i_5 - 3] [i_5]) >> (var_3 || var_14)));
            arr_17 [i_3] [i_5 - 1] = (0 & (arr_15 [i_3]));
            arr_18 [i_3] = (((((var_12 ? (arr_7 [i_3]) : (arr_8 [i_3])))) ? (arr_6 [3] [7]) : (arr_11 [i_3])));
            arr_19 [i_5] = (arr_12 [i_3] [i_5] [i_5 - 2]);
        }
    }
    #pragma endscop
}
