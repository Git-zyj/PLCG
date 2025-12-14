/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max(11, var_12))), var_9));
    var_17 &= 39;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = ((~(((!(~109))))));
                                var_19 = min(((216 ? 11 : (arr_11 [i_0] [i_4] [i_2 - 2]))), (((arr_1 [i_2 - 1]) ? (arr_3 [i_0] [i_2 + 3] [i_4]) : ((var_2 ? (arr_0 [i_0]) : 32767)))));
                                var_20 = (arr_3 [i_2 - 2] [i_2 + 3] [i_3 - 1]);
                            }
                        }
                    }
                    var_21 = (max(var_8, ((216 ? 132120576 : 103))));
                    arr_12 [i_2] |= (((arr_10 [i_0] [i_0] [i_0] [i_2 - 2] [i_2 + 3] [i_2 + 3] [i_2 + 3]) ? (arr_10 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_1] [i_1] [i_1] [i_0]) : ((-(arr_10 [17] [1] [10] [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_1])))));
                    arr_13 [i_1] [i_1] [i_2 + 2] [11] = var_12;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((((-var_4 ? 132120582 : ((((arr_14 [i_0] [14] [2]) ? (arr_6 [i_2 + 2] [i_0] [i_6] [i_5]) : 11275)))))) ? (arr_9 [i_1] [i_6] [i_6]) : (((-((-110 ? -63 : (arr_14 [i_6] [i_2] [i_2])))))))))));
                                arr_18 [i_5] [i_1] [i_0] = ((((-2147483647 - 1) ? 23 : var_3)));
                                arr_19 [i_1] = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
