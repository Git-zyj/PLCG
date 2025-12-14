/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((((var_6 ? 7791606036742669415 : var_16) + -105))));
    var_21 = (var_11 ? 55550 : 10655138036966882201);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_22 = (max((((-80 ? 3327688017227923367 : 80))), var_7));
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) - (((arr_0 [i_0] [i_0]) ? (max((arr_0 [i_0] [i_0]), 80)) : ((var_3 ? 9223372036854775807 : var_0))))));
        var_23 ^= (max(((min(var_6, var_17))), (max(7211196170669667219, 128))));
        var_24 = (min(var_24, var_7));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_25 = (max(var_25, (((((var_11 ? var_13 : (arr_5 [i_0 - 1] [i_0] [i_1]))) <= ((min(var_6, 5140396343173148631))))))));
            arr_6 [i_0] [i_0] = (max(120, (arr_3 [i_0] [i_1] [i_1])));
            var_26 -= 5140396343173148631;
            var_27 = ((719270643 ? (min(0, (arr_5 [i_0 - 1] [i_0] [i_0]))) : (arr_5 [i_1] [i_0] [i_0])));
        }
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_0] = var_6;
            arr_10 [i_0] = (((arr_8 [i_0] [i_0] [i_0]) != 113));
        }
    }
    #pragma endscop
}
