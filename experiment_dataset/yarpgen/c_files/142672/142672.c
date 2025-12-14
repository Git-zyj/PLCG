/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((-11 ? 19 : 251)), var_13));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [10]);
        var_19 = (max(var_19, (((-(min(var_11, (((9416793880092136593 ? 185 : (arr_1 [i_0])))))))))));
        var_20 = (max(var_20, var_7));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 -= (arr_5 [2]);
        var_22 &= (((arr_3 [i_1] [i_1]) ? (arr_5 [14]) : (arr_4 [9] [i_1])));
        arr_6 [i_1] [i_1] = (!0);
    }
    #pragma endscop
}
