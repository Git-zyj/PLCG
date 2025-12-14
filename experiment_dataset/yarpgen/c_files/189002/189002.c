/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((var_2 | 15728640) != ((-(max(var_4, 1079567241)))))))));
    var_19 = min(var_4, ((-var_3 ? ((var_14 ? -1 : 10564233073313524117)) : (!68719468544))));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_20 = var_6;
        arr_4 [i_0] = (!-7);
    }
    var_21 *= var_9;
    #pragma endscop
}
