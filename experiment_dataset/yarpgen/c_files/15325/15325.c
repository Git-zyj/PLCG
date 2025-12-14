/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_9 ? (arr_0 [i_0]) : -15)) - (!-15))));
        var_10 = (max(var_10, ((((max((((arr_2 [i_0] [1]) / (arr_2 [i_0] [12]))), (((arr_0 [i_0]) ? -47 : (arr_1 [i_0]))))) / ((+(min((arr_2 [i_0] [22]), var_4)))))))));
        var_11 *= (max((-28 <= -33), var_0));
    }
    var_12 = (((-((-29 ? var_8 : 1194079879)))) / ((var_1 / (max(1, 2372225557)))));
    var_13 -= var_0;
    var_14 = (min(var_14, ((((((max(16, var_4)))) ? (min(((var_9 ? var_8 : 47)), (33 + var_9))) : (((!var_5) << ((((max(249, 21))) - 249)))))))));
    #pragma endscop
}
