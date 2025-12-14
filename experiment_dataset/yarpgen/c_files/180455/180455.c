/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((var_16 ? 0 : (((var_13 / var_5) ? (!var_15) : ((0 ? -11384 : 0))))));
    var_21 = 28957;
    var_22 &= (max((max(var_8, ((28957 ? var_8 : var_2)))), (((~(max(0, 224)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_23 = 0;
        arr_3 [5] = ((((max(-7808343039764465811, 10553145617243634222))) ? (((max(var_3, (arr_0 [i_0] [1]))))) : (max((min(15782897918839808551, (arr_2 [i_0]))), var_8))));
        arr_4 [i_0] = (((((var_2 >= var_13) || (((var_14 ? (arr_1 [i_0] [i_0]) : -2572696128232382091))))) ? ((((~763618133165815023) || (arr_1 [i_0] [i_0])))) : 224));
        var_24 = (((max((max((arr_2 [i_0]), (arr_0 [i_0] [i_0]))), (((arr_2 [12]) && 0)))) ? ((var_11 ? (min(var_6, 3946)) : ((-18367 ? -4791529587765382432 : 195)))) : (((max(var_4, var_19))))));
    }
    var_25 = var_3;
    #pragma endscop
}
