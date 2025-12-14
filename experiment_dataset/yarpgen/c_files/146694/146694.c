/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((!(~var_9))))) < var_1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 += (((!var_1) + (((((-110 ? var_2 : var_1))) ? ((-(arr_1 [2]))) : ((((arr_0 [i_0]) >= (arr_1 [6]))))))));
        var_14 += (arr_0 [i_0]);
        var_15 += ((~(arr_1 [6])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 = (arr_2 [i_1]);
        var_17 ^= ((158 ? 34358689792 : 86));
    }
    var_18 = ((-50331648 / ((var_3 ? var_3 : (((109 ? 89 : 50331648)))))));
    var_19 = (max(var_19, (((((((max(var_1, var_2))))) > ((var_1 ? ((var_9 ? var_2 : var_4)) : var_3)))))));
    var_20 = 16167;
    #pragma endscop
}
