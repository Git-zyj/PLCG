/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max((min(var_5, var_7)), (((2047 ? 10799 : 10784))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = 10773;
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_0] [9] = 214;
                                arr_13 [6] [i_1] [2] [i_3] [i_4] [i_1] [i_0] |= 1;
                                var_13 = (min(var_13, var_2));
                                var_14 = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = (~((-(max(4094532004045446216, var_0)))));
                                arr_20 [1] [i_2] [i_6] = var_9;
                                var_15 = ((!(!54751)));
                                var_16 = 8215119455202967367;
                            }
                        }
                    }
                    arr_21 [i_2] [i_1] [i_2] [i_2] = var_8;
                }
            }
        }
    }
    #pragma endscop
}
