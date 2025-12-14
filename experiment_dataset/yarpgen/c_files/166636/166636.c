/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [0] &= var_5;
        var_11 |= 38;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_12 = ((-217 ? (arr_6 [i_1 - 2] [3]) : ((max(49, 85)))));
        arr_7 [i_1] [i_1] |= (~var_5);
        arr_8 [i_1 - 1] = ((((min(((min(var_9, 211))), (max(-85, 1184946106562438645))))) ? var_8 : (~99)));
    }
    var_13 = max(var_10, var_9);
    #pragma endscop
}
