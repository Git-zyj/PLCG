/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = (((((-((min(13328, 3)))))) ? (~4008513849273639324) : var_16));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~(~17618649932282809676)));
        arr_5 [i_0] &= (min((((-(arr_0 [i_0])))), 17618649932282809676));
    }
    #pragma endscop
}
