/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_1] [i_1] [i_2] [i_2 - 1] [i_3] = ((~((-(arr_3 [1] [i_3 - 1] [i_2 - 1])))));
                            arr_12 [i_0] [i_2] [i_2] = ((1 ? var_0 : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3])));
                        }
                    }
                }
                var_10 = (((1 + var_7) ? var_6 : ((-(arr_9 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_5] [i_5] = (arr_14 [i_5]);
                arr_19 [i_4] [i_5] [i_4] = max(-var_8, (arr_6 [i_4] [1] [i_4] [i_5]));
                var_11 -= (max((((arr_4 [19] [i_5]) - (arr_10 [13] [i_5] [i_4] [19]))), ((min((arr_10 [i_5] [i_5] [i_5] [i_4]), (arr_10 [i_4] [i_5] [i_5] [i_4]))))));
                arr_20 [i_4] = (max((((1 ? 1 : 4092))), 786432));
                var_12 = ((-(((arr_2 [i_4]) - (arr_2 [i_4])))));
            }
        }
    }
    var_13 -= var_1;
    #pragma endscop
}
