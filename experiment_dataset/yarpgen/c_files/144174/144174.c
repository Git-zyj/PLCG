/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (((((arr_0 [i_0]) != var_8)) ? var_5 : ((((min(var_17, var_6))) ? 1 : (~32767)))));
        var_21 = ((~((-32767 ? 24108 : -32767))));
        var_22 = ((16141705096814528488 >= (((var_5 ? -48 : 839757935)))));
        var_23 *= ((((((((58978 ? -24668 : (arr_0 [i_0])))) ? 3871400924 : (var_15 % 1)))) ? var_10 : ((((((arr_0 [i_0]) ? var_1 : 2521735803876960418))) ? (var_4 || var_1) : (var_0 * 15665558345199416681)))));
        var_24 = (arr_0 [i_0]);
    }
    var_25 = 48;
    var_26 = ((!(((((1 ? var_16 : var_14))) != 2781185728510134934))));
    var_27 *= ((((((4294967295 ? var_6 : 7718218286704314001)))) ? (((~((0 ? var_3 : var_16))))) : (max((((var_0 ? var_8 : 16012))), (12867746291906773869 * var_15)))));
    #pragma endscop
}
