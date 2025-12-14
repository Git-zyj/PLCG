/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((~((min(-126, 4294967295)))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_14 ^= ((-(min(255, (max(125, 5889354648926094255))))));
        arr_2 [i_0] [i_0] = ((!(arr_0 [i_0] [i_0 - 2])));
        var_15 += (max((!86), ((~(arr_1 [i_0 + 1])))));
    }
    #pragma endscop
}
