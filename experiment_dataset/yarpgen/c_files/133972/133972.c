/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_10 = ((10 > ((4146384050 / (min(-5250428356760914718, (arr_3 [i_0] [i_1])))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_11 = ((!((((((min(-15, (arr_12 [i_2]))) + 9223372036854775807)) >> (var_9 - 51))))));
                        var_12 = ((((min(148583245, (-32767 - 1)))) ? (arr_5 [i_0] [5] [i_3]) : (((-((14 ? var_6 : (arr_12 [i_2]))))))));
                        var_13 = (max(var_13, (-127 - 1)));
                        var_14 -= var_8;
                    }
                }
            }
        }
    }
    var_15 = (((!2187212978198560590) ? (((var_6 ? var_5 : (8 - 9)))) : var_1));
    var_16 = (max(((((var_2 != var_3) ? (max(3690434016, var_0)) : (-30595 > var_7)))), (~-var_4)));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = ((!((!((max(148583245, 17881082517033851572)))))));
        arr_17 [i_4] [14] = (max(((max((arr_14 [i_4]), (arr_14 [i_4])))), (((arr_14 [i_4]) ? (arr_14 [i_4]) : (arr_14 [i_4])))));

        for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_17 = (min(793850293, -15));
            var_18 = (var_5 | var_0);
        }
        for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_19 = (max(var_19, (arr_18 [14] [6])));
            arr_22 [10] [i_4] [4] = 1;
            var_20 &= (arr_14 [4]);
        }
        var_21 -= ((((((max(-15, (arr_18 [12] [i_4])))) ? ((((arr_20 [i_4] [i_4] [10]) ^ (arr_19 [16])))) : (0 + var_4))) != (arr_13 [i_4])));
    }
    #pragma endscop
}
