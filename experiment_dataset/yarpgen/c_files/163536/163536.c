/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [13] [i_0] = (var_4 || var_3);
        var_12 += ((((((arr_2 [i_0] [i_0]) || var_6))) == -var_2));
    }
    var_13 = 27896;
    var_14 &= ((((((~0) & (max(var_5, 7))))) || (((2115352908 * (var_2 ^ 1572864))))));
    var_15 = ((~(((min(var_11, -350886150)) + var_3))));
    #pragma endscop
}
