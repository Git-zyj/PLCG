/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [14] &= (((min((var_0 ^ 1), ((675978475 ? var_1 : var_9)))) != ((((-675978476 + 0) ? ((var_10 ? 15310 : 7962450245776508037)) : -675978476)))));
        var_19 = (!-61);
    }
    var_20 = (max((((-675978451 ? 1 : 0))), ((~((var_4 ? var_10 : var_4))))));
    #pragma endscop
}
