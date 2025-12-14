/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_14 -= (((((var_8 + (arr_0 [i_0 - 1])))) ? (((arr_0 [i_0 - 2]) ? (arr_0 [i_0 + 1]) : 210)) : ((var_4 << (((arr_0 [i_0 - 2]) - 253))))));
        var_15 = (max(var_15, (max(108, 116))));
        var_16 = ((((((63211 > -15) && var_5))) - ((~((~(arr_1 [i_0 - 1] [i_0 - 1])))))));
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_2 [i_1] [i_1]);
        var_17 = ((min(var_5, ((-(arr_4 [i_1]))))));
    }
    #pragma endscop
}
