/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_14 = (2250468333 ? 0 : 234881024);

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_15 = -var_2;
            var_16 = (max(var_16, ((((~var_6) ? 40474 : 25061)))));
        }
        var_17 = ((!(((~((var_3 ? 40474 : (arr_0 [i_0]))))))));
        var_18 -= (arr_6 [i_0]);
        var_19 = (min(var_19, ((~((25057 ? 0 : -34))))));
    }
    var_20 = 1073741792;
    #pragma endscop
}
