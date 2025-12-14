/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((~(((!((((arr_2 [i_0] [i_0]) ^ 10503145957963488082))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 &= (max(((5795525370013819241 ? (arr_8 [i_0] [i_1] [i_1] [i_2 - 1] [i_3 - 1] [i_4]) : (!-50))), 0));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(arr_0 [i_0])));
                                var_20 = (max(var_20, -50));
                            }
                        }
                    }
                }
                arr_14 [i_1 + 1] = ((((min((arr_9 [i_0] [i_1 - 3]), -50))) > (min(((var_3 ? 50 : var_10)), (((!(arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    var_21 = var_8;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                arr_20 [i_6] [i_6] [i_6] = (((((((1578989863 ? var_8 : var_12)) / (((arr_18 [i_6] [i_6]) ? var_4 : (arr_2 [i_5] [i_6])))))) && (arr_7 [i_6] [i_6] [i_6] [i_6] [i_6])));
                arr_21 [i_5] [i_5] = (min((min((arr_1 [i_5] [i_6]), 23121)), (arr_1 [i_5] [i_5])));
                var_22 = var_13;
            }
        }
    }
    #pragma endscop
}
