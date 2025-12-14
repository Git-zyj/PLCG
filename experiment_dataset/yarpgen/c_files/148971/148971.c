/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = -4172427946729447696;
        arr_3 [i_0] = -3013379765693631370;
    }
    var_12 -= min(var_1, 219);
    #pragma endscop
}
