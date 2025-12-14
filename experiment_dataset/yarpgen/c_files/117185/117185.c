/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((((var_0 ? 0 : (arr_2 [i_0]))) << ((((~(arr_0 [i_0] [i_0]))) - 220013290)))))));
        var_19 = (max(var_19, (((1 ? 1 : 1)))));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_20 *= ((!((((arr_2 [i_1 - 2]) ? (arr_2 [i_1 + 1]) : (arr_4 [i_1 + 1] [i_0]))))));
            var_21 ^= (((var_5 | (((var_11 != (arr_1 [i_1])))))));
            var_22 = (min(var_22, (((((arr_6 [i_1 - 1] [i_1 - 1]) >> (((arr_6 [i_1 + 2] [i_1 + 1]) - 10120700356584569169)))) | (3523893176 | 771074130)))));
            arr_7 [i_1] = (!((max((arr_0 [i_0] [i_1 + 3]), var_3))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_23 = (max(var_23, (((!(((7159050428842523288 ? var_9 : var_6))))))));
        var_24 = (((!64) ? (arr_9 [i_2]) : 1));
        arr_10 [i_2] [i_2] = (~(arr_0 [i_2] [i_2]));
        var_25 = 3523893165;
        var_26 -= (((~6820006682896116661) ? ((((0 > (arr_6 [i_2] [i_2]))))) : var_11));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_27 = ((((!((max(-48, 7159050428842523288))))) ? -69 : 1));
        var_28 = (min(-var_0, (!var_5)));
        var_29 = ((((((arr_4 [i_3] [i_3]) ? (((max(var_3, (arr_14 [i_3]))))) : (arr_6 [i_3] [i_3])))) ? (((!51) ? var_8 : (max(124, var_11)))) : (51 < 1)));
        var_30 = (max(var_30, (arr_14 [8])));
        arr_15 [i_3] [i_3] = (max((6820006682896116654 != -58), var_10));
    }
    #pragma endscop
}
