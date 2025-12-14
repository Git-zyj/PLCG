/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(!9223372036854775807)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 |= (arr_0 [2] [2]);
        arr_2 [i_0] = 9223372036854775801;
        arr_3 [i_0] = 101;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = max(var_4, (((var_9 | (!9223372036854775805)))));
        arr_9 [10] &= (((((~(((arr_6 [1]) ? 55 : 82))))) ? var_2 : (arr_7 [i_1])));
        var_14 ^= max((!var_9), (~-9223372036854775807));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_12 [i_2] = (-var_11 / (min((((arr_11 [i_2] [i_2]) ? (arr_10 [i_2]) : var_9)), (arr_10 [i_2]))));
        var_15 = (max(var_15, -var_6));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        arr_17 [i_3] = (-9223372036854775791 || 9879182595506886534);

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_16 = ((((max(var_11, (arr_15 [i_3 + 1])))) - 15191256724658164412));
            arr_20 [i_4] [i_4] [i_4] = (max(-9223372036854775798, 15555526743894066300));
            var_17 ^= 364991385;
        }
        var_18 = (!(((min(2147483647, (arr_13 [6] [i_3]))))));
        arr_21 [6] = var_9;
        arr_22 [i_3 - 1] [i_3] = 103636952;
    }
    #pragma endscop
}
