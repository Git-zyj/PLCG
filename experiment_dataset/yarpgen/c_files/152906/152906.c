/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_10;
                arr_6 [i_0] [i_0] [i_0] = (arr_3 [i_1 - 1] [1] [1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [0] [0] [i_0] [i_4] |= 0;
                                var_14 = var_0;
                                arr_16 [i_4] = var_7;
                                var_15 = var_1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_16 = (max(((((var_7 < (arr_4 [i_5] [i_5]))))), (min((-2082450527 * 4897658807118569675), ((((arr_13 [1]) * (arr_9 [i_6 - 1] [i_5] [9] [i_0]))))))));
                            var_17 = 8467;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
