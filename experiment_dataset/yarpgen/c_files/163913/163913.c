/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0 - 3]) ? ((~(min(var_10, var_2)))) : var_7));
        var_16 = ((((max(((14318 ? 0 : 65374)), -43058))) ? (((!var_7) ? (((min(22477, 43048)))) : (arr_1 [i_0]))) : var_3));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = var_2;
        arr_8 [i_1] [i_1] = ((22477 ? 288230375614840832 : 12610));
        arr_9 [i_1] [0] = var_7;
        arr_10 [i_1] = (!var_9);
    }
    var_17 = (min((((!(((var_12 ? var_0 : var_2)))))), var_3));
    #pragma endscop
}
