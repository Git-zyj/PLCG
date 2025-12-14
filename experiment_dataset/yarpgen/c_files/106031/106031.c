/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((((max(105, var_5)))) ? 2793 : var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_0] = ((8126464 ? ((-((var_5 ? 57 : var_4)))) : (!var_1)));
                            arr_11 [i_0] [6] [i_0] [0] = (max((min(-312425755, ((min(914687969, 96))))), (((17792 ? 1360 : 910316086)))));
                            var_20 = (max(var_20, (((-((((max(53412, var_13))) ? -1 : var_13)))))));
                            arr_12 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((!((min(((var_3 ? 8126464 : 365)), 528482304)))));
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_0] = (--8126486);
            }
        }
    }
    var_21 = -367;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    var_22 *= (-((18446744073709551615 ? (min(-3, var_15)) : -2147483647)));
                    var_23 &= 57604370290272022;
                    arr_24 [i_4] [i_5] [i_6 + 1] = ((~((17802 ? ((max(var_10, var_1))) : 1073741824))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 12;i_8 += 1)
        {
            {
                arr_31 [10] [i_8 - 4] [1] = -var_7;
                arr_32 [i_8] [i_7] [i_7] = 8126481;
                var_24 = (~184);
                arr_33 [i_8] [i_8] = ((((((var_2 < 15703) ? (min(17512, var_7)) : var_10))) ? (~1) : (((~-58) ? (((min(99, 62)))) : 12204118551400107506))));
            }
        }
    }
    #pragma endscop
}
