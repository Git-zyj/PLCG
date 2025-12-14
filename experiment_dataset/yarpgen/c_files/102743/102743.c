/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((var_7 >> ((((((var_11 ? (-9223372036854775807 - 1) : 23096)) - -9223372036854775789)) + 40))))) ? var_10 : (((((var_12 ? var_14 : var_6))) ? 19 : var_10))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = 42440;
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_18 = (min((((((42440 ? 2908975770228463693 : 13458))) + ((-(arr_1 [i_1]))))), (((((var_8 + (arr_5 [3])))) ? (((42444 ? -7315944316279342107 : 1))) : ((var_0 ? (arr_0 [i_1] [i_1]) : 1))))));
        var_19 ^= var_1;
        var_20 = (max(var_20, -349284473));
    }
    #pragma endscop
}
