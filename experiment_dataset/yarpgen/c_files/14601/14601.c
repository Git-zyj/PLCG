/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_9 [i_4] [i_3] [i_2] [14] [i_1] [i_0] [4]);
                                var_16 = (arr_7 [i_4] [i_3] [i_2] [12] [i_0] [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_17 = ((((max((arr_5 [i_6] [i_6 - 1]), (arr_13 [i_5] [15] [i_6] [i_6 - 1])))) && (((~(arr_3 [i_0]))))));
                            var_18 -= (((arr_15 [0] [0] [i_5] [1]) ? (((((min(-79, (arr_16 [i_0] [1] [11] [i_0] [i_0])))) ? ((min((arr_3 [i_5]), (arr_8 [i_0] [i_0] [i_1] [i_5] [i_6] [i_6])))) : (arr_16 [i_0] [7] [i_5] [i_6 + 1] [i_6])))) : ((-(arr_15 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
                var_19 = (arr_12 [i_0]);
            }
        }
    }
    var_20 = var_1;
    var_21 = var_9;
    #pragma endscop
}
