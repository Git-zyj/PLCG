/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_0));
    var_20 = var_14;
    var_21 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_22 -= (~(((!(arr_0 [i_0] [i_0])))));
        var_23 = (min(var_23, (((((-((((arr_1 [14]) <= var_10))))) * ((~(arr_0 [i_0] [i_0]))))))));
    }
    #pragma endscop
}
