/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_10 [i_0 - 2] [i_1] [i_2] [i_3] [0] [i_4] = 1;
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] = arr_2 [i_0];
                            }
                        }
                    }
                    arr_12 [6] [11] [i_2] [i_2] = (max((arr_1 [1] [7]), (min((max(4520012598181459893, (arr_9 [i_0] [10] [10] [i_1] [i_0]))), (((18700 ^ (arr_5 [9] [9] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [9] [3] [i_5] [2] = 1547028680303971732;
                                var_18 += (max((min(((max(1, 6599))), (max(169, (arr_3 [i_0]))))), ((4520012598181459903 ? (~6584) : ((max(79, 5081)))))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] = var_7;
                }
            }
        }
    }
    var_19 += var_6;
    #pragma endscop
}
