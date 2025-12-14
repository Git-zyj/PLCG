/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((var_5 ? ((-23865 ? 0 : 1062118655)) : (~32760)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [5] [i_1] |= (arr_1 [5] [5]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4] = var_9;
                                arr_18 [i_0] [i_1] [7] [9] [i_4] = (max(((((arr_13 [i_0] [i_0] [i_0 - 3] [1] [i_0 + 1] [0]) || -23865))), var_2));
                                arr_19 [i_0] [i_0] [i_2] [i_3] [i_4 - 1] = 23865;
                                arr_20 [2] [i_1] [3] [i_2 - 2] [i_2 - 2] [i_4] [i_4 + 1] = ((21536 ? 1 : (((min(192, -23872))))));
                                arr_21 [i_3] [i_1] [i_3] [i_3] [i_1] = ((((min((arr_2 [i_0 - 2]), (arr_2 [i_0])))) > (((arr_2 [i_2 + 1]) & (arr_2 [i_0 + 1])))));
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_1 - 1] = ((18446744073709551605 ? ((((arr_13 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [3]) && (arr_5 [i_0 - 2] [i_1] [i_1 + 1])))) : ((min((min((arr_12 [i_0 - 3] [i_0 - 3] [i_0] [1] [i_1 - 1]), (arr_2 [i_0 + 1]))), 0)))));
            }
        }
    }
    #pragma endscop
}
