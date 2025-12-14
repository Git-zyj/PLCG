/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((-(((-101 && (0 | 2147483647))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_11 &= (1467986764 ? (((arr_1 [i_0] [16]) ? ((((arr_0 [6]) << (636113995044142675 - 636113995044142663)))) : (max((arr_1 [i_0] [16]), var_1)))) : (arr_0 [4]));
        var_12 = (~-1);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (arr_2 [i_1]);
        var_14 = (arr_2 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_15 |= ((+(min((arr_2 [i_2]), (arr_3 [i_2])))));
        var_16 = var_4;

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_17 = (min(var_17, ((min((arr_6 [i_2]), var_2)))));

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_18 = ((~((-(arr_5 [i_2] [i_2])))));
                var_19 = (min(var_19, var_6));
                var_20 = ((-var_8 | (((arr_8 [i_2]) + var_8))));
                var_21 = (arr_3 [i_2]);
            }
        }
        var_22 = (~((-((min(var_9, (arr_5 [i_2] [i_2])))))));
    }
    #pragma endscop
}
