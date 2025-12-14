/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_17, ((max(var_12, (!1))))));
    var_19 = 16571381099981972337;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (arr_0 [i_0] [i_0]);
        var_21 = (!(arr_0 [i_0] [i_0]));
        var_22 = -var_9;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((~(arr_1 [i_1])));
        var_23 = 14163088813046361331;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((((min((arr_0 [i_2] [i_2]), (arr_7 [i_2])))) ? (((max((arr_4 [i_2]), (arr_4 [i_2]))))) : ((-((-(arr_2 [i_2] [i_2])))))));
        arr_9 [i_2] = ((((((arr_2 [i_2] [i_2]) ? var_17 : (arr_2 [i_2] [i_2])))) ? (((arr_2 [i_2] [i_2]) ? (arr_2 [i_2] [i_2]) : 1)) : (arr_2 [i_2] [i_2])));
        var_24 = (min((arr_2 [i_2] [i_2]), (((((~(arr_3 [i_2])))) ? (arr_0 [i_2] [i_2]) : (((max(0, (arr_7 [i_2])))))))));
    }
    #pragma endscop
}
