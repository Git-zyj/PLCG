/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [1] &= (!65504);
        var_17 = (min(var_17, ((min((-7362 / var_8), (24 * 1))))));
    }
    var_18 = var_13;
    var_19 = (max(((var_12 ? -var_13 : ((min(3260, var_2))))), ((~((max(var_11, var_9)))))));
    var_20 = (min(var_20, ((min((max((min(var_10, var_3)), -73)), ((max(4, 3511680178))))))));
    #pragma endscop
}
