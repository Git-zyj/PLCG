/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 34707;
    var_19 = (((!var_11) * var_9));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_20 = var_11;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_21 = (max(var_21, ((((((((arr_2 [9] [i_0 + 1]) + (-444389302350890742 - 8262))) + 9223372036854775807)) >> ((var_1 + (arr_3 [i_0] [i_0]))))))));
            var_22 = (arr_2 [i_0] [i_0 + 1]);
        }
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_8 [i_2] |= (arr_2 [24] [21]);
        var_23 = arr_3 [24] [i_2];
        var_24 = ((max((arr_5 [i_2] [i_2]), (arr_5 [4] [i_2]))));
    }
    var_25 ^= var_5;
    #pragma endscop
}
