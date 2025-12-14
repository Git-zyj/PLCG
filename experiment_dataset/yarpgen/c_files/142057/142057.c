/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (min(0, 35519));
        arr_5 [i_0] = ((((min((arr_1 [i_0]), (arr_3 [4] [i_0])))) ? 4294967295 : -1884761660));
    }
    var_14 |= (!var_3);
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_16 [i_1] [i_1] [i_2] [i_4] = (((11150067524143599488 ? (arr_15 [i_3 - 1] [i_3] [i_2 + 1] [i_1 + 1]) : (arr_15 [i_3 - 3] [i_3 - 4] [i_2 + 1] [i_1 - 2]))));
                            arr_17 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] = (arr_9 [i_1 + 1] [i_1 - 2] [i_1 + 1]);
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_21 [i_1] [i_2 - 2] [i_5] = (((-2147483647 - 1) ? 4503599627370495 : 18442240474082181116));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_27 [i_7] [6] = (0 - 2981699564553179533);
                                arr_28 [i_1] [i_2 + 1] [i_1] |= ((1 ^ ((max(79, 1)))));
                            }
                        }
                    }
                }
                arr_29 [i_1] [i_2 - 1] [i_2] = ((0 ? 1 : var_13));
            }
        }
    }
    #pragma endscop
}
