/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = 1;
        var_20 = ((1 >> (2251799813685247 - 2251799813685235)));
    }
    var_21 = 632872872;
    var_22 = (max(4890628382004158324, 3958932099557187675));
    var_23 = var_13;
    #pragma endscop
}
