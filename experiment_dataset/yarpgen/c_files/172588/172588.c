/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((((~(arr_8 [7] [i_2 + 2] [i_2 + 2]))) / ((((arr_8 [i_0] [i_2 + 1] [i_3]) && (arr_8 [11] [i_2 + 1] [i_2 + 1])))))))));
                            var_21 = max(((((arr_7 [i_1 + 4] [i_1 + 2] [i_2 + 1] [i_2 + 1] [i_1 + 2] [i_1 + 4]) ? var_1 : var_3))), (min((arr_6 [i_0] [i_0] [i_1] [i_2] [i_2 - 1] [i_3]), (413079564 / var_15))));
                            arr_9 [18] [i_3] [i_2] [i_3] [i_0] [i_3] |= var_16;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_22 = (max(var_22, (((12455817017554459407 ? -28936 : 28936)))));
                            var_23 = (~var_5);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_24 = ((max((arr_23 [i_6]), (arr_22 [i_7]))));
                                var_25 = var_8;
                                var_26 = (((((max(742586637633089807, var_16)) | var_7)) & var_13));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_27 = ((((max((arr_23 [i_6]), 19))) || ((!(arr_18 [i_8])))));
                                var_28 = (((2147483647 >= (arr_21 [i_7 - 1] [i_11 + 1]))));
                                var_29 += ((((min(((-37480752 || (arr_28 [i_6] [i_6] [i_6] [i_11]))), (!-362193585)))) ^ (arr_20 [i_6] [i_11] [i_8] [i_11])));
                                arr_32 [10] [i_6] [i_11] [i_8] [i_6] [i_6] [i_6] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
