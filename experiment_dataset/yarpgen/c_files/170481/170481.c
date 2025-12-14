/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_11 = (arr_0 [i_0 + 1] [i_0 + 1]);
        var_12 = (arr_1 [i_0]);
    }
    var_13 = 6332608606844178606;
    var_14 = var_1;
    var_15 = (min(((max(var_6, ((58533212 ? var_5 : var_10))))), var_9));
    var_16 = (((((248 ? (~var_2) : var_2))) >= ((-((15467410606033061914 ? 5 : var_1))))));
    #pragma endscop
}
