/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (!var_19);
                                var_21 = (arr_2 [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_22 = (arr_11 [i_0] [i_1] [6] [i_5]);
                                var_23 = (arr_0 [i_0]);
                                var_24 = ((~(arr_4 [1] [i_2])));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_25 = max(((max((arr_18 [i_0]), (arr_18 [i_0])))), (max((arr_16 [i_0] [10] [i_7] [i_1] [i_7]), (arr_16 [i_7] [i_7] [1] [i_1] [i_0]))));
                    var_26 = (arr_13 [i_7]);
                }
                arr_19 [2] = (max((~1), (arr_10 [1] [i_0] [1] [i_1] [i_1])));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_27 = arr_6 [i_1] [i_1] [7];
                    var_28 = (arr_15 [3] [i_1] [1] [i_1] [1] [i_0] [3]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_24 [i_9] [i_9] [i_0] = (arr_8 [i_0] [i_1] [i_9] [4] [i_0] [i_0]);
                    var_29 = (((arr_21 [i_0] [i_1] [i_1]) || (arr_21 [i_0] [2] [i_9])));
                }
                var_30 = (min(var_30, (+-1601916519)));
            }
        }
    }
    var_31 = ((var_16 ? var_1 : var_0));
    var_32 = (!var_4);
    #pragma endscop
}
