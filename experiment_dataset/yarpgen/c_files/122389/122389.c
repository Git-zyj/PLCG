/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 > ((4561 >> (60981 - 60951)))));
    var_20 = ((((max(var_0, ((-2372332051766999294 ? var_10 : 60947))))) ? (((var_5 ? 4560 : var_18))) : -var_8));
    var_21 *= ((((max((max(var_11, var_15)), ((var_4 ? var_5 : var_12))))) ? (((max(var_2, var_4)))) : (((((var_10 ? var_1 : var_5))) ? ((13873688518254043664 ? 1758614107 : 60924)) : ((var_4 ? var_18 : var_1))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 = (max(var_22, (((~((~(arr_1 [i_0] [i_0]))))))));
        arr_3 [4] = ((((var_0 ? (arr_2 [i_0] [i_0]) : -8942265774864205592))) ? (((((var_0 ? var_13 : var_1))) ? (((arr_1 [i_0] [7]) ? 3871 : (arr_1 [i_0] [9]))) : -66)) : (((arr_0 [i_0]) ? ((var_10 ? (arr_0 [i_0]) : (arr_1 [i_0] [7]))) : 17)));
    }
    #pragma endscop
}
