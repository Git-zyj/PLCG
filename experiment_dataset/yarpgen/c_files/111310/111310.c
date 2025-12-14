/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (min(var_14, var_13));
        var_15 += (min(((var_6 / (arr_0 [i_0] [5]))), (min((((arr_1 [i_0]) ? var_8 : -4)), (arr_1 [i_0])))));
        var_16 *= (((arr_1 [i_0]) ? var_11 : (arr_1 [i_0])));
    }
    var_17 = (min(var_17, (!255)));
    var_18 &= (185 % 1);
    var_19 = (min(var_19, ((((var_5 ? ((min(114, var_7)) : var_2)))))));
    var_20 = (((1 / -35) - (((((min(var_0, var_4))) != ((max(var_4, var_11))))))));
    #pragma endscop
}
