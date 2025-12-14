/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (var_8 ? ((~((var_3 ? var_14 : -1154113525)))) : var_13);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_21 = (min(var_21, 200541922));
        var_22 = ((((~((200541924 ? 200541912 : 2771450748))))) ? (min((((1151069964 ? var_7 : 1151069964))), (min(var_16, 797900409)))) : (arr_0 [i_0 + 2]));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_23 &= (((var_9 % -2419991120598312135) ? 2419991120598312134 : ((((((arr_1 [12]) <= (arr_3 [13]))) ? (arr_1 [i_1]) : (~32))))));
        var_24 *= 1;
        var_25 = (min(((-(arr_4 [i_1 - 1]))), (arr_3 [12])));
        var_26 = (((((arr_0 [i_1 - 2]) ? 0 : var_18)) - (((-(arr_0 [i_1 - 3]))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_27 = (arr_0 [i_2]);
        arr_8 [11] [i_2] = (min(-7080929758353745938, ((max((32 > 4094425385), (arr_4 [i_2]))))));
        arr_9 [i_2] |= 4094425354;
    }
    #pragma endscop
}
