/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max((max(var_4, 1047928159272494615)), var_1)) >> (((((max(var_5, var_0)))) - 98))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = ((((arr_0 [i_0] [i_0]) ? ((-(arr_0 [i_0] [i_0]))) : (!var_9))) | (((min(-27229, -27641)))));
        var_12 = (!(!0));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (max((((((max(var_4, (arr_2 [i_1]))))) | ((var_6 ? -8071717064386853423 : var_7)))), ((min(((max(1, 0))), 27554)))));
        var_13 = (min((((arr_3 [i_1]) ? var_7 : (arr_3 [i_1]))), (((arr_3 [i_1]) ? 1301730843 : (arr_3 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_7 [i_2] = 51;
        var_14 = 24745;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_12 [i_3] = -1;
        var_15 = var_7;
    }
    #pragma endscop
}
