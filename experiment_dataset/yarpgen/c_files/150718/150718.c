/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = ((!((((~-405023072) ? -20497 : ((~(arr_1 [i_0]))))))));
        var_10 &= ((-972921952514534577 || (((((min((arr_0 [i_0 + 1]), var_3))) << (var_5 - 3530580597254550634))))));
    }
    var_11 = 2174335428;
    #pragma endscop
}
