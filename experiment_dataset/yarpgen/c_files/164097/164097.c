/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [9] [i_0 + 2] = (min(var_11, 0));
        var_16 = ((((min(var_6, (arr_1 [i_0 - 1])))) | (max(-5702011776834033343, 1))));
        arr_4 [i_0] [2] = (!-5702011776834033343);
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_9 [i_1] [i_1 - 1] = (((!(arr_7 [i_1 - 1]))));
        var_17 = (arr_5 [8]);

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_18 = -5702011776834033340;
            var_19 = (((((arr_1 [0]) ? (min(var_8, (arr_8 [i_2] [i_1]))) : var_1)) < (((arr_1 [i_1 - 1]) & (~5702011776834033357)))));
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            var_20 = ((-5702011776834033343 >= (((max(-32763, 1))))));
            arr_16 [i_3] [i_1 - 2] = 1;
            arr_17 [i_1] [i_3] [i_1] = (((((((arr_14 [i_3 - 1] [1] [i_1]) + 2147483647)) >> (((arr_14 [i_3 - 1] [i_3] [i_3]) + 2119449520)))) - (min((arr_12 [i_3 + 1] [i_1 - 1]), (((arr_7 [14]) >> (2047 - 2035)))))));
            arr_18 [i_3] = 5702011776834033342;
            arr_19 [i_1 + 2] [i_1] [i_3] = ((-2053 ? (((arr_14 [i_1 - 2] [i_3 - 1] [i_3 - 1]) / (arr_14 [i_1 - 2] [i_3 - 1] [i_3 - 1]))) : (min((arr_14 [i_1 - 1] [i_3 + 1] [i_3 + 1]), var_12))));
        }
        arr_20 [i_1] [i_1] = (((min(var_14, 242))) ? (((var_5 <= (!2147483647)))) : (((arr_15 [14] [i_1] [i_1 + 1]) & (arr_15 [i_1] [i_1] [i_1 + 1]))));
    }
    var_21 = -var_3;
    #pragma endscop
}
