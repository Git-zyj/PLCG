/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_10);
    var_15 = ((!((((min(var_2, 15189)) ^ (((47880 ? 17655 : 4294967295))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_5, (arr_1 [i_0])));
        var_17 -= (min((((min(var_12, (arr_0 [i_0]))) >= var_11)), (!var_0)));
    }
    var_18 &= var_6;
    #pragma endscop
}
