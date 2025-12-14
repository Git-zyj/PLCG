/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 989586350346474024;
    var_16 = ((var_9 ? (~var_8) : 1));
    var_17 += var_9;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = ((((min((~9146), ((~(arr_0 [i_0] [i_0])))))) ? (min((((arr_1 [i_0]) ? -3623 : -1)), 30997)) : ((~((-(arr_1 [i_0])))))));
        var_19 = (min(var_19, ((max(2892262741718278363, (~-3635))))));
    }
    #pragma endscop
}
