/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = var_1;
                                arr_14 [i_0] [i_0] [i_0] = ((max((arr_8 [i_0 - 1] [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_4]), (arr_8 [i_0 - 1] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [1]))));
                                var_14 = (min(var_14, 1467334692));
                                var_15 = (((max(146, (min((arr_5 [i_0]), 5992878769807462255)))) == ((((arr_8 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3]) ? var_0 : ((~(arr_6 [i_4] [i_3] [i_2] [1]))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [4] [i_0] = (min(2827632626, (min((min(0, (arr_2 [i_0]))), 1))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_16 = 1;
                            var_17 = (min((arr_22 [i_5] [7]), (((!(arr_22 [i_0] [i_0 - 3]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_18 = 4294967295;
                            var_19 = var_10;
                            var_20 = (min(var_20, (min((min(((((arr_0 [i_0 - 1] [i_1]) ? 9416 : (arr_0 [i_8] [i_1])))), (((arr_25 [i_0] [i_1] [i_0]) ? var_12 : 90)))), ((min(556134385, (arr_0 [i_0 - 2] [i_1 + 1]))))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, var_1));
    #pragma endscop
}
