/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (arr_0 [i_1]);
                arr_6 [i_0] [i_0] [3] = ((min(((-(arr_0 [i_0]))), (arr_3 [i_0] [i_1 + 4] [i_1]))) - 65535);
                arr_7 [i_0] [i_0] [i_0 + 1] = ((-(arr_0 [i_1])));
            }
        }
    }

    for (int i_2 = 4; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_4] &= (max(((max((arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 3]), (arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 3])))), (((arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 3]) ? (arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 3]) : (arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 3])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_20 [i_2 - 1] [i_2 - 1] [i_4] [i_5 - 1] [i_5] = ((~(((((max((arr_17 [i_2 + 1] [i_3] [i_5] [i_5 + 1] [i_2 + 1]), 255))) < (arr_3 [i_2] [i_3] [i_6]))))));
                                var_13 = -7184896423179691647;
                            }
                        }
                    }
                }
            }
        }
        arr_21 [i_2] &= 10117555855560466195;
    }
    #pragma endscop
}
