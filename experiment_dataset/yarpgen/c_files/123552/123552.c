/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = ((~(max(var_5, ((var_10 ? var_5 : var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 -= (min((max((max(var_5, (arr_3 [i_0]))), 37371)), (((~((max(var_1, (arr_0 [i_0])))))))));
                var_14 = (arr_2 [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = var_1;
                                var_15 = (max(var_15, (((-((max(var_10, (((!(arr_7 [i_3] [i_2]))))))))))));
                                var_16 = var_10;
                            }
                        }
                    }
                }
                var_17 = (max((max((((!(arr_7 [i_1] [i_0])))), (arr_11 [i_0] [11] [i_0] [i_1] [i_1] [i_1]))), (max((((arr_6 [i_1] [i_0]) ? var_3 : var_10)), (((!(arr_1 [i_1] [i_0]))))))));
            }
        }
    }
    var_18 = (max(var_18, ((max(var_6, var_8)))));
    #pragma endscop
}
