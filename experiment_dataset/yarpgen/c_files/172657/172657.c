/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (max(((((arr_7 [i_1] [i_1] [i_2 + 1] [i_1 + 1]) != (arr_7 [9] [17] [i_2 + 1] [i_1 + 1])))), 381734415320167263));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 -= -26016;
                                var_15 = (((arr_6 [i_1 + 1] [i_2 + 1] [5] [i_1 + 1]) != ((((arr_5 [i_1 + 2] [i_1]) <= var_3)))));
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] = ((var_4 <= ((124 ? (var_13 - var_12) : (!-115539136755833424)))));
                }
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}
