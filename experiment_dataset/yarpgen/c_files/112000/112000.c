/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_1 [i_0]) == var_3));
        var_12 -= 1328554914661532328;
    }
    var_13 &= (((((((max(218, 1527458702))) || ((max(var_6, var_2)))))) >> (((var_5 > (min(17118189159048019262, var_7)))))));
    #pragma endscop
}
