/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = var_6;
    var_12 = ((((((!var_0) ? (min(var_6, -23993)) : (var_6 && 16207274810779990448)))) && var_9));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((((-9223372036854775807 - 1) ? ((var_5 - (arr_1 [i_0]))) : ((1 ? var_5 : (arr_1 [i_0])))))) ? (max((16207274810779990448 * var_3), (((var_4 ? 26955 : 3840))))) : (-var_4 / -1));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_13 = 2147483647;
            var_14 = var_8;
        }

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_15 = (arr_1 [i_0]);
            var_16 = ((((max(-16699, -1621311225146527974))) >> (((max(-var_0, var_9)) - 8188824762224420699))));
        }
    }
    #pragma endscop
}
