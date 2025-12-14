/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = (min(61, ((~(((arr_0 [i_0]) ? var_3 : 53))))));
                                var_13 -= (arr_5 [i_3] [i_1]);
                            }
                        }
                    }
                    arr_14 [1] [i_0] [i_0] [1] = arr_6 [i_0] [i_0] [i_0];
                }
            }
        }
    }
    var_14 = ((var_1 ? var_2 : var_8));
    var_15 = -53;
    var_16 *= 1;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                {
                    arr_22 [i_6] = max(((((max((arr_6 [i_5] [1] [i_7]), (arr_4 [i_5] [i_5])))) ? ((min(31, -61))) : (arr_9 [i_5] [i_6] [i_5] [i_7 + 1]))), (arr_5 [i_7 + 1] [i_7]));
                    var_17 = (max(var_17, ((max((arr_9 [i_7] [i_7] [i_7 - 1] [i_7 - 1]), (min((arr_9 [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2]), (arr_9 [i_7 - 1] [i_7 - 2] [i_7] [i_7 + 1]))))))));
                    var_18 = ((!(((53 ? 10 : 12)))));
                }
            }
        }
    }
    #pragma endscop
}
