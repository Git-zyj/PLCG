/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min((min(var_6, var_6)), var_3)), var_16));
    var_18 = (min(var_6, var_12));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 = (((arr_2 [1]) ? var_10 : (arr_2 [i_0])));
        var_20 -= var_6;
        arr_3 [i_0] = ((((min((min(var_3, (arr_1 [i_0] [10]))), 133))) ? -4274849258947798896 : (arr_1 [i_0] [i_0])));
        var_21 = ((~(arr_1 [i_0] [1])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((-(((!(arr_2 [i_1])))))))));
        var_23 += var_15;
        arr_7 [i_1] = 72057594037927936;
        arr_8 [i_1] [i_1] = (((var_15 && var_7) ? ((~((var_15 ? var_0 : 1)))) : ((((((~(arr_2 [i_1]))) != var_1))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_24 -= ((((((min(14532, var_16))))) * (((arr_1 [i_2] [i_2]) / (arr_5 [i_2])))));
        arr_11 [i_2] = ((var_11 ? -var_13 : 1954399949));
    }
    #pragma endscop
}
