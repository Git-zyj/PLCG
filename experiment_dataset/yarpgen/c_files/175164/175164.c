/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 3] = var_0;
        var_11 = 3;
        arr_4 [i_0] [i_0] = (min(((var_3 ? (-23 & var_7) : var_7)), ((((((arr_1 [i_0]) ? 30 : var_3)) >= (65535 || 63))))));
    }
    var_12 = ((-((var_1 ? -64 : (-61 || 45)))));
    var_13 = (max((((!(((var_0 ? var_8 : var_6)))))), (max((min(var_2, var_8)), 834803016))));
    var_14 = (max((((((31 ? -4 : -63))) ? var_8 : var_1)), 4294967292));
    #pragma endscop
}
