/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = ((((max((((var_0 ? (arr_1 [i_0]) : var_6))), ((var_2 ? (arr_2 [i_0]) : var_5))))) ? ((51960 ? ((var_0 ? 13570 : var_1)) : ((151 ? 51974 : 251)))) : 7));
        var_11 = (((((var_2 ? ((var_7 ? (arr_0 [0] [0]) : (arr_1 [i_0]))) : var_6))) ? 13586 : (((-10731 ? 3066415127442417316 : (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = var_4;
                    var_13 = max(16383, 43);
                    var_14 ^= ((((((!var_3) / ((-15448 ? var_7 : -31))))) ? (~-11776) : (((~var_4) ? 4294901760 : var_0))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_15 = (((((3968 * var_8) / (24 | 248))) | var_4));
        var_16 = (max(((4080 ? -4081 : 251)), (15380328946267134300 && 4077)));
        var_17 = ((!(((0 ? (arr_10 [i_3] [i_3]) : 1)))));
        var_18 -= var_1;
        var_19 = ((~(1 == 72057592964186112)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_20 = (var_5 ? var_4 : 8806177263286136584);

        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            var_21 = (min(var_21, ((((((-1735363338 ? -4091 : 9640566810423415032))) ? (19158 / -2814190538022281022) : ((8806177263286136598 ? 163 : 8806177263286136597)))))));
            var_22 ^= ((-((var_4 ? var_9 : 248))));
        }
        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            var_23 = (min(var_23, 144115188075855744));
            var_24 = ((1 ? 163 : -31946));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_25 = 11776;
        var_26 &= (((960 / 126) ^ (~var_4)));
    }
    var_27 = 36481;
    var_28 = var_2;
    #pragma endscop
}
