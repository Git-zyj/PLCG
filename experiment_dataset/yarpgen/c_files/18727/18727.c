/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1] |= ((~((12 ? 240 : 8998828541825426856))));
                    arr_7 [i_2] [i_2] [i_0] = (arr_4 [i_2] [i_1] [i_2] [i_2]);
                    arr_8 [i_2] = (arr_4 [i_2] [i_2] [i_2] [i_2]);
                }
            }
        }
        var_20 = ((-(arr_2 [i_0 + 1])));
        var_21 = 11624356161561883094;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_22 = (min(var_22, (((+((824833096 ? (65523 + 8998828541825426856) : 255)))))));
        arr_11 [i_3] = ((-((((min(0, (arr_1 [i_3])))) ? var_8 : var_11))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_15 [i_4] = ((arr_13 [i_4]) + (var_3 <= 8558));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_5] [i_5] [i_5] = (min(561, (((arr_19 [i_6] [i_6 + 2] [i_6 - 1]) ? 1073676288 : (arr_19 [i_4] [i_6 + 3] [i_6 - 1])))));
                    arr_22 [8] [i_4] [8] = (max((3606685453155240184 <= 1), -1073676289));
                }
            }
        }
    }
    var_23 = (max(var_23, (max(((var_9 ? var_11 : 11919334720946296724)), (-8998828541825426857 && var_17)))));

    for (int i_7 = 4; i_7 < 10;i_7 += 1)
    {
        var_24 = (max(var_24, var_3));
        arr_27 [i_7] [i_7] = (max(63265, 2272));
        var_25 = (min(8998828541825426856, (var_17 + 10638391608513586008)));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                {
                    var_26 *= (max(((127 ^ (arr_1 [i_7 + 1]))), (arr_1 [i_7 + 1])));
                    arr_32 [i_7] [i_7] [i_9] = (max((arr_31 [i_7 - 3] [i_7 + 1] [i_7] [i_9 - 2]), 2272));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_39 [i_7 - 4] [i_8] [i_8] [i_9] [i_7] [i_11] = ((max(var_13, (!0))));
                                var_27 = ((1073676288 < (arr_13 [i_7 - 3])));
                                arr_40 [i_7] [i_8] [i_7] [i_7] [i_9] [i_10] [i_11] = (((((-533870679 ? 4269345026 : 2712651485283197299)) ^ 127)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
