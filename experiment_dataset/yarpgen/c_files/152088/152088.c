/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~(784274603 ^ 666064437)));
        var_11 = (max(((max(23, (max(14, 32761))))), -32764));
    }
    var_12 = (max(var_1, (((~var_6) | ((65528 ? 7793910853241257894 : -32757))))));
    var_13 = ((((-32734 <= (min(17804976467949208017, 119)))) ? (9106107121708334206 ^ var_1) : (~11)));
    #pragma endscop
}
