/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!91);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (i_0 % 2 == 0) ? (((~((((-83 ? var_10 : (arr_3 [i_0]))) >> ((((var_2 + (arr_3 [i_0]))) + 1203552820))))))) : (((~((((-83 ? var_10 : (arr_3 [i_0]))) >> ((((((var_2 + (arr_3 [i_0]))) + 1203552820)) + 410583073)))))));
        var_17 = var_10;
        var_18 = (-92 ? 9 : -101224880);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_19 = -var_11;
            arr_9 [i_0] = (-5728 | 92);
        }
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_20 = max((!var_4), ((max(var_8, -17))));
        arr_12 [i_2] = (((((((arr_0 [i_2] [i_2]) > var_12))) | (arr_7 [14] [14]))));
    }
    #pragma endscop
}
