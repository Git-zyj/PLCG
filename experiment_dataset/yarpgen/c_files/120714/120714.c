/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_17 = (max(var_4, 1));
        arr_3 [i_0] [i_0] = arr_1 [i_0];
    }
    var_18 = (min(-7006193408978587340, 65519));
    var_19 = (min(((-7006193408978587339 ? var_9 : -7006193408978587352)), var_16));
    #pragma endscop
}
