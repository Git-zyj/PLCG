/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 += var_3;
        var_17 = var_15;
        arr_3 [11] [i_0] = -5109498160667475094;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 += ((var_3 || ((((var_3 < var_5) ? var_9 : (arr_0 [7]))))));
        arr_7 [i_1] [i_1] = (arr_1 [i_1]);
        var_19 = (+(((arr_1 [3]) ? var_7 : -1474596686)));
        var_20 += max((arr_4 [i_1] [2]), var_1);
    }
    var_21 = (min(var_21, (!var_9)));
    var_22 = -11670;
    #pragma endscop
}
