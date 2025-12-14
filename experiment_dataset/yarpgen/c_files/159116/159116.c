/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_8));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((((!((min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))))))) <= (min(((12 ? 4589281676736197930 : -4589281676736197924)), (arr_1 [i_0] [i_0])))));
        var_11 = (min(var_11, ((max((arr_1 [i_0] [i_0]), (max((arr_0 [i_0]), var_0)))))));
    }
    #pragma endscop
}
