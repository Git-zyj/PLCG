/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_0;
        arr_3 [i_0] = ((max(((var_8 ? 48096 : 0), ((max(var_5, 48103)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_10 = (((((3 ? -33 : 4294967295))) ? ((1930758328285524512 ? 17440 : (max(var_8, var_1)))) : (((var_2 ? 1 : var_6)))));
        arr_8 [i_1] &= (min(6, (-2147483647 - 1)));
    }
    var_11 = (max(var_11, var_7));
    #pragma endscop
}
