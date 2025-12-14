/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (min((min((var_18 | 12767), (min(var_1, var_11)))), (((var_13 >= var_11) ? (12789 || 12789) : 1))));
        arr_3 [i_0] [i_0 + 1] = ((((((((arr_1 [i_0] [i_0]) ? var_13 : var_18))) ? (((min(var_6, (arr_0 [i_0 + 1] [i_0 + 1]))))) : ((var_4 ? 6125943407797278798 : (arr_1 [i_0] [i_0]))))) << ((min((min(85, (arr_1 [i_0] [i_0]))), ((max(var_5, 1))))))));
    }
    var_19 = (min(var_19, ((((((~((var_15 ? var_18 : var_6))))) ? (((((var_11 ? -2043517378 : -1)) != 0))) : var_12)))));
    #pragma endscop
}
