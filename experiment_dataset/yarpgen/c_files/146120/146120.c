/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_16 = (((!var_10) ? ((var_6 / (arr_1 [i_0 + 2]))) : (arr_0 [1])));
        var_17 = (((arr_1 [i_0]) && 1));
        arr_3 [i_0] = (min((((-(var_3 < var_1)))), (arr_2 [i_0])));
        var_18 = ((~(~var_13)));
    }
    var_19 = (max(var_19, (1 | 240)));
    var_20 = (((((((var_2 ? var_4 : 9223372036854775807)) / ((var_1 ? var_7 : 15))))) || ((min((var_4 * 32), ((var_6 ? var_2 : 9064930507045338453)))))));
    var_21 = ((((min(var_14, ((0 ? var_13 : var_1))))) ? (2 + 240) : (((!-32) ? (~var_10) : (~var_4)))));
    #pragma endscop
}
