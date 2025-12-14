/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (!511097933);
        var_16 = ((((4095 ? ((4294963201 << (11323617185565786778 - 11323617185565786764))) : var_7)) | (~-1451864473)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = ((((((arr_3 [i_1]) - 4294963212))) ? ((var_10 ? (var_13 & 934981958311299186) : 2544749799606022633)) : (~-255)));
        arr_4 [i_1] = ((((2941471298 ? (arr_2 [i_1]) : var_0))) == 15901994274103528982);
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_18 = ((((((((0 << (36493 - 36491)))) & ((31 ? 15901994274103529001 : 1))))) ? ((((arr_5 [i_2] [i_2]) & -2010930712732231724))) : ((2783285625 ? 15225227542751501174 : 12))));
        var_19 = (((((((15901994274103528983 ? 36514 : -1950849566721707698)) & var_1))) ? ((3174023410596112895 ? (arr_3 [i_2]) : (arr_3 [i_2]))) : (var_9 > var_14)));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_20 = (max(var_20, var_2));
        arr_13 [5] = ((-((((((arr_11 [i_3 + 1]) ? var_3 : var_0)) == (arr_11 [i_3]))))));
        arr_14 [7] [i_3] = (((arr_10 [i_3] [i_3]) ? (((var_14 ? (arr_10 [i_3 - 1] [i_3 + 1]) : var_9))) : var_12));
    }
    var_21 = (max(var_21, (((((((var_6 || (var_0 * 36477))))) != var_13)))));
    var_22 = var_8;
    #pragma endscop
}
