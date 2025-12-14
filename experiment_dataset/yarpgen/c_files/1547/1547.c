/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((4611615649683210240 ? (max(4611615649683210240, 9223372036854775807)) : (arr_0 [i_0])))) ? ((((var_5 ? var_9 : var_4)) & (((var_4 ? (arr_2 [i_0]) : var_11))))) : var_5));
        var_12 = (max(var_12, ((((min((arr_1 [i_0] [i_0]), 0)) != (((((var_6 ? (arr_1 [i_0] [i_0]) : 0))))))))));
        arr_5 [i_0] = (93 & var_9);
        var_13 = -5730;
    }
    var_14 = (-32767 - 1);
    var_15 = -var_8;
    var_16 = (min(((((((min(var_6, var_11)))) % ((var_4 ? 127 : 4611615649683210240))))), (min(4998162472998266361, (((1 ? var_1 : var_2)))))));
    var_17 = (((max((min(1, 3722125744518155280)), (7386319469345292870 + 13448581600711285254))) % ((((((127 ? 248 : var_5))) ? (min(var_1, var_1)) : var_6)))));
    #pragma endscop
}
