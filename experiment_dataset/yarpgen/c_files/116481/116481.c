/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max((((((max(var_1, 18891))) * var_4))), var_8);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0] [i_0]) ? 6385007918253564563 : (((((max((arr_1 [i_0]), 4583))) ? (((arr_1 [i_0]) - var_0)) : var_14)))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = arr_2 [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = var_6;
                                arr_16 [i_0] [i_1 - 3] [i_0] [i_1 - 3] [i_3] [i_3] [i_0] = (arr_1 [i_0]);
                                var_20 = var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = ((((((~(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) % (max(7284433016689863297, 18891)))));
                                arr_23 [16] [i_0] [4] [i_5] [i_6] = (((((((811627524 ? (arr_13 [i_0] [i_5] [i_0] [i_0] [i_0]) : (arr_14 [i_6] [i_6] [i_0] [i_6] [i_0])))) ? (((arr_19 [15] [i_5] [i_0] [i_0] [i_0] [i_0]) ? var_7 : var_15)) : var_5)) | (((var_13 ? (arr_19 [1] [i_1 - 3] [i_1 - 3] [i_0] [i_1 - 3] [i_1 - 3]) : -var_4)))));
                            }
                        }
                    }
                }
            }
        }
        arr_24 [16] &= var_1;
        arr_25 [i_0] [i_0] = max(-4597, (arr_1 [i_0]));
    }
    #pragma endscop
}
