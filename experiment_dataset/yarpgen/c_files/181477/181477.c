/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [14] = (min((~var_5), var_6));
        arr_3 [9] [i_0] = ((12539092235898160667 ? 1 : 248));
    }
    var_16 = 16382;
    #pragma endscop
}
