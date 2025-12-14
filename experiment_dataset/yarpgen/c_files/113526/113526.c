/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_16 = (min((arr_1 [i_0 + 2]), (((arr_1 [i_0]) ? ((var_8 ? var_9 : 1684066771)) : 1373161243))));
        var_17 = (max(((min(((var_7 ? -3154190751552450556 : var_1)), (((3439734089 ? (arr_0 [i_0]) : 4294967295)))))), 3259048461415936344));
        arr_2 [i_0] [i_0] = ((var_0 ? ((min((!133), var_0))) : (((((var_11 ? var_13 : var_10))) ? (max(var_1, var_11)) : ((max((arr_0 [i_0]), (arr_0 [8]))))))));
    }
    #pragma endscop
}
