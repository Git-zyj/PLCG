/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_11 = ((-345578134443125376 ? ((~(min((arr_0 [i_0] [i_0]), 2243053005213327185)))) : (((((min(32763, (arr_0 [i_0] [i_0])))) ? (min(var_7, (arr_0 [i_0] [i_0]))) : 32756)))));
        var_12 = ((-((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [5]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((~14855) ? (min(14858, (((arr_4 [2] [i_1]) ? -927184462356390758 : (arr_3 [i_1]))))) : (((((arr_4 [i_1] [i_1]) > (arr_1 [i_1]))))));
        var_13 = (max(((~((var_8 ? var_2 : (arr_4 [i_1] [i_1]))))), -3315301338922678670));
    }
    var_14 = (min(var_14, var_6));
    #pragma endscop
}
