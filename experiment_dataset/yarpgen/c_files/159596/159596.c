/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min(1, var_9)))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_14 = (max(var_14, (((1 ? 3612 : 1)))));
        var_15 = (min(var_15, ((((arr_0 [i_0 + 1]) >= ((min(1190693486631413087, 1))))))));
        var_16 = var_2;
    }
    #pragma endscop
}
