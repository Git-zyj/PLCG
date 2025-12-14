/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_0 [i_0]), (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = ((arr_0 [i_0]) && ((((max(65535, 7))))));
    }
    var_19 = -var_10;
    #pragma endscop
}
