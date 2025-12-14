/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_13 = -var_9;
            var_14 = (arr_0 [2] [1]);
            arr_6 [i_1] = (max((min((arr_4 [i_0] [9] [i_1]), var_12)), (arr_2 [i_1])));
        }
        var_15 = (arr_5 [i_0]);
        var_16 = var_3;
    }
    var_17 = (max(var_17, (~var_9)));
    #pragma endscop
}
