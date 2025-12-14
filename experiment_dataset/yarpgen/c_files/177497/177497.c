/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [2] = 151;
        var_11 |= (((((13 ? var_6 : -14))) || (arr_0 [i_0])));
        var_12 = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_13 = (max(var_13, ((max(((((arr_5 [i_1 - 1] [i_1]) == (arr_3 [i_1])))), (min(13, (arr_4 [6]))))))));

        for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_14 = var_0;
            var_15 = (min(var_15, ((((max((arr_7 [i_1]), (((arr_6 [i_1] [i_2]) ? 1 : (arr_4 [24])))))) ? ((max(7287, var_4))) : ((11 ? (arr_4 [6]) : (arr_3 [i_1])))))));
            var_16 = (max(var_16, (((((((((-(arr_6 [i_1] [i_1 + 3])))) ? (((arr_6 [i_2] [i_1]) ? var_2 : 1)) : ((206 ? -16 : 7312))))) / (~-5472539274949612906))))));
        }
        for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] [i_1] = (-26 ^ 7312);
            var_17 -= (!var_0);
            arr_12 [i_3 + 1] [24] |= ((~(((arr_4 [14]) / ((40843 ? 187 : (arr_3 [i_3])))))));
        }
    }
    var_18 = 39477;
    var_19 = (min(var_19, (((39493 ? (min(((min(var_7, var_10))), 2990)) : 29193)))));
    #pragma endscop
}
