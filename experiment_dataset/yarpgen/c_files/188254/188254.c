/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 10351;
    var_19 = 10358;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [19] [19] &= (min(3, (max(10341, (55184 && 10351)))));
        var_20 = ((!(((((min((arr_1 [i_0] [i_0]), var_9))) ? (((((arr_2 [7] [1]) || (arr_0 [i_0] [6]))))) : 9223363240761753600)))));
    }
    #pragma endscop
}
