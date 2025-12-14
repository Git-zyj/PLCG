/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= 4632167045088854743;
    var_20 = ((((((var_8 ? var_17 : var_9)) <= (((var_17 ? 1476886161 : var_10))))) && 3283011568));
    var_21 = (max(var_21, (((((((var_3 == (var_6 / var_1))))) == (min((min(3639651010, var_2)), (178 == var_17))))))));
    var_22 ^= var_6;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = 249;
        var_23 |= ((((((arr_0 [i_0]) ? var_16 : var_17))) ? (((var_4 ? var_2 : (arr_0 [i_0])))) : (((arr_0 [i_0]) ? var_12 : 250))));
        var_24 = (((((arr_1 [i_0 - 2] [i_0]) | (arr_1 [i_0] [i_0 - 2]))) << (((((arr_1 [i_0] [i_0]) ? 169 : var_0)) - 143))));
    }
    #pragma endscop
}
