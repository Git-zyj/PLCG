/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = ((!(2147483643 ^ var_7)));
        arr_2 [i_0] = (min(var_9, (min(-875650504, var_1))));
        arr_3 [i_0] = (((max(((max(1, 1))), 875650512)) >> ((((116 ? (arr_1 [i_0] [i_0]) : 726566408992874328)) - 59))));
        var_14 = ((+((7654 ? (arr_0 [i_0]) : -875650490))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = 1;
        arr_7 [i_1] [i_1] = (((((((15 ? -14 : 72057594004373504))) ? 4122889988 : (max(var_4, var_1)))) + (((max((arr_5 [i_1]), (arr_5 [i_1])))))));
        arr_8 [i_1] = (max((min(1, ((min(-12, var_7))))), (((max(1, var_12))))));
        arr_9 [6] |= ((((var_12 < 18446744073709551596) == (((arr_0 [i_1]) ? 1 : 18446744073709551596)))));
    }
    var_15 ^= ((((min(1797316785, 1)) + (~1))));
    var_16 = (((max(((max(var_6, var_11))), (18446744073709551578 - -115))) & ((((var_9 >= ((0 ? 1 : var_9))))))));
    var_17 = (min(185, (max(4122889992, var_2))));
    var_18 = 875650504;
    #pragma endscop
}
