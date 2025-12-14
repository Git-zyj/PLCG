/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((max(49152, -463199702)))) ? ((~((var_13 ? -463199699 : var_9)))) : var_8));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [12] [i_0] = (max(((!(((var_2 ? -463199702 : 5315945672898914413))))), ((!((min(var_1, (arr_0 [i_0] [i_0]))))))));
        arr_3 [10] = (arr_0 [i_0] [3]);
    }
    var_19 = (max(((((463199712 ? -1438849606 : var_17)) <= (!var_3))), (((~var_13) != (var_5 & var_2)))));
    #pragma endscop
}
