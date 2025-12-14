/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((1488978678 & (((((-1 ? 0 : 15)))))));
    var_20 = (-19085 - 37492);
    var_21 = (!(((((-1 ? -19088 : -10166)) & (var_2 < -19097)))));
    var_22 = (!(((var_14 ? (((min(var_9, var_16)))) : var_12))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((((arr_2 [i_0]) ? (((!(arr_0 [i_0])))) : (15913007731592588205 && var_1))), ((((var_15 ? var_10 : (arr_1 [i_0]))) << ((((min(-26025, var_2))) - 9277))))));
        var_23 -= ((((((max((arr_1 [i_0]), (arr_0 [i_0])))) && (1 == 2147483647))) || (arr_2 [i_0])));
        var_24 *= (arr_2 [i_0]);

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = ((((min(-6542, -10166))) ? (min((arr_4 [i_1 + 2] [i_1 + 1]), ((0 ? 45212 : (arr_1 [i_1 + 2]))))) : (((((arr_2 [i_0]) ? 73 : 1578979428)) ^ ((-26 ? 85 : var_10))))));
            arr_7 [i_0] = (arr_4 [i_0] [i_0]);
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_25 = (min(var_25, (((((arr_2 [i_2 + 1]) << (((arr_2 [i_2 + 2]) - 2910798115305524176))))))));
            var_26 = (((min((((0 ? 17032 : 28029))), (min(108939099, 0)))) * (((min(((var_3 != (arr_1 [i_0]))), (182 == 6)))))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_27 *= (((((min(15011, -19097)))) | ((8388607 ? ((min(3337387937, -18))) : (13904007744359496967 / 1)))));
            arr_14 [i_0] [i_0] [i_0] = (arr_13 [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_28 = (((arr_0 [i_4]) != ((((arr_4 [i_4] [i_4]) ? var_15 : 12)))));

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_29 = ((arr_2 [i_5]) ? (-19097 || 19097) : (arr_16 [i_5]));
            arr_21 [i_4] [i_4] = var_10;
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_24 [i_4] [i_4] = (!var_18);
            arr_25 [i_4] [i_4] [i_4] = 63;
        }
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            var_30 = 4294967233;
            var_31 ^= ((var_13 ? (arr_9 [i_7 - 1] [i_7 - 3] [i_7 + 2]) : (arr_9 [i_7 - 1] [i_7 - 3] [i_7 + 2])));
        }
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_30 [i_8] = (((min(var_15, (arr_18 [i_8]))) >= ((-(arr_18 [i_8])))));
        arr_31 [i_8] = ((2147483647 >= ((((arr_27 [i_8]) || ((min(var_2, (arr_28 [i_8])))))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_32 = (((arr_34 [i_9]) ? (arr_4 [i_9] [i_9]) : ((var_17 ? 28071 : 2061584302080))));
        arr_35 [i_9] [i_9] = (((-23432 - var_18) & var_8));
    }
    #pragma endscop
}
