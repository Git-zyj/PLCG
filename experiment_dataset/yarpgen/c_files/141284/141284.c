/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((+(((~var_9) ? var_1 : (var_1 * 15109311543551717604)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((var_1 ? 3337432530157834016 : var_3));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [14] [i_0] [6] [i_3 + 1] = (min(((-(arr_9 [1] [i_3 - 4] [i_3] [i_2 + 1] [i_2 + 1] [i_1]))), (arr_9 [i_3 - 2] [i_3 - 4] [i_2 + 2] [1] [i_2 + 2] [i_0])));
                            arr_11 [i_0] [i_1] [i_0] [i_2 + 1] [i_2 + 1] [i_3] = arr_4 [i_2 - 1];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] = 0;
                                arr_22 [i_0] [17] [i_4] = (max((arr_8 [i_0]), (min(2059210482450547397, (((!(arr_9 [i_4 - 1] [11] [i_4] [1] [i_4] [10]))))))));
                            }
                        }
                    }
                }
                arr_23 [i_0] = max((min(15109311543551717604, (arr_13 [i_0] [i_0] [i_1]))), (arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0]));
                arr_24 [i_0] = arr_7 [i_0] [i_0] [i_1];
            }
        }
    }
    var_11 = (max(((((min(var_0, var_0))))), -15109311543551717584));
    var_12 = (((((var_9 ? ((-99 ? var_9 : var_2)) : ((1 ? 12371 : 1))))) ? var_1 : var_2));
    #pragma endscop
}
