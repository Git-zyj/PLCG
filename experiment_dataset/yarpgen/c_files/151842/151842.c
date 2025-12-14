/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_10, (var_0 | var_0)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_13 = 1536;
                    var_14 = (min((((!(arr_7 [17] [i_0] [i_1 + 1] [i_2])))), (((arr_3 [i_0] [i_1]) ? var_1 : var_11))));
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    arr_13 [i_0] = (((var_6 ? var_4 : (arr_7 [i_0 - 1] [i_0] [8] [2]))));

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {

                        for (int i_5 = 4; i_5 < 19;i_5 += 1)
                        {
                            var_15 = ((((arr_5 [i_1] [i_5]) << (((arr_8 [i_0]) - 17672931732634978421)))));
                            var_16 = (min(var_16, (((42195 * (!131))))));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, (arr_15 [i_6] [i_1] [i_6] [i_4])));
                            arr_22 [6] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_0] = ((8192 | (arr_15 [i_0] [i_3 - 3] [i_3] [15])));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1 - 1] [i_3] [16] [i_4] [i_7] = ((36580388870282519 / (arr_2 [i_0] [i_0 - 1])));
                            arr_27 [i_0] = ((!(((var_8 ? 1 : var_10)))));
                            arr_28 [i_0 - 1] [i_1] [i_1] [i_4] [i_4] [i_0] [i_1] = (~var_2);
                            var_18 -= var_0;
                            var_19 += (((arr_14 [i_0 - 1] [i_0 - 1] [4] [i_0 - 1]) || 57335));
                        }
                        arr_29 [8] [i_1 - 2] [i_3] [i_0] = -18188795303412193988;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_20 = (((var_10 ? var_11 : (arr_5 [i_1 + 1] [i_1]))));
                                arr_36 [i_0] [i_0] [i_3] [i_3] [i_0] = (((57412 * 4) ? var_2 : (arr_32 [i_0 - 1] [i_0] [4] [i_0 - 1] [i_0])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_45 [i_0] [i_1 - 1] [9] [i_0] [i_12] = (((arr_0 [i_1]) / var_11));
                                var_21 = (max(var_21, ((max((((arr_21 [1] [i_0 - 1]) / (arr_30 [i_0 - 1] [i_0 - 1] [i_1 - 1] [6]))), (max((arr_21 [6] [i_0 - 1]), (arr_30 [i_0 - 1] [i_0 - 1] [i_1 + 1] [4]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, var_3));
    var_23 = (min(var_9, var_0));
    var_24 = var_9;
    #pragma endscop
}
