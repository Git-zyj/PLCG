/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = ((max(876529395, 3418437900)));
        var_14 |= (arr_0 [0] [i_0]);
        var_15 = ((!(((~(arr_2 [i_0 + 2] [i_0]))))));
        var_16 = (min(var_16, ((min(((~(arr_3 [4] [4]))), (max(var_3, (arr_3 [12] [12]))))))));
    }
    var_17 = ((((((max(var_7, var_10))))) ? var_9 : var_9));
    var_18 = (min(((((max(var_10, var_0))) ? var_8 : var_6)), var_5));
    var_19 = (max(var_19, var_12));
    #pragma endscop
}
