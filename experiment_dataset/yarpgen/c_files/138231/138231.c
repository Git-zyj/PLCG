/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((150 - ((((max(1064767228, var_5))) ? ((3230200067 >> (1064767228 - 1064767223))) : (9 % 1064767228)))));
        var_14 = (~1064767212);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = 3230200081;
            var_15 -= (arr_1 [i_1]);
        }
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_16 = 1064767228;
                    var_17 = ((((min((arr_10 [i_4] [i_2] [i_2]), -13))) | (((arr_1 [i_2]) ? ((var_9 ? 0 : -108)) : ((-13 ? (arr_10 [i_2] [i_2] [i_4]) : -63))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_3] [i_3] [i_2] [i_6] = ((4239995192 ? ((((min(54972103, -1155895532))) ? -1501744159 : -54972103)) : ((((13 <= ((13983192723912151691 ? (-127 - 1) : -12156))))))));
                                var_18 = var_4;
                                var_19 *= (min((~4239995193), (max(32766, 9223372036854775807))));
                                arr_21 [i_2] [i_3] [i_2] [1] [1] = ((((((((54972103 ? 1 : -14986))) ? (4239995193 && 4239995193) : ((var_8 ? (arr_13 [2] [i_3]) : (arr_6 [i_2])))))) ? ((min((arr_6 [8]), (~199)))) : ((((~(arr_8 [i_6]))) % 27803))));
                                var_20 *= -29;
                            }
                        }
                    }
                }
            }
        }
        var_21 = var_8;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_22 = ((((-(arr_10 [i_2] [i_2] [i_8])))) ? var_3 : (98 <= 0));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_23 = ((-(((min(54972081, 101))))));
                                var_24 = ((-(arr_19 [i_2])));
                                arr_31 [i_2] [i_8] [i_9] = (min(-71, 202));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_25 = ((7 >> (((arr_3 [i_11]) - 3384810488))));
        var_26 = (arr_0 [i_11]);
    }
    var_27 = (((((((min(54972103, var_1))) ? ((min(var_7, var_4))) : 1433082348))) ? 93 : var_12));
    #pragma endscop
}
