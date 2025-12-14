/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 *= min((arr_4 [i_2 - 2] [i_0] [i_2 - 2] [i_0]), (arr_4 [i_2 - 3] [i_1] [i_1] [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (((((arr_5 [i_2 - 1]) ? ((var_13 ? (arr_6 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0]) : var_2)) : (arr_11 [i_2] [i_2] [i_2] [i_3] [i_2 - 3])))) ? var_11 : ((((((-1112071833629942745 ? (arr_1 [1]) : var_8))) ? ((max((arr_0 [i_1] [i_0]), var_6))) : (arr_2 [i_0] [i_1])))));
                                var_17 = ((12634 ? (min(1112071833629942739, (((var_4 ? var_5 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : var_4));
                                var_18 += (arr_6 [i_0] [i_1] [i_0] [i_2 + 1] [i_3] [i_4]);
                                arr_13 [i_0] = ((((((arr_3 [i_2 + 1] [i_2 + 1] [i_4]) ? (((arr_8 [i_0] [i_1]) ? var_12 : 457661699)) : (arr_9 [i_0] [i_1] [i_2 + 1] [14] [i_3] [i_3] [i_1])))) ? ((((min(-9077, var_5))) ? (((var_3 ? (arr_12 [i_1] [i_1] [i_2] [i_3] [i_4]) : 201))) : ((var_7 ? var_2 : (arr_1 [i_0]))))) : ((((arr_5 [i_3]) ? var_1 : ((((arr_12 [i_0] [8] [i_2 - 3] [i_3] [9]) ? var_4 : 201))))))));
                            }
                        }
                    }
                    arr_14 [1] [i_0] = ((((((((9064463241391696705 ? var_3 : 6532897328235094963))) ? (((8 ? 0 : 9058))) : (((arr_8 [1] [i_1]) ? (arr_6 [i_0] [i_1] [1] [i_2] [i_2] [i_0]) : (arr_0 [i_0] [i_1])))))) ? (((arr_3 [3] [i_1] [i_0]) ? ((-(arr_9 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0] [i_0]))) : var_6)) : (arr_12 [1] [i_2 - 3] [20] [i_2 - 3] [i_0])));
                }
            }
        }
    }
    var_19 = ((var_1 ? (((((10984001700846765784 ? 1 : 837790943))) ? var_4 : ((-9064463241391696705 ? var_7 : var_10)))) : ((((((246 ? var_0 : var_1))) ? (min(var_3, var_4)) : var_3)))));
    #pragma endscop
}
