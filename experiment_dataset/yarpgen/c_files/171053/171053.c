/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(1679773521, 21));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (3817076641 && 0)));
        var_22 |= var_16;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_23 ^= (min(-var_2, ((~((max(var_12, (arr_2 [i_1]))))))));
        var_24 *= 1370696414;
        var_25 = (max(((-3587564056040201212 ? 1023 : (~-3587564056040201224))), 1023));
        arr_5 [i_1] [i_1] = (~(~-1308745290));
    }
    var_26 = (max(var_26, var_4));
    #pragma endscop
}
