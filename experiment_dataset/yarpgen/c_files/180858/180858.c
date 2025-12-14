/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((arr_1 [i_2]) ? ((((max(-455684922, -68))) & var_3)) : ((((min(98, 2722375218))) ? ((-1474112917908769460 ? 771593874547550838 : 562949951324160)) : (min((arr_2 [i_0] [i_1]), (arr_3 [21]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 += var_1;
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_4] = (max(((var_2 & (((arr_2 [i_1] [0]) << (var_9 - 57907))))), var_10));
                                arr_17 [i_0] [i_1] [18] [i_4] [i_1] &= (((var_11 ? (min(var_3, 1)) : var_14)));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_2] [i_0] = (arr_1 [2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [16] [i_2] [i_2] [i_5] [i_6] [i_2] = var_12;
                                arr_25 [i_2] [i_2] = (((min(var_0, (var_4 - var_1))) * (((arr_3 [i_2]) - ((var_11 ? var_5 : (arr_19 [i_0] [i_1] [i_2] [i_5])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((!((min(var_12, (!1))))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = (arr_35 [i_8]);
                                arr_37 [i_9] [i_7] [6] [i_10] [i_11] = (min((min((arr_27 [i_8]), var_2)), ((((arr_27 [i_9]) || (arr_27 [i_8]))))));
                                arr_38 [i_7] [i_8] [i_9] [i_7] [i_11] = (((((((((arr_4 [9]) == var_4)) || (((-63 ? var_0 : var_13))))))) - (((arr_32 [i_7] [i_10] [i_10] [i_10] [i_11]) % var_3))));
                                var_18 -= ((15634297393284053401 ? 1526632374 : 9223372036854775807));
                            }
                        }
                    }
                    arr_39 [i_7] [i_7] = (((arr_0 [i_7]) ? ((1547002747 ? -15588 : 14196053247970735237)) : ((46612 ? (arr_22 [i_7]) : var_2))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 17;i_13 += 1)
        {
            {
                arr_44 [i_13] = (!16867700991055952112);
                arr_45 [i_12] [3] [i_13] = var_6;
                var_19 = (min(var_19, ((((min(var_14, 12)) | (((~(arr_40 [i_12 + 2] [i_13])))))))));
            }
        }
    }
    #pragma endscop
}
