/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_4;
    var_16 = ((((max(var_11, ((var_0 ? 0 : var_9))))) ? ((-var_4 ? var_10 : 4845)) : (43209 == 1908693676)));
    var_17 = ((var_4 ? var_0 : ((var_5 ? (!8195877485720952797) : var_1))));
    var_18 = -2147483631;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = ((((var_11 ? (((min(var_11, var_0)))) : 144115188075855871)) | -4838));
        var_19 = (min(2715, 4095));
        var_20 &= var_0;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 = (var_14 ? (max(((var_6 ? -2147483625 : var_14)), var_6)) : ((max(var_6, var_4))));
        arr_8 [i_1] = arr_2 [i_1];
    }
    #pragma endscop
}
