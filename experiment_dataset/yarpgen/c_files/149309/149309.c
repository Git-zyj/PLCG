/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = 2251524935778304;
        var_17 = (arr_1 [6]);
        var_18 *= ((~(arr_1 [i_0 + 3])));
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = (max((min(((var_12 ? 1125882726973440 : (arr_4 [i_1] [i_1]))), ((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))))), (((((min((arr_3 [i_1] [i_1]), (arr_4 [i_1] [i_1])))) ? -8790193106564622926 : ((-8790193106564622926 * (arr_4 [i_1] [1]))))))));
        var_20 = (((arr_3 [i_1] [i_1]) ? (arr_3 [9] [i_1]) : var_0));
        var_21 = (max(((max((((arr_3 [i_1] [i_1]) > var_3)), (((arr_3 [i_1] [i_1]) >= var_15))))), (max((arr_3 [i_1] [i_1]), 11393))));
    }
    #pragma endscop
}
