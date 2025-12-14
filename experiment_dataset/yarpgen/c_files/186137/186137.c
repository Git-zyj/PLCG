/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_1 ? var_13 : var_9)))) ? var_9 : var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = ((((var_1 || (arr_1 [i_0] [i_0]))) ? ((((arr_0 [i_0]) >= (arr_1 [i_0] [i_0])))) : 1));
        arr_2 [1] = var_12;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] = var_10;
        arr_6 [i_1] = (var_14 && (((var_10 >> (((arr_4 [i_1] [i_1]) + 8674892888293123929))))));
        var_21 = (min(var_21, (((~(((arr_3 [15]) & (arr_4 [i_1] [i_1]))))))));
        var_22 ^= ((!((((arr_4 [i_1] [i_1]) ? var_17 : (arr_3 [i_1]))))));
    }
    var_23 = ((-(!var_1)));
    var_24 = var_5;
    var_25 = ((((min(255, 60220)) & var_17)));
    #pragma endscop
}
