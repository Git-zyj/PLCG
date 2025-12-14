/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = (max(1, (min(28514, 20316))));
        var_11 = (min(((((max((arr_0 [i_0]), -314118961))) ? (((var_1 ? var_9 : var_5))) : (((arr_0 [i_0]) ? 112 : var_2)))), (((~((314118960 ? 32256 : -55)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 = (min((((!(!128050149369299727)))), ((-(arr_2 [i_1] [i_1])))));
        arr_5 [i_1] = ((((max((!72), (max((arr_1 [i_1]), var_6))))) ? ((max((!128050149369299736), (!314118943)))) : ((((((arr_3 [i_1] [i_1]) ? var_1 : var_5))) ? (!-31419) : (!var_5)))));
        var_13 = ((~(max((min(-4871, (arr_1 [i_1]))), ((max(var_9, (arr_3 [i_1] [1]))))))));
        var_14 = ((((min((((arr_3 [i_1] [5]) ? 152 : var_8)), (!128050149369299731)))) ? (((~(arr_2 [i_1] [i_1])))) : ((37 ? 16946665929039315246 : 1538281078))));
        var_15 = ((((min((min(var_9, var_8)), ((min((arr_2 [i_1] [5]), (arr_3 [i_1] [i_1]))))))) ? (min((max(var_6, (arr_1 [i_1]))), (!var_4))) : ((max((((arr_4 [5] [i_1]) ? 2147483647 : var_2)), ((((arr_4 [0] [i_1]) ? (arr_2 [i_1] [i_1]) : 15))))))));
    }
    var_16 = (max(((((min(1735374555, -110))) ? var_5 : (max(var_0, var_6)))), (((var_6 ? var_3 : 1)))));
    var_17 = ((((((14185 ? var_8 : -314118933)))) ? ((((((var_0 ? var_9 : var_7))) ? ((var_9 ? var_9 : var_2)) : 110))) : (min((min(var_7, var_3)), (((var_8 ? -314118943 : -4768)))))));
    #pragma endscop
}
