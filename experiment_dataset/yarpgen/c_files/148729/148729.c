/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_12 >= ((var_4 ? var_8 : var_4))))) + (max(var_13, ((max(var_10, var_9)))))));
    var_15 = var_8;
    var_16 &= var_13;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 |= (((arr_1 [i_0]) ? (max(((var_0 ? var_8 : var_0)), (arr_1 [i_0]))) : var_4));
        var_18 -= ((var_3 ? var_4 : ((((((max(0, 10788)))) != ((var_3 ? var_1 : (arr_0 [i_0]))))))));
        arr_2 [i_0] = (((arr_0 [i_0]) + var_3));
    }
    #pragma endscop
}
