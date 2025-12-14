/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max((((!(var_5 + var_11)))), ((2824700855545048649 / ((var_10 ? var_4 : var_1)))))))));
    var_13 = ((var_8 >= (((-2824700855545048653 != ((min(var_5, var_1))))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_14 = var_5;
        arr_4 [i_0] |= var_2;
    }
    #pragma endscop
}
