/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min((var_4 == -31410), ((var_9 ? 31410 : var_0)))) <= (var_10 & -31409)));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [0] = -280288944;
        arr_3 [i_0] [i_0] = ((((max(-280288944, var_14))) < -100852968));
        arr_4 [16] |= var_6;
    }
    var_18 = ((~((((0 % 21578) <= 0)))));
    #pragma endscop
}
