/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -13753;
        arr_4 [i_0] [i_0] = (-13753 ? 9060889249570296209 : -40);
        var_13 *= (~255);
    }

    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_8 [1] [i_1] = (min((min((var_1 * var_10), -9060889249570296218)), var_6));
        arr_9 [i_1] [i_1] = ((((((~var_7) <= var_2))) - ((max(1, 1)))));
        arr_10 [i_1 + 2] [i_1 + 2] = ((((max(13763, (max((arr_1 [16]), var_7))))) ? -var_11 : var_0));
        var_14 = (max((arr_1 [8]), ((-751559526351538365 ? 60 : 9060889249570296209))));
    }
    #pragma endscop
}
