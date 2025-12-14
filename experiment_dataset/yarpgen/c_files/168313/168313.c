/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((max(9007199254740991, (arr_3 [i_0] [i_0]))) <= var_1)))));
                            arr_9 [i_1] [i_1] [10] [i_1] [i_1] = var_13;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_17 = ((((max((arr_14 [0] [0] [0] [0]), (arr_14 [13] [i_1] [2] [i_1])))) ? ((((~1480748460) ? 1654916199 : (arr_14 [i_0] [i_1] [i_4] [7])))) : 3050005936473815091));
                        arr_17 [8] [i_4] [8] [i_0] = (arr_2 [i_0]);
                    }
                    arr_18 [i_4] [i_4] [i_1] [i_0] = (max((max(((8272691744196722092 ? 317795847725036786 : 1201559351)), (max(12531769098405154954, -388842036487493166)))), ((-(((arr_5 [i_4] [i_1] [i_1]) & 3093407945))))));
                    var_18 = (max(var_18, ((max(10, (-1683852559 || 8387584))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_19 = (!-8272691744196722097);
                                var_20 = (arr_15 [6] [6]);
                                var_21 = ((-(arr_23 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7])));
                                var_22 = (min(var_22, (-277456348 >= var_11)));
                            }
                        }
                    }
                    arr_29 [i_0] [i_6] = (((arr_1 [i_6]) % (arr_28 [i_0] [i_1] [i_6] [i_6] [i_6])));
                    var_23 = (max(var_23, var_1));
                }
            }
        }
    }
    #pragma endscop
}
