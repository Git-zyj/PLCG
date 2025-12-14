/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] = (((max(((max(var_9, var_3))), -5878935045007381957)) | (3917 <= 4184173976)));
                                var_18 = (((--1346623430) < (((-1346623456 & var_1) ? 9771395674593802733 : (var_2 ^ var_10)))));
                                arr_14 [i_0] [i_1] [0] [1] [i_1] [i_2] [i_2] = var_8;
                                var_19 -= 4294967289;
                            }
                        }
                    }
                    arr_15 [i_0] [i_2] = (arr_7 [i_2] [i_0] [i_1] [i_0] [1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] = var_12;
                                arr_25 [i_6] [i_5] [i_5] [i_2] [i_0] [i_0] = (((var_15 > var_1) ? (max((max(-1346623430, 9771395674593802736)), ((2303581715675218095 - (arr_21 [i_5]))))) : var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 -= 99;
    var_21 = var_9;
    #pragma endscop
}
