/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= 12312406778432452257;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((3174635631616812485 ? 3174635631616812485 : -1932259621)) >> ((1 ? 1 : 1)))));
        arr_3 [i_0] = ((((-3174635631616812485 ? 1 : 3174635631616812488)) >> (((((3550218848267502377 >= 63) ? 1999023382162569170 : -7)) - 1999023382162569133))));
    }
    #pragma endscop
}
