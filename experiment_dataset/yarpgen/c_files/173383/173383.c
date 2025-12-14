/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(1, 1));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = ((min(1, (arr_1 [i_0] [i_0]))) >> (var_6 - 3456795735633538862));
        var_12 *= (((((~(max(47677, var_1))))) ? ((max(((-(arr_1 [3] [i_0]))), (((arr_0 [i_0]) ? (arr_0 [i_0 - 1]) : 1))))) : (max(47661, (((arr_2 [i_0] [i_0]) / (arr_0 [1])))))));
        arr_3 [i_0] = ((var_6 ? (((min((arr_0 [i_0]), (arr_2 [11] [6]))) / (arr_2 [i_0 + 2] [i_0 + 2]))) : ((((47677 && ((max(var_9, (arr_1 [i_0] [i_0 + 2]))))))))));
        arr_4 [i_0 + 2] = 1;
        var_13 = (((var_8 >> 1) ? (((arr_0 [i_0 + 1]) | (arr_0 [i_0 + 1]))) : ((~(arr_0 [i_0])))));
    }
    #pragma endscop
}
