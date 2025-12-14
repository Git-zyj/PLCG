/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_14 = var_5;
        var_15 += ((((((min(var_12, var_0)) >> (((var_2 + var_12) - 6791467810622022111))))) && ((max(var_6, ((var_10 ? var_0 : var_10)))))));
        var_16 = var_4;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 ^= var_11;
        var_18 = 2320899754700911351;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = -9786;
        var_19 = (max(var_19, 7936));
    }
    var_20 = var_9;
    #pragma endscop
}
