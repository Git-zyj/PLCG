/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4294967295;
    var_14 = 13124218653327277440;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = 70368744177663;
        arr_3 [i_0] = 18387384290188042702;
        arr_4 [i_0] = 6391718623493210988;
        var_15 -= 4044036508744785528;
        arr_5 [3] = 6391718623493210973;
    }
    var_16 = 18387384290188042702;
    #pragma endscop
}
