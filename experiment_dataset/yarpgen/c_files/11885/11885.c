/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 = ((-31 != ((~(arr_1 [12] [1])))));
        var_13 = (max(var_13, ((((arr_1 [i_0 + 1] [i_0 - 2]) ? (arr_1 [i_0 - 1] [i_0 - 2]) : (arr_1 [i_0 - 1] [i_0 + 1]))))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_14 *= (((((~(arr_4 [i_1 - 1] [i_1 + 1])))) ? (((arr_4 [i_1] [0]) - ((max(12529, (-32767 - 1)))))) : (((arr_4 [i_1] [i_1]) >> (((max((arr_3 [23]), (arr_3 [i_1]))) - 1852430261285278202))))));
        var_15 = (arr_3 [12]);
        var_16 = ((((min(var_11, ((((arr_2 [17] [i_1]) <= (arr_3 [i_1]))))))) ? 31 : ((-32256 ? (((arr_3 [i_1]) >> (((arr_2 [i_1] [i_1]) - 14119606707801110088)))) : ((((arr_3 [i_1]) ? 42710 : (arr_4 [i_1] [i_1]))))))));
    }
    var_17 = (~var_6);

    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_18 *= (max((((!(0 || 65531)))), (min(((1 / (arr_2 [23] [i_2 + 4]))), (max((arr_2 [i_2] [3]), 31))))));
        var_19 = (arr_3 [i_2 - 2]);
        var_20 = ((((max((((arr_2 [i_2 - 3] [i_2]) ? (arr_5 [i_2] [i_2]) : (arr_4 [i_2] [14]))), -13))) ? (((arr_2 [i_2 - 1] [i_2]) ? ((-31 - (arr_2 [i_2] [i_2]))) : (((arr_4 [i_2] [i_2]) | (arr_2 [i_2] [i_2]))))) : -103));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_21 = (arr_5 [i_2] [i_2]);
            var_22 = ((!(arr_7 [i_3])));
            var_23 = ((((6383378214170227138 && (arr_7 [i_3])))));
        }
    }
    var_24 = (var_3 ? var_8 : (-3310505301 * -var_5));
    #pragma endscop
}
