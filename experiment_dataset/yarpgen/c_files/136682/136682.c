/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 14804;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = ((arr_0 [i_0] [i_0]) ? ((((0 ? (arr_0 [i_0] [i_0]) : var_10)))) : (max(((var_9 ? -14788 : -37)), ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = ((((((max(1, var_3)) < var_9))) * (((!(var_0 ^ 66))))));
        arr_3 [i_0] = (!var_6);
        arr_4 [i_0] = -36;
    }
    #pragma endscop
}
