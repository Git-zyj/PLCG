/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((((25731 ? 49 : -46))))));
    var_11 = ((+(((!var_2) ? (~536870911) : (((var_3 ? 181 : var_7)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((226 ? 183 : 0)))));
        arr_3 [i_0] [i_0] = 1;
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((max(180, -1)));
        var_12 &= (~170);
    }
    var_13 = (max(var_6, (((17894501287050049957 ? 27746 : var_0)))));
    #pragma endscop
}
