/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max((var_6 || 127), var_10)) != (((((min(var_6, var_0))) && var_6)))));
    var_12 &= ((var_1 > (((((min(13596, 13581))) ? (1211071952 < var_3) : var_2)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (min(var_13, ((((((arr_0 [i_0] [i_0]) % (arr_0 [i_0] [i_0]))) >= ((((arr_0 [i_0] [i_0]) == (arr_0 [i_0] [12])))))))));
        arr_2 [i_0] = (-((var_9 / (13596 ^ 13582))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 = (((arr_3 [i_0] [i_1]) ? 11602480128345328318 : var_5));
            var_15 |= (((18532 || 11602480128345328339) >> (20726 && var_7)));
            var_16 = ((var_6 * (var_1 % var_4)));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] |= (((13596 | 11602480128345328318) + (arr_1 [i_2] [i_2])));
        arr_10 [i_2] &= (!var_10);
    }
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        var_17 = (min(var_17, (arr_6 [i_3] [6])));
        var_18 = ((~((((((arr_0 [i_3] [14]) * (arr_11 [20])))) ? (arr_4 [i_3] [i_3 - 3] [i_3]) : -20089))));
    }
    var_19 = -1740375901046250394;
    var_20 -= ((var_6 > (min(var_9, var_5))));
    #pragma endscop
}
