/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 = ((max((min(65535, -1868561084)), -1868561084)));
        var_17 = (max(var_17, ((max((((805306368 > (65535 & -1868561085)))), 65532)))));
        var_18 = 6354985936101189326;
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (arr_4 [i_1])));
        var_20 = (min(var_20, ((((arr_5 [2]) && var_2)))));
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (1868561079 % 14);
        var_21 &= 9223372036854775807;
    }
    var_22 = 65534;
    #pragma endscop
}
