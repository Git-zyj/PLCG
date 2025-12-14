/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((((min(var_17, ((min((arr_1 [i_0]), (arr_0 [i_0]))))))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((((50544 <= ((((arr_1 [i_0]) - (arr_1 [i_0]))))))))));
    }
    var_19 &= (min((((((-8557 ? (-32767 - 1) : -479))) ? ((var_13 ? var_4 : var_1)) : 478)), var_12));
    var_20 &= var_6;
    var_21 += var_12;
    var_22 += ((((min((var_6 * var_16), ((var_1 ? var_0 : var_4))))) ? var_11 : var_13));
    #pragma endscop
}
