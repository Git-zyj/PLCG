/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 *= ((!(!var_1)));
        var_17 = -2359;
    }
    var_18 = ((!(~var_0)));
    var_19 = ((!(((-(min(5162511888052577741, var_9)))))));
    var_20 = ((!(max((13 && var_12), (!3979264068)))));
    var_21 = (((!(((var_6 ? var_7 : var_5))))));
    #pragma endscop
}
