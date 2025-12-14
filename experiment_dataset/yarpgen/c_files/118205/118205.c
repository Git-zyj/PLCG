/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 *= (((arr_2 [i_0] [i_1] [i_1 + 1]) > (arr_6 [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (arr_5 [4] [i_3 - 2] [i_1 + 1] [i_0])));
                                arr_11 [i_0] [i_0] [i_3 - 1] [13] = (((((~((~(arr_6 [i_0] [i_1 + 1] [i_2])))))) * (arr_8 [i_3 + 2] [i_1 + 1] [i_1 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_20 += (((((arr_17 [i_9] [i_6 + 1] [i_9 - 2] [i_9]) ? 9283177118911159853 : (arr_17 [i_7] [i_6 + 1] [i_9 + 2] [i_9 + 2])))) ? (min((arr_17 [i_9] [i_6 + 1] [i_9 + 2] [i_9 + 2]), var_14)) : ((((arr_17 [i_8] [i_6 + 1] [i_9 + 1] [i_9 - 2]) ? var_11 : (arr_17 [i_7] [i_6 + 1] [i_9 - 1] [1])))));
                                var_21 = (min(var_21, (arr_23 [i_6])));
                            }
                        }
                    }
                }
                var_22 = (((((arr_20 [i_6] [i_6]) & (arr_20 [i_6] [i_6]))) == ((max((arr_20 [i_6] [i_6 - 1]), (arr_20 [i_6] [i_6 - 1]))))));
            }
        }
    }
    var_23 = var_14;
    #pragma endscop
}
