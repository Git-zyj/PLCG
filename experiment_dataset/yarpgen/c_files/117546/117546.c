/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((5152 ? var_10 : (var_6 > 1964313306))))));
    var_21 = (max((((((var_5 ? var_8 : 61649))) ? var_11 : (!var_10))), 2165));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_22 = var_2;
        var_23 = ((max(var_12, (arr_0 [i_0] [i_0]))));
        var_24 = (max(var_24, (((((-4136717988008833689 >= (~20)))) >= (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_25 = (max(var_25, var_8));
        var_26 = (min(var_4, (max(((max((arr_0 [4] [i_1]), (arr_5 [i_1])))), (min(1412583307198825120, var_15))))));
        arr_6 [i_1] [i_1] = (arr_5 [i_1]);
        var_27 += ((1412583307198825120 ? 169 : (min((!var_15), (~2166)))));
    }
    var_28 = ((~((-(max(var_12, 398862053))))));
    #pragma endscop
}
