/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(409536410, var_11);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((((((var_4 & -409536413) | var_0))) ? (var_12 ^ var_7) : ((((~var_4) | (max(var_11, var_8))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 = ((!(((~(min(var_11, 2172265096506689424)))))));
                                var_17 = ((((((~var_12) ? 7078 : (0 * 65535)))) - (((min(var_3, var_4)) * var_2))));
                                arr_13 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3] [i_3] = var_11;
                                var_18 = (((((var_0 | (7078 ^ -1836985653)))) ? ((var_8 | ((var_10 ? var_13 : 1689146297)))) : ((var_12 ? (-1833976950 | var_8) : (var_3 ^ var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_19 = ((((567625756 ? var_13 : var_7))) ? ((var_4 ? 567625756 : var_10)) : (var_8 / var_4));
                arr_18 [i_5] [i_6] [i_5] = (min(((var_1 ? var_10 : var_1)), ((var_11 << (1 - 1)))));
                arr_19 [i_5 - 1] [i_5] [i_5] = ((~((var_3 << (var_12 - 374413158)))));
                var_20 = (max(-var_10, (var_4 ^ var_0)));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_21 &= (max((((0 * var_11) || (var_3 * 1))), ((!((max(var_6, var_13)))))));
                                var_22 = (min(var_22, (((var_3 ? (((58427 ? var_10 : var_2))) : ((2127612610 ? var_4 : var_3)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min((992 - -var_3), (((max(7232641473833303170, var_8)) | var_0))));
    var_24 ^= (max((min((65535 & var_7), var_13)), ((((((min(var_5, var_5)))) <= ((var_4 ? var_9 : 10989005121426622165)))))));
    #pragma endscop
}
