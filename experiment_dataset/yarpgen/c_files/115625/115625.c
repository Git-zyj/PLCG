/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_17 = 23715;
        arr_2 [i_0 - 1] = -1849969884;
        var_18 = (((((312699144 & ((559479042 ? 16717 : var_1))))) ? ((-(~-17))) : var_4));
        var_19 = (min(var_19, (((((-((42204 ? 35 : var_2)))) < 312699130)))));
    }
    var_20 = ((-559479042 ? ((var_4 ? -var_14 : -559479042)) : (((3727648963 ? ((41821 ? -15209 : 211)) : ((-312699144 ? -32753 : 0)))))));
    var_21 = var_5;
    var_22 = 111;
    #pragma endscop
}
