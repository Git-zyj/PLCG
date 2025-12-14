/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_2 ? var_12 : 3758720805)))) ? -2147483640 : ((var_1 ? var_5 : ((3 << (var_11 - 57461)))))));
    var_19 = (((3758720829 ? -31 : ((var_13 ? var_6 : var_8)))));
    var_20 = (min(var_20, ((min(var_7, var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((3758720792 ? -16248 : var_10));
        var_21 = ((-(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = (min(var_22, (arr_4 [i_1] [i_1])));
        arr_6 [i_1] = (max(((((max(var_2, var_15))) ? ((((arr_4 [i_1] [i_1]) >> (((arr_4 [i_1] [i_1]) - 58990))))) : -977463839080040789)), (min((15066983235190866581 + -16250), (arr_5 [i_1] [i_1])))));
    }
    #pragma endscop
}
