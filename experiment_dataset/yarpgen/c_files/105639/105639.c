/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((((102 ? var_14 : var_4)) * (479997674 / 569223391)))));
    var_18 ^= (((((~((var_4 ? -3265514046279917834 : 87))))) && ((max((max(2492844730, -1)), (1927227529 + 1023))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (!var_2);
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    #pragma endscop
}
