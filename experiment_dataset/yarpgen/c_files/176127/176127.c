/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((var_13 ? var_4 : var_14))));
    var_17 = var_0;
    var_18 = (min(((((107858352 < var_9) | 1399763824))), var_8));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] &= 1464832292;
        arr_5 [i_0] [i_0] = (+(((arr_2 [i_0]) ? 3319427046 : (arr_1 [i_0] [i_0]))));
        var_19 = var_13;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_12 [i_1] = (((((arr_8 [i_2]) + (arr_11 [i_1]))) < 975540248));
            arr_13 [i_1] [i_1] = ((!((min((arr_8 [i_2]), (arr_7 [i_2] [i_1]))))));
            arr_14 [18] = (((arr_10 [i_1] [i_1]) ? (min((((arr_11 [i_1]) ^ var_10)), ((104 ? 3319427049 : (arr_8 [i_1]))))) : (arr_8 [i_1])));
            var_20 = (min(var_20, var_2));
        }
        arr_15 [i_1] = ((var_5 ? (min((arr_10 [i_1] [13]), var_6)) : (arr_11 [i_1])));
        arr_16 [i_1] [i_1] = (arr_8 [i_1]);
    }
    #pragma endscop
}
