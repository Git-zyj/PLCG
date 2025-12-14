/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] |= ((1138934571 ? 1475014244 : 9850021309915874028));
                    arr_9 [i_1] = (~1475014258);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_1] [i_4] = 9657;
                                var_20 = max(((var_5 ? 5867581691435437571 : 5867581691435437558)), (arr_17 [i_0] [i_3 - 2] [i_1] [i_1] [i_0]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_14;
    #pragma endscop
}
