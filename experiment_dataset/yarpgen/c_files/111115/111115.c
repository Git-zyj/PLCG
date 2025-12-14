/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((var_15 && ((var_4 != ((22784 ? var_18 : (arr_1 [i_0])))))));
        var_21 = ((((max(-3041, -1525470729))) ? (arr_1 [2]) : ((((var_4 ? var_13 : 17851055012490492392)) >> (((-21218 & var_10) - 1384652781))))));
        var_22 = (max(var_22, (max((!var_0), (max(var_5, 22784))))));
    }
    #pragma endscop
}
