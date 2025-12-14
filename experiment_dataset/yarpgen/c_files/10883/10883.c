/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_7;
                arr_5 [i_0] = (-(((!(arr_0 [0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [i_1] [i_0] = var_4;
                            arr_13 [i_0] [i_0] = var_17;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            {
                var_18 = (((arr_14 [i_4]) ? ((((~(arr_2 [2]))) | (((arr_2 [10]) ? var_6 : (arr_14 [i_5]))))) : var_11));
                /* LoopNest 3 */
                for (int i_6 = 4; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_30 [i_6] [i_6] [i_8] [i_7] [i_8] [i_8] = 0;
                                arr_31 [i_8] [13] [i_4] [i_4] [i_8] = max((var_1 + var_2), (((-7476819696409989047 + 9223372036854775807) << (57 - 56))));
                                var_19 += ((min(199, 4194303)));
                                var_20 = (max((min(var_0, var_12)), (((max(49, 6167136369536988840))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (((((((min(var_6, var_12))) ? -var_13 : var_14))) ? 72237967 : var_12));
    var_22 = ((-1345394167 ? var_16 : 0));
    var_23 *= var_5;
    #pragma endscop
}
