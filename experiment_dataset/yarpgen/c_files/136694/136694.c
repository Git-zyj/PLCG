/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((var_5 ? var_2 : var_1)))));
    var_15 = var_12;
    var_16 = ((var_8 ? ((((var_13 ? var_12 : var_4)) | var_9)) : ((((((var_6 ? -22880 : var_9))) || (((var_9 ? var_0 : var_0))))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 = (max(((((max(47146, var_11))) ? (!var_0) : (arr_0 [i_0] [i_0]))), var_9));
        arr_3 [i_0] = ((!((((((16383 ? -16 : var_1))) ? var_2 : (((arr_1 [i_0]) ? var_4 : var_10)))))));
        arr_4 [i_0] = (min((max(16383, -12)), (var_11 < var_1)));
        var_18 = ((((arr_1 [i_0]) / var_5)));
        arr_5 [i_0] = ((!((max(var_2, (arr_2 [i_0 - 1]))))));
    }
    #pragma endscop
}
