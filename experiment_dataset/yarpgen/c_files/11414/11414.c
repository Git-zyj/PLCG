/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(var_19, ((min(16384, ((var_3 ? var_17 : var_6))))));
    var_21 -= var_1;
    var_22 = var_0;
    var_23 = ((var_0 ? var_9 : (((((50786 ? var_4 : var_5))) ? (var_6 >= 0) : 219))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_4] [i_4] = (((arr_1 [i_0] [i_2]) ? ((~(arr_1 [1] [i_1]))) : var_2));
                                var_24 = ((3682212680 ? ((min(((612754615 == (arr_2 [i_2] [i_4]))), (((arr_2 [0] [i_3]) != (arr_9 [i_4] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0])))))) : (((!(arr_5 [i_1 - 2] [i_0] [9]))))));
                            }
                        }
                    }
                    arr_12 [i_0] = ((min((arr_3 [i_0] [i_1 - 1] [i_0]), (((arr_5 [i_2] [i_0] [i_0]) - var_13)))));
                    arr_13 [i_0] = (((((arr_10 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 2]) ? (arr_10 [5] [i_1 + 1] [i_1] [i_1] [i_1 + 1]) : var_7)) == (((arr_10 [13] [i_1 - 2] [i_1] [i_1] [i_1 + 1]) ? (arr_10 [i_0] [i_1 + 1] [i_1] [5] [i_1 - 2]) : (arr_10 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
