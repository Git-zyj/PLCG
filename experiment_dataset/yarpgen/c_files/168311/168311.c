/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = ((~((~(arr_0 [i_0])))));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_12 = (min(var_12, ((((((min((arr_2 [i_0] [1]), (arr_1 [i_0])))) ? var_1 : (((var_5 - (arr_5 [i_0] [i_0] [i_0])))))) & ((((arr_2 [i_0] [i_1 + 1]) ? (arr_0 [i_1 - 3]) : (arr_0 [i_1 - 3]))))))));
            var_13 = (arr_2 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = (((((~(arr_5 [i_0] [i_2] [i_2])))) ? (!17284682173158605372) : ((~(~15)))));
            var_14 = (242 % 10948020440296647536);
            var_15 = ((((((-10468 && 28124) ? ((((arr_2 [i_0] [i_0]) % (arr_7 [1])))) : (max((arr_4 [i_0] [i_0]), var_5))))) ? (max(var_3, (!10948020440296647520))) : (arr_6 [i_2] [i_0])));
        }
        arr_10 [0] = (((((((var_2 ? 9223372036854775807 : var_4)) & (~var_8)))) ? (~18446744073709551615) : ((~((var_1 ? var_4 : (arr_3 [i_0] [i_0] [i_0])))))));
        var_16 = (max(var_16, (((-(((arr_0 [i_0]) | (arr_4 [i_0] [i_0]))))))));
    }
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        arr_14 [i_3] = (((((((arr_12 [8] [i_3]) ? 7498723633412904095 : (arr_12 [i_3] [i_3]))) << (((~var_4) - 1049380647264095656)))) * (~705640245)));
        var_17 ^= (((!-32750) ? (arr_13 [i_3 - 1]) : ((((!(arr_13 [i_3 - 1])))))));
        var_18 = (!1283696114);
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_19 *= (((((var_5 ? (~var_2) : (arr_15 [10])))) ? (((arr_15 [6]) ? (((var_0 / (arr_18 [2])))) : (arr_16 [6]))) : ((((arr_17 [0]) - ((-(arr_18 [0]))))))));

        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            var_20 = (~var_10);

            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                var_21 = (min(-65535, ((var_0 ? var_3 : var_6))));
                arr_26 [i_4] [i_5 - 1] [i_5 - 1] [i_4] = 102;
            }
            arr_27 [i_4] [i_4] [i_5] = (max((arr_24 [i_5] [i_4 + 1] [i_5 + 1]), (~var_9)));
            var_22 += ((((18446744073709551596 ^ ((~(arr_25 [i_5] [i_5 - 2] [i_5 + 1] [i_5 - 2]))))) >> (var_0 - 33)));
        }
        arr_28 [i_4] [i_4] = (arr_19 [1]);
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_23 = max((max(-var_6, (arr_30 [i_7 - 1] [i_7 + 2]))), ((249 * (arr_29 [i_7 - 1]))));
        var_24 = -var_10;
    }
    var_25 &= ((((var_3 ? var_3 : var_3)) << (((((((var_1 ? var_5 : var_3))) ? (min(var_1, var_6)) : var_6)) - 195))));
    var_26 = ((((((!var_7) ? var_3 : 7))) && (((var_6 ? var_7 : (var_10 || var_2))))));
    #pragma endscop
}
