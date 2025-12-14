/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(var_1, var_5))));
    var_20 |= (((((max(96, 3316617270797729418)))) ? var_18 : 15130126802911822198));
    var_21 = ((((max(3316617270797729418, var_11))) ? var_12 : var_17));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_22 = (((((var_7 + 1200050419) ? 1 : (var_1 ^ 15130126802911822197))) + ((((arr_3 [i_0 - 1] [i_0 + 2]) ? (-1569302206 | var_16) : (arr_0 [i_0 + 2]))))));
        var_23 = var_7;
        var_24 = ((((((arr_0 [i_0 - 4]) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : 3316617270797729444)) : (arr_0 [i_0 - 4])))) ? ((((arr_0 [i_0 + 2]) < (arr_0 [i_0 + 2])))) : (~-var_4)));
        var_25 = ((((((min(15522, var_9))) ? (max(var_16, var_2)) : var_8)) << (((min(var_1, ((var_0 ? var_5 : var_9)))) - 4172764020))));
        var_26 = ((((((min(var_2, 229))))) ? ((min(15, (arr_3 [i_0] [i_0])))) : (min(63, 18446744073709551615))));
    }
    var_27 = var_7;
    #pragma endscop
}
