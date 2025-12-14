/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [6] [i_0] = (1 != (((~1) ? 203 : 52)));
                arr_7 [i_0] [i_0] [i_0] = ((-(arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_14 [4] &= ((~(arr_13 [1] [1])));
                            var_11 &= var_7;
                            var_12 = (arr_1 [i_0]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_13 = (arr_22 [15] [1] [1] [1]);
                    arr_24 [i_4] [i_5] = (((min((arr_21 [i_4] [i_5] [i_6]), 15))) >= (arr_21 [i_4] [i_4] [i_4]));
                    arr_25 [1] [i_4] = ((((((max((arr_19 [i_5]), (arr_17 [i_6])))) ? (((arr_21 [i_5] [i_5] [i_5]) + (arr_22 [i_4] [i_4] [i_4] [i_4]))) : 52)) ^ ((-((255 ? var_2 : 1))))));
                }
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
