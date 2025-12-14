/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_6));
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((1 ? (-32767 - 1) : 536870911))) && ((max(var_7, 4294967286)))));
        var_17 = (max(var_17, ((max((((4294967263 ? (arr_1 [i_0] [4]) : (arr_1 [i_0] [i_0])))), (max(4294967286, 65535)))))));
        var_18 = (max(var_18, (min(((((((65523 << (32750 - 32742)))) ? 1 : (arr_1 [i_0] [i_0])))), var_1))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_19 = var_7;

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            var_20 = ((~(((arr_7 [i_1] [i_1 - 1]) >> 13))));
            arr_8 [i_1] = arr_1 [i_1] [i_1];
        }
    }
    var_21 = var_7;
    var_22 = (min(var_9, var_0));
    #pragma endscop
}
