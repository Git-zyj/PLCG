/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((var_5 >> (var_9 - 171536731))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = (max((arr_2 [i_0] [i_0]), 1));
            var_18 *= var_12;
            arr_7 [i_0] [i_0] [10] = (((-(arr_5 [i_1] [i_0]))));
            var_19 = var_12;
            var_20 *= var_6;
        }
        var_21 = 3113821946;
        var_22 += ((arr_0 [i_0 + 1]) * (!1));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] = ((-(arr_8 [i_2] [i_2])));
        var_23 = (((arr_8 [i_2] [i_2]) ? (arr_9 [i_2]) : (arr_8 [i_2] [i_2])));
        var_24 = (arr_9 [i_2]);
    }
    var_25 |= ((((var_8 == (max(var_10, var_14)))) ? var_14 : (~-1165427362)));
    var_26 *= 1048575;
    #pragma endscop
}
