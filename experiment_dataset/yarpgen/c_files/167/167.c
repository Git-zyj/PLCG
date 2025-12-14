/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = -var_0;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = (((((27981 ? (arr_4 [i_1 + 3] [i_1 + 3] [i_2 + 1]) : (arr_8 [i_1] [i_1] [i_1 + 2] [i_2 + 2])))) ? ((~(arr_9 [i_1] [i_1 - 3] [i_2] [i_2 - 2] [i_2 + 1] [i_2 - 2]))) : (max((((!(arr_1 [i_0])))), ((-(arr_0 [i_0])))))));
                            arr_11 [i_0] [1] [i_0] [14] [0] [i_2] = ((-((-35 ? (arr_7 [i_1 + 2] [i_1]) : var_4))));
                            arr_12 [i_2] [i_2] [i_2 + 2] [i_1 + 2] [i_0] [i_2] = max((((arr_2 [i_1 - 1]) ? (arr_2 [i_1 + 2]) : var_9)), (arr_5 [3]));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_16 = 54;
                                arr_19 [3] [19] = min((max((arr_15 [i_1] [i_6 + 1]), (arr_18 [i_0] [i_0]))), 3403794221);
                            }
                        }
                    }
                }
                var_17 = -39;
            }
        }
    }
    var_18 = ((var_3 ? (max(var_9, (max(var_7, var_5)))) : var_9));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_19 = (arr_5 [i_7]);
                var_20 = var_6;
                arr_26 [i_7] [i_8] = 4700201303135587524;
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_21 = ((~(((arr_8 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]) >> (((arr_8 [21] [i_8] [i_9] [i_10]) - 9348484299125668187))))));
                                var_22 = ((!((max((min(4591264438502453020, 4718)), (arr_30 [i_9] [8] [i_9]))))));
                                arr_36 [i_7] [i_8] [1] [i_10] [i_11] [i_7] [i_10] = (min((((arr_9 [i_7 - 1] [i_7 - 1] [i_9] [i_10 + 1] [i_10 - 1] [i_10 - 1]) ? 127 : (arr_9 [i_7 - 1] [i_7 - 1] [i_7] [i_10 + 1] [i_10 + 1] [6]))), (!var_2)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((var_8 ? ((var_9 ? (209 - var_0) : -25)) : var_12));
    #pragma endscop
}
