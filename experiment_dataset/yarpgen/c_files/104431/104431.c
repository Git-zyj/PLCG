/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((((2174397917 ? 0 : 12)))), (2025873086 + 8)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] [i_1] [i_3] [i_1] = 1;
                                var_19 = (arr_8 [i_0 - 2] [i_1] [i_0 - 2]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_17 [4] [i_0] [i_1 + 1] [i_0] |= (arr_4 [22]);
                    var_20 = (min(0, (15462 * 1)));
                }
                var_21 = ((1049449976 ? 1 : (min(0, 1))));
            }
        }
    }
    #pragma endscop
}
