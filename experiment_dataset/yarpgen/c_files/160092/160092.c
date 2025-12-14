/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 += (max(((((2755438450771021248 != var_4) >= 15691305622938530387))), 30032));
    var_15 = (max(var_11, (var_11 == var_2)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = var_12;
        arr_3 [12] = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 *= min(15691305622938530380, (min((max(15691305622938530367, (arr_5 [4]))), ((15691305622938530367 ? 15691305622938530367 : var_1)))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = (var_2 % -79);
            var_19 = (min(var_19, (((!((((((-115 ? (arr_5 [i_1]) : 2695797917))) ? -32765 : ((-1095036514 - (arr_5 [i_2])))))))))));
            var_20 = 30032;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_10 [21] [i_3] |= ((var_10 ? (arr_9 [i_1] [i_3]) : (arr_7 [i_3] [i_3] [i_3])));
            var_21 = (((arr_4 [i_3]) ? var_12 : (30011 || var_5)));
            arr_11 [i_3] [i_3] [i_1] = 1859870254;
        }
        var_22 = (max((((max((arr_8 [i_1]), (arr_5 [i_1]))) - (2900168827 | var_5))), ((max((max(var_12, var_11)), 2147483644)))));
    }
    var_23 |= ((var_9 ? var_10 : ((var_5 ? (((var_3 ? 117 : 79))) : (max(65524, var_7))))));
    #pragma endscop
}
