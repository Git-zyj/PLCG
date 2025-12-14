/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (min(var_11, (((16700572821958452350 ? 31 : 61)))));
        var_12 = ((((max(((var_8 ? var_8 : var_8)), (var_6 || var_3)))) ? ((((max(var_6, var_6))) ? (((var_4 ? var_7 : var_2))) : var_6)) : (((((((var_0 ? var_3 : var_9))) || ((max(var_3, var_0)))))))));
        var_13 = ((~(max(((var_3 ? var_6 : var_8)), ((max(var_9, var_2)))))));
        var_14 = (((1224634832 ? 8 : 0)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1 - 1] = ((var_9 ? var_5 : var_9));
        var_15 = (((((var_3 ? var_7 : var_8))) || (((var_4 ? var_2 : var_4)))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_16 = (((!(((var_5 ? var_0 : var_5))))) || var_9);
        var_17 = ((((((((var_2 ? var_4 : var_8))) ? ((var_5 ? var_5 : var_3)) : ((-2192500502321602440 ? 1746171251751099266 : 1))))) ? (max(var_5, ((var_7 ? var_6 : var_5)))) : (((((var_4 ? var_4 : var_6)))))));
        arr_11 [i_2] = ((((((!var_4) ? (~var_4) : ((max(var_2, var_1)))))) ? (((((var_8 ? var_6 : var_4))) ? ((var_8 ? var_2 : var_6)) : (((max(var_2, var_9)))))) : ((max(((var_6 ? var_9 : var_4)), ((max(var_2, var_9))))))));
        var_18 = ((((((((var_6 ? var_1 : var_2))) ? (((max(var_8, var_8)))) : ((var_6 ? var_5 : var_1))))) ? ((var_0 ? (!var_7) : var_5)) : (((-358552929 ? -27994 : 1)))));
    }
    var_19 ^= (-((((min(var_1, var_7))) ? var_4 : 1)));
    #pragma endscop
}
