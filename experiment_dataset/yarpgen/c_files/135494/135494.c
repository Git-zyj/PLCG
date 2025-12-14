/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 24480;
    var_21 = var_2;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_22 = (!-32561);
        arr_2 [i_0] = ((min((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : -24480)), ((max(var_19, (arr_1 [i_0])))))));
        var_23 = ((!(((((max(var_2, (arr_1 [i_0 + 2])))) ? (arr_1 [10]) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0 - 2] [i_0]))))))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_24 = (((arr_3 [i_0]) / ((((min(1761986349, 1))) ? 1761986349 : var_13))));
            var_25 *= ((((min((arr_4 [i_1 - 1] [i_0 - 1]), var_2))) ? var_4 : ((max((arr_0 [5] [i_1 - 1]), (arr_4 [i_1] [i_1]))))));
            var_26 = ((((((-7830 ? (arr_0 [i_0] [i_0]) : (arr_3 [i_0])))) ? var_1 : var_11)));
            arr_5 [i_0] = ((~(arr_4 [i_0 + 2] [i_0 - 2])));
        }
        var_27 = max(((max((arr_0 [i_0] [i_0]), (min((arr_0 [i_0] [i_0]), var_4))))), (((var_11 < var_17) | (var_9 | -1))));
    }
    #pragma endscop
}
