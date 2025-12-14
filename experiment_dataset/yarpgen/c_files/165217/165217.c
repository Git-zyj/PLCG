/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_2));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = 51340;
        arr_4 [i_0] [17] = -5695666302570798905;
    }
    #pragma endscop
}
