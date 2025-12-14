/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((((((var_1 ? var_0 : var_9))) ? (max(18446744073709551615, var_0)) : (max(10970616251398204518, var_9)))), (((max(var_7, 2105366900)) % (((0 ? var_6 : var_8))))));
    var_20 = (min((((~(~var_1)))), 2189600404));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((1 * -715121982) ? (~805686534) : var_16)));
        var_21 = 782008616543205800;
        arr_3 [i_0] = (min(((max((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) ? (-32767 - 1) : (arr_0 [8] [i_0])))))), (max((arr_1 [i_0]), (var_2 || var_4)))));
    }
    var_22 &= ((var_0 ? (((-((min(85, var_13)))))) : (min((min(var_12, var_7)), ((((var_13 + 2147483647) << (18446744073709551615 - 18446744073709551615))))))));
    var_23 |= ((-(((max(var_9, 12638178692832334482))))));
    #pragma endscop
}
