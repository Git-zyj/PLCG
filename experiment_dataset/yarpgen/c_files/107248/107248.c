/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((min(((32767 ? -3565 : 15772)), (max(var_0, var_9)))), var_10));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_15 = (min(var_0, (max(var_12, var_9))));
        arr_2 [i_0] [i_0] = (max(((var_8 ? (min(var_8, var_6)) : var_7)), ((var_9 ? var_6 : var_11))));
        var_16 = (((min(var_6, var_7))) ? ((max(var_8, (max(var_10, var_8))))) : ((1 ? 1833634144 : 5172387571694518920)));
        var_17 = (max(((min(var_10, var_7))), (max(var_1, var_11))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (max(((min(var_1, var_4))), ((var_12 ? var_4 : var_13))));
        var_18 = (((((var_1 ? ((var_9 ? var_13 : var_4)) : (((var_2 ? var_4 : var_0)))))) ? var_0 : (min(var_10, ((var_3 ? var_3 : var_0))))));
        arr_6 [i_1] = max((((((var_0 ? var_12 : var_5))) ? (((max(var_0, var_5)))) : ((var_12 ? var_3 : var_6)))), ((max(var_11, var_4))));
    }
    #pragma endscop
}
