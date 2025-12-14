/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= 2977399093;
    var_20 = -1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (max(var_21, (0 < 97)));
        var_22 = ((-4 * -17) >> 16);
    }
    var_23 = (((min(-1, (max(5, 3406217506)))) >= ((max(-1, ((min(1, 91))))))));
    #pragma endscop
}
