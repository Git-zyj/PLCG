/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [5] = (((var_11 != (((-(arr_0 [i_0])))))));
        arr_3 [i_0 - 3] = (min((--4294967278), ((min((arr_0 [i_0 - 3]), (arr_1 [i_0 - 2]))))));
        arr_4 [i_0] = ((~(arr_0 [i_0 - 1])));
        arr_5 [i_0] [i_0] = (~(max(0, (min(var_5, var_13)))));
        arr_6 [i_0] = ((((17 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2])))) ? ((~(arr_1 [i_0 - 2]))) : var_6);
    }
    var_15 = var_1;
    var_16 = var_10;
    #pragma endscop
}
