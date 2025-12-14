/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((((~(7 && -28196)))) ? (((arr_1 [i_0] [i_0]) ? (!0) : (!12))) : ((((arr_1 [i_0 + 1] [i_0 + 1]) != 2305280059260272640)))));
        var_16 = min(1, var_10);
    }
    var_17 = (((((~((1 ? var_6 : 1345))))) ? -57 : ((var_5 ? var_3 : var_8))));
    var_18 = ((~var_7) < var_6);
    #pragma endscop
}
