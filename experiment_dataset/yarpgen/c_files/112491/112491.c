/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 6));
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (min(var_14, ((((((max((arr_0 [i_0] [i_0]), 32751))) ? 124 : (max(5288065278144903889, 1537135180))))))));
        var_15 ^= ((((max((min(2327138416, (arr_3 [i_0] [i_0]))), ((10494234030361133191 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))) ? ((~(arr_1 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
    }
    var_16 = (min(((((max(var_9, var_8))) ? ((5288065278144903870 << (1 - 1))) : 5288065278144903871)), (((!9) ? ((-5288065278144903889 ? 5288065278144903904 : var_10)) : ((-5288065278144903894 ? 5288065278144903864 : var_7))))));
    #pragma endscop
}
