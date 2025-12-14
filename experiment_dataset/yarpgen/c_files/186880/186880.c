/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_8;
    var_18 = (min(var_18, (max(((min(var_2, var_14))), (((((max(var_8, var_9))) ? var_0 : var_8)))))));
    var_19 = var_16;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = (min(((((((var_13 && (arr_3 [i_0]))))) | (arr_1 [i_0 + 1]))), ((max((((arr_0 [i_0]) - (arr_4 [0]))), (arr_4 [i_0 - 1]))))));
            var_21 = ((((var_16 != (arr_3 [i_0])))));
        }
        var_22 = -113;
        arr_5 [i_0] = (arr_4 [0]);
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_8 [i_2] [1] = (max(var_6, ((var_12 ? ((min((arr_3 [20]), (arr_0 [i_2])))) : (arr_7 [i_2 - 1] [i_2 + 1])))));
        var_23 = (max(var_23, (arr_6 [i_2])));
    }
    #pragma endscop
}
