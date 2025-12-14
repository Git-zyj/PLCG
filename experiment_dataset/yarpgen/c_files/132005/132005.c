/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(!18038)));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 = ((-(arr_0 [i_0 + 1] [i_0 - 2])));
        var_20 = (min(var_20, (arr_1 [i_0] [i_0])));
        arr_2 [8] = (((max((min(4178939905, var_3)), ((max(var_15, -79))))) * var_12));
    }
    var_21 = var_9;
    #pragma endscop
}
