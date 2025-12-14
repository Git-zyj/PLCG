/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_3, (((((var_3 ? var_14 : 201326592))) ? -1798124663070504081 : var_7))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (((arr_0 [i_0]) ? (((arr_2 [i_0]) ? (arr_1 [i_0]) : var_5)) : (((((arr_1 [i_0]) || var_9))))));
        var_20 = (max(var_20, (arr_1 [i_0])));
    }
    var_21 = var_6;
    var_22 = (((((((min(var_9, 524287))) ? ((var_12 ? 144 : var_11)) : var_2))) ? 3025921105733938781 : -1798124663070504081));
    var_23 = (!var_7);
    #pragma endscop
}
