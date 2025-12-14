/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (0 || 1);
        var_12 = ((max(1920491203, ((2351560386 ? 1920491212 : -5312069611382583210)))));
        arr_3 [i_0] = 1920491200;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 = (arr_2 [14]);
            var_14 = (!2499070514);
        }
    }
    var_15 -= max(2147483647, 1920491189);
    #pragma endscop
}
