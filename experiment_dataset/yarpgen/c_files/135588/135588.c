/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 = (min((~-2147483647), (~var_8)));
                    arr_7 [i_1] [i_1] [i_1] = (((((var_5 + (arr_6 [i_0 + 1] [i_2 + 1] [3])))) ? ((((-178617577 || (arr_6 [i_0 + 1] [i_2 + 1] [i_0 + 1]))))) : (((arr_6 [i_0 + 1] [i_2 + 1] [i_2]) ? 4294967280 : (arr_6 [i_0 + 1] [i_2 + 1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 1] [i_0 - 3] [i_0 - 1] = (var_9 % var_3);
                                arr_15 [i_0] [i_1] [i_4] [i_3] [i_4] = (max((!1073737728), (!var_5)));
                                var_12 *= (((arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_2 - 1] [i_4]) & var_5));
                                arr_16 [i_0] [i_1] [i_2] |= (-1 ? (((min(88, (arr_2 [i_2 - 1]))))) : (max((((var_2 ? var_4 : (arr_10 [i_0 + 1] [i_0] [i_2] [i_3] [i_4] [i_3])))), var_2)));
                                arr_17 [i_2] [9] [i_4] = (max(((((((arr_9 [i_0] [i_0] [4] [i_3] [i_4]) ? var_1 : var_9))) ? ((var_1 ? 15773179973243378022 : 30760)) : (arr_11 [i_0] [i_3] [i_2] [i_1] [1]))), (((+(max((arr_11 [i_0 - 3] [i_1] [i_2] [i_3] [i_4]), var_2)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_13 = -9298;
                                var_14 = (((((3985921276 ^ var_3) ? (min((arr_0 [i_5]), var_2)) : ((min(4294967282, (arr_13 [3] [i_0 - 3])))))) + (!2188396297)));
                                var_15 = (max((arr_10 [i_0 + 1] [6] [i_1] [0] [i_5] [i_6 - 2]), var_5));
                            }
                        }
                    }
                    arr_25 [i_0] [i_1] [i_2 - 1] = max((min(((var_4 ? var_10 : var_8)), ((((arr_10 [i_0] [i_1] [i_2 - 1] [i_1] [i_0] [i_2]) ? var_4 : (arr_4 [i_0] [i_0 + 2] [i_1] [i_0 + 2])))))), ((((((arr_10 [i_0 + 1] [i_1] [i_1] [5] [i_2] [i_2]) ^ var_2)) ^ var_2))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_35 [i_8] [i_8] [i_9] [i_8] = ((((min((arr_29 [i_8]), var_2))) ? var_4 : (max((((!(arr_31 [i_8] [i_8])))), var_3))));
                    var_16 = var_3;
                }
            }
        }
    }
    #pragma endscop
}
