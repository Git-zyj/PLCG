/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= 368396489;

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_14 = 14;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_15 = -1;
            arr_8 [i_0] [i_1] = 1451644016;
            var_16 ^= -1;
        }
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_17 = 4294967282;
        var_18 = (min(var_18, 0));
    }
    var_19 = (min(var_19, 1));
    var_20 = 14;
    #pragma endscop
}
