/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((((((var_5 ? 1 : 0))) <= (min(72048797944905728, 3717890425848852881)))))));
    var_14 = -11638;
    var_15 &= 18237;

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_16 = var_6;
        var_17 = ((((((max((arr_0 [1] [2]), 142))) ? (arr_0 [i_0 + 2] [i_0 + 1]) : 303750725))) & var_12);
        arr_2 [i_0] = (min((((arr_1 [i_0 + 1] [i_0 - 2]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [0]))), ((((arr_1 [i_0 + 1] [i_0 + 2]) || (arr_1 [i_0 - 2] [i_0 - 2]))))));
        arr_3 [i_0] = 3991216571;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_18 += ((+((((0 ? (arr_0 [i_1] [7]) : -7492649949840012077)) / ((((arr_0 [1] [0]) + 1626761191)))))));
        var_19 = (min(var_19, (arr_0 [i_1 + 1] [1])));
    }
    var_20 = (min((min(var_6, 1)), var_7));
    #pragma endscop
}
