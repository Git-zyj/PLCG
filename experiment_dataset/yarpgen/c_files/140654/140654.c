/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = ((((min(6, 65535))) ? 18446744073709551606 : ((-1 ? 0 : 7))));
            var_20 += var_19;
        }
        var_21 = (max(var_21, ((min(-20, -28)))));
    }
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        var_22 ^= (((min((var_12 - var_14), (arr_3 [i_2 - 4] [i_2]))) % var_19));
        var_23 &= var_14;
        var_24 += var_1;
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_25 = (min(var_25, ((max((arr_9 [i_3] [i_3]), 1)))));
        var_26 = (1 ? (arr_8 [i_3] [i_3]) : (((((var_4 ? (arr_8 [i_3] [i_3]) : var_5))) ? (((var_4 ? var_16 : (arr_8 [i_3] [i_3])))) : ((var_17 ? var_7 : var_11)))));
        arr_10 [i_3] = ((((((((var_11 ? (arr_9 [i_3] [i_3]) : (arr_7 [i_3])))) ? ((var_1 ? var_8 : var_15)) : ((19 ? (arr_9 [i_3] [1]) : var_8))))) ? ((max((arr_7 [i_3]), var_6))) : (var_6 - var_14)));
        arr_11 [i_3] = (arr_7 [i_3]);
    }
    var_27 = (-1 | -3);
    var_28 = (min(var_19, var_14));
    #pragma endscop
}
