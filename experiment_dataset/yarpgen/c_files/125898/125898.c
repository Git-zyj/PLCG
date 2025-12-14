/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min((var_7 && var_4), var_0))) ? 60 : ((((var_3 ? 17272043985459651024 : var_9)) % (max(13864054431516770644, 45)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_1;
        var_11 = ((((min((~var_2), (((var_9 == (arr_0 [i_0]))))))) ? var_4 : (((-var_1 ? var_5 : var_0)))));
        var_12 = ((((((min(var_4, 4294967281))) ? ((var_5 ? var_2 : var_9)) : (arr_0 [i_0]))) != ((((((-2147483647 - 1) <= 1)) ? var_0 : (((arr_0 [8]) ? 60 : var_6)))))));
        var_13 = (((max(7166425165579386655, 1174700088249900591)) >= (((~(arr_0 [i_0]))))));
        var_14 = (max(var_14, (-2147483647 - 1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = (((((var_2 ? 89 : var_6))) * 1174700088249900591));
        arr_7 [i_1] = (((arr_3 [i_1]) ? var_9 : var_9));
        arr_8 [i_1] = -var_3;
    }
    #pragma endscop
}
