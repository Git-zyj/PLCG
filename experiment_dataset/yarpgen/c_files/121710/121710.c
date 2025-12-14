/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min((((!(((var_12 ? var_14 : var_1)))))), var_8));
    var_18 *= ((((((((1314821567 << (18747 - 18730)))) ? (((max(var_4, var_1)))) : ((var_6 ? var_14 : var_9))))) && 18767));
    var_19 = ((var_15 ? ((((max(94, 17624))) / ((var_3 ? var_11 : 231)))) : ((var_9 ? (var_13 + var_3) : (-18748 >= var_2)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [6] = ((!(((~(arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = (max(var_9, var_3));
    }
    #pragma endscop
}
