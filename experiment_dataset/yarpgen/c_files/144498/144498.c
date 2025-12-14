/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((max((arr_1 [i_0] [i_0]), 267087243)) == (6678219744176900141 + 11768524329532651474))));
        arr_4 [i_0] [i_0] &= 162;
        arr_5 [i_0] [i_0] = ((((max(536870880, (arr_0 [i_0])))) ? ((((max(59106, var_10)) == (max(5457346123219686944, var_11))))) : (~var_0)));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_19 = (((arr_7 [i_1 - 3]) ? ((((arr_7 [i_1 + 2]) ? var_0 : (arr_7 [i_1 - 1])))) : var_15));
        arr_9 [9] [i_1] |= -2147483645;
    }
    var_20 = (((((!(((var_2 ? var_0 : 49024776))))))) == (((((max(-19813, 94)))) + (max(var_9, var_2)))));
    var_21 += var_4;
    var_22 = (max(var_22, var_18));
    #pragma endscop
}
