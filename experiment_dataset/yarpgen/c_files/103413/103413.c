/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = var_10;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (((min(((var_10 ? var_5 : (arr_1 [i_0]))), var_8)) % (min((((arr_2 [4]) ? (arr_0 [i_0]) : var_4)), var_12))));
        arr_4 [i_0] = (max((arr_3 [i_0] [i_0]), ((var_5 / (arr_0 [i_0])))));
        var_21 = (((((~(arr_0 [i_0])))) ? (((arr_3 [i_0] [i_0]) & (arr_2 [i_0]))) : (~var_7)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_22 = (max(var_22, ((((arr_5 [i_1]) > ((max(-975673767, 52))))))));
        arr_8 [i_1] = (((min(((var_6 * (arr_6 [i_1] [4]))), ((((arr_2 [i_1]) % 975673767))))) | (((arr_1 [i_1]) ? (max(10174862383657384794, var_7)) : ((((!(arr_3 [i_1] [i_1])))))))));
        arr_9 [i_1] = (((-366199874 ? (min((arr_0 [13]), (arr_5 [i_1]))) : (-975673767 | -975673767))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_23 *= (arr_6 [i_3] [i_2]);
            arr_17 [i_2] [i_2] = ((0 >> (((arr_7 [i_3] [i_3]) - 12753009486294727851))));
            arr_18 [i_2] [i_2] = (-(arr_3 [i_2] [i_3]));
            var_24 += 14336;
        }
        arr_19 [i_2] = 975673767;
        arr_20 [i_2] = ((arr_14 [i_2] [i_2] [i_2]) & (arr_14 [i_2] [i_2] [i_2]));
    }
    #pragma endscop
}
