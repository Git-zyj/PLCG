/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min((!var_5), var_19))) && -var_10));
    var_21 = (((((3212674180 + ((var_15 ? var_4 : 1435136829))))) ? (((~(~-1919991068)))) : var_0));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_22 = ((!((min(3212674180, (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = arr_1 [i_0] [i_0 - 2];
    }
    #pragma endscop
}
