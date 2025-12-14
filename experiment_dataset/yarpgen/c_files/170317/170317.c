/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = ((-1 + (((!(arr_2 [i_0] [i_0]))))));
    }
    var_11 = ((var_5 ? ((min((var_3 && -14), (max(1, var_6))))) : ((((min(var_0, 528482304)) != var_5)))));
    var_12 = (((var_8 < var_1) & (!-5)));
    var_13 = var_6;
    #pragma endscop
}
