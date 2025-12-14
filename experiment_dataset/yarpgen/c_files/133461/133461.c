/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(-var_14, (~-63196249))) != var_14));
    var_21 = (min(((var_5 ? 63196249 : var_9)), (max(4128768, var_18))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = min((arr_2 [i_0]), ((min((var_4 != var_4), (arr_1 [i_0] [i_0])))));
        var_22 = min((((arr_3 [i_0]) / (arr_2 [i_0]))), (((4290838527 < -63196249) ? 4128768 : (arr_2 [i_0]))));
        arr_5 [i_0] = var_1;
        var_23 = (max(var_23, (arr_2 [12])));
    }
    #pragma endscop
}
