/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = (min((min((arr_2 [i_0]), var_4)), 896));
        var_13 = (min(var_13, (((((var_10 << ((((min((arr_0 [i_0]), 896))) + 82)))) * ((((!(arr_2 [i_0]))))))))));
    }
    var_14 = (max(-var_3, var_9));
    var_15 = min(896, -85);
    var_16 = (((((((33068 ? 84 : 1)) + 0))) ? var_9 : (max(55624, (min(var_11, var_2))))));
    var_17 = (((min((max(84, 80), (min(-85, var_1)))))));
    #pragma endscop
}
