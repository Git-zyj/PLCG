/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~var_14) ? ((min(var_11, var_16))) : (var_1 ^ var_7))) & var_14));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = var_18;
        var_20 ^= (min((min((arr_0 [12]), -30942)), (896 / -30942)));
        var_21 = ((var_15 << ((((min((var_16 <= var_2), var_6))) + 9455))));
        arr_5 [i_0] [i_0] = (min(((-477353621941345507 ? (-32767 - 1) : 30942)), ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0 - 1] [i_0]))))));
        var_22 = var_4;
    }
    var_23 ^= 3908372042;
    #pragma endscop
}
