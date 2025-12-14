/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_8;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = 4294967295;

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_22 = (((121 + 72) != ((~(((arr_0 [i_0 - 1]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_2])))))));
                    var_23 = 6;
                    arr_6 [i_0] [i_1] [1] = (((((100 ? var_17 : ((16 ? (arr_5 [i_2] [i_2]) : 121))))) ? ((max(121, 2))) : (arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 2] [i_1] [i_2 - 1] [i_1] [i_4] = (arr_4 [i_3] [i_2 - 1] [i_0 - 1] [i_0 - 1]);
                                var_24 = -813725309;
                            }
                        }
                    }
                }
                var_25 = ((51 ? ((((max((arr_10 [i_1] [i_0] [i_0 - 2] [i_0] [i_1] [i_1] [2]), 830183891))) ? (arr_0 [i_0]) : ((813725315 ? (arr_11 [i_1] [i_1] [i_1] [1] [i_1]) : (arr_9 [13]))))) : var_19));
                arr_13 [6] [i_1] = ((((((arr_0 [i_0 - 1]) | (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1] [13])))) ? (((var_0 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0])))) : ((~(((arr_0 [i_0]) ^ (arr_7 [7] [i_0 + 3] [i_1] [0] [i_1] [i_1])))))));
                var_26 = -118;
            }
        }
    }
    #pragma endscop
}
