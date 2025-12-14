/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 ^= (61617 - (arr_0 [i_0]));
                var_13 += (max((max((((~(arr_1 [7])))), (arr_5 [i_0] [i_0] [i_0]))), (((1728575660 & (arr_1 [i_0]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_3] = arr_10 [i_2];
                                var_14 = ((~(((arr_15 [i_3]) ? (arr_15 [i_3]) : (arr_15 [i_3])))));
                            }
                        }
                    }
                    var_15 *= (arr_12 [i_4 + 3] [i_4] [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
