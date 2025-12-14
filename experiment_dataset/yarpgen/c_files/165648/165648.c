/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 ? -17 : (!var_9)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [1] [1] |= ((-(arr_9 [i_0 + 1] [i_0 - 1])));
                            arr_14 [i_0] [12] [8] [i_0] = (arr_9 [14] [5]);

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_17 [13] = -1;
                                var_16 = (arr_12 [14] [10] [14] [14] [14] [18]);
                                arr_18 [12] [1] [17] [17] [12] = (arr_6 [0] [0] [0] [0]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_26 [1] [9] [3] [5] [1] = (min(((min(6997779623680310892, ((((arr_12 [16] [16] [8] [4] [9] [11]) ? (arr_10 [i_0] [i_0] [i_0]) : 238)))))), (arr_2 [i_7 - 1])));
                                var_17 += 548033919439453768;
                            }
                        }
                    }
                }
                arr_27 [i_0] [i_0] = (arr_4 [i_0]);
            }
        }
    }
    #pragma endscop
}
