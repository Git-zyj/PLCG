/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 &= var_11;
        arr_2 [i_0] = (((((-(max(3914553904, 3914553909))))) ^ (min((var_2 / 3914553904), (max(-881201041166002538, 1))))));
    }
    var_17 |= var_10;
    #pragma endscop
}
