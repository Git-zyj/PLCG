/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (max(885, (((min(1991912624, 9028)) & (arr_1 [i_0])))));
        var_14 = (min(var_14, ((max(36758, ((-(arr_1 [i_0]))))))));
        var_15 += (((arr_1 [i_0]) ? (~36767) : ((~(arr_1 [i_0])))));
        var_16 = (~var_5);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_17 *= -810891027079645878;
        arr_6 [i_1] [i_1] = (min(29462, (var_13 || var_13)));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_18 = (max(var_18, (((((max(var_2, (max(1, (arr_14 [10] [i_2] [1])))))) ? 1 : (arr_13 [i_2] [i_2]))))));
                    var_19 = (min(var_19, (((-(((arr_13 [i_3 + 2] [i_2]) - 16383)))))));
                    var_20 ^= ((0 ? ((-(max((arr_13 [i_2] [i_2]), var_5)))) : ((((arr_11 [i_3] [i_3 - 1] [i_2]) / (arr_11 [i_2] [i_3 - 1] [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_21 = (max(var_21, (1 / var_11)));
                                var_22 = (max(var_22, ((1 ? ((((((3646815384 ? 65535 : (arr_21 [i_5] [i_5] [i_5] [i_5])))) ? (((arr_4 [23]) ? (arr_8 [i_4]) : 1)) : (((max(65504, var_11))))))) : (max(294207909393917326, (arr_18 [i_6] [i_3 + 2] [i_4] [i_6])))))));
                                var_23 = (min(var_23, 2810));
                                var_24 -= (arr_21 [i_3] [i_3] [i_3] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
