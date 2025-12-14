/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 += ((50228 | (max(30805, ((30805 | (arr_2 [i_0] [i_0])))))));
        var_11 = ((var_2 | (min((arr_0 [i_0] [i_0]), 30798))));
        var_12 += ((!((min(((var_7 << (((var_6 + 19) - 13)))), (arr_2 [3] [i_0]))))));
        var_13 = (min((((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : 32767)))), (((arr_1 [i_0]) ? (min(-2056775737161577229, 1014611357)) : (((var_7 ? var_9 : 41469)))))));
        arr_3 [i_0] = ((-((((min(var_8, (arr_1 [1]))) <= (((min((arr_2 [i_0] [i_0]), var_0)))))))));
    }
    var_14 |= var_0;
    #pragma endscop
}
