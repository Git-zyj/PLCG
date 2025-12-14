/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 = 9117696963928294727;
                            arr_14 [i_3] [5] [i_3] [i_3] [i_3] = ((((arr_11 [i_2 - 1] [i_2 + 1]) / (arr_11 [i_2 - 1] [i_2]))));
                            arr_15 [i_0] [i_3] = ((((arr_11 [i_0 - 2] [i_0]) ? (arr_11 [i_0 - 1] [i_0 - 1]) : (arr_11 [i_0 - 3] [i_0]))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_12 = (((((min(var_2, (arr_1 [i_4]))))) ? (max((min(1297225740, var_8)), (((var_4 ? var_5 : (arr_1 [i_6])))))) : (((((~(arr_16 [16] [16] [12] [i_4]))) + (arr_20 [i_5 - 1]))))));
                                var_13 ^= 57909;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_5, ((((var_2 ? var_10 : 1)) >> (7626 - 7611)))));
    var_15 = (min(var_15, (((!(((var_0 + (7619 - var_7)))))))));
    #pragma endscop
}
