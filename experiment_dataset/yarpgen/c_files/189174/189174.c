/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 4248728655;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 *= (((!(!1))));
        arr_2 [i_0] [i_0] = (min(1, ((((((arr_1 [i_0]) ? (arr_0 [i_0] [1]) : -763772427)) <= (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = (max(((((1 & 1) <= (((1 >= (arr_4 [i_1] [i_1]))))))), 408103356));
        arr_6 [i_1] [i_1] = ((+(((arr_3 [i_1]) ? (max(1, (arr_3 [i_1]))) : (((arr_4 [1] [i_1]) ? 61542 : 1))))));
        var_21 = (arr_4 [i_1] [i_1]);
    }
    #pragma endscop
}
