/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_20 = (!var_18);
        var_21 = var_13;
        var_22 = (!-4);
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_23 = ((-((-((~(arr_4 [i_1])))))));
        var_24 = (min(var_24, var_1));
        var_25 = var_1;
        var_26 = (((((~((var_10 ? (arr_5 [18] [i_1]) : var_0))))) && ((!(arr_5 [i_1] [i_1])))));
        var_27 = ((+(((var_11 && var_6) | (var_17 & var_13)))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_28 |= (var_9 || ((((var_18 ? var_0 : var_15)))));

        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            arr_14 [i_3] [i_3] = ((((max((arr_3 [i_2 + 1]), (arr_4 [i_2]))) | (arr_7 [i_2 + 1]))) != ((((var_16 ? var_9 : var_17)))));
            var_29 = ((((((!var_7) ? (max(0, (arr_3 [i_2]))) : var_18))) && (max(((32767 && (arr_5 [i_3 + 1] [i_2 + 1]))), ((var_10 || (arr_5 [i_3 + 3] [i_3])))))));
            var_30 ^= (((((1 + var_0) + 9223372036854775807)) << (0 >> 3)));
            arr_15 [i_3] [i_2] [i_3] = ((!(((var_4 / (arr_13 [i_2 + 1] [i_3]))))));
        }
        var_31 = 1;
        var_32 += ((~(((((~(arr_4 [i_2]))) != var_19)))));
    }

    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        var_33 = ((~(-127 - 1)));
        arr_20 [i_4 - 1] = ((((((arr_6 [i_4 + 3] [i_4 + 3]) - (-124 & var_3)))) ? ((23 >> (((max(var_12, var_11)) - 2083716951)))) : ((~(arr_1 [i_4 - 2])))));
        var_34 -= ((((var_12 - ((((!(arr_4 [i_4 - 3]))))))) >> (var_17 + 23533)));
        var_35 = var_17;
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_36 = (~1);
        var_37 ^= (max((((var_14 / var_1) ? ((var_3 ? var_6 : (arr_17 [i_5] [i_5]))) : var_12)), var_10));
        var_38 = (min(var_38, (((((~(var_4 / var_0)))) ? ((+(((arr_10 [i_5]) >> (var_1 - 35368))))) : ((-(!var_2)))))));
    }
    var_39 = (((var_17 ? var_13 : var_14)));
    var_40 = ((-(!var_19)));
    #pragma endscop
}
