/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((var_10 ? 6485938412889291603 : 205)))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0] = -28598;
        var_21 &= (arr_1 [i_0] [i_0 - 1]);
    }
    var_22 = ((0 ? 254 : (min((~30490), var_14))));
    #pragma endscop
}
