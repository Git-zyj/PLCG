/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_7, (1814718457 / 1)));
    var_13 = (min(var_6, var_1));
    var_14 ^= min(((min(var_1, (min(var_10, var_7))))), (((((var_1 ? var_3 : -1278597994))) ? var_2 : var_6)));
    var_15 = ((((var_0 ? var_0 : (var_8 && var_9)))) && ((min((min(1, var_3)), ((var_5 ? var_1 : var_6))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 &= (arr_1 [i_0] [i_0]);
        var_17 = (max(var_17, 1));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_18 = var_5;
            arr_6 [i_1] = 1;
            var_19 = -1494925915;
            arr_7 [i_0] = (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]);
            var_20 = (max(var_20, ((((arr_1 [i_1 - 1] [i_1 - 1]) < var_8)))));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_0] = (arr_1 [i_0] [i_2 + 4]);
            var_21 = (min(var_21, 470416872));
            var_22 = (min(var_22, var_2));
        }
    }
    #pragma endscop
}
