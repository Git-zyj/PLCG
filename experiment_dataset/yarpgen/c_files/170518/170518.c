/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((~((0 ? var_4 : 7))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] = (20 < 4294967288);
                var_13 = (+(((arr_3 [i_0]) ? (((arr_2 [i_1 - 1]) << (2388348220 - 2388348205))) : (~0))));
                arr_6 [8] [i_1] &= (((((min(3489657445, var_9))) ? (max((arr_2 [i_0]), (arr_1 [4]))) : (max(4, (arr_4 [8] [i_1] [i_1]))))) * var_9);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 = (((arr_11 [i_0] [6] [i_2] [i_3]) | (arr_4 [i_0] [i_1 + 2] [i_3])));
                            var_15 = var_3;
                            arr_12 [i_0] [4] [i_1] [6] [i_0] = min(var_4, 15);
                        }
                    }
                }
            }
        }
    }
    var_16 |= min((max((var_11 ^ var_7), var_9)), (max(var_11, var_7)));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_5] = var_10;
                arr_18 [16] [i_5] [i_4] = var_11;
            }
        }
    }
    #pragma endscop
}
