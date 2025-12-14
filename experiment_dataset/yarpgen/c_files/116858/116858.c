/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((+(min((!-8988059023190962553), (max(646125823, -8988059023190962553))))));
        var_15 = (max(((min(((max(var_3, -2014783623))), -8988059023190962553))), ((max(var_8, (arr_1 [i_0]))))));
        var_16 = (max((max((~var_4), (max((arr_0 [i_0]), var_3)))), (((min(var_9, var_6))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 = (min((min((max(1933694103, (arr_5 [8] [i_1]))), ((max(-8988059023190962537, (arr_4 [i_1])))))), (max((max((arr_5 [i_1] [i_1]), var_2)), ((max(-3300870891049332786, 178515135)))))));
        var_18 = (!(((+(min((arr_4 [4]), -8988059023190962558))))));
        arr_6 [i_1] = (max(((~(max((arr_5 [i_1] [i_1]), -132937125663941250)))), (max((min((arr_4 [i_1]), 16014850709325582991)), ((max((arr_4 [1]), var_0)))))));
    }
    var_19 = (max((((~(min(var_12, 9722))))), (max(((min(var_13, var_8))), (min(-2901905344316749255, var_0))))));
    var_20 = (-((max(9722, 12200649579883407506))));
    #pragma endscop
}
