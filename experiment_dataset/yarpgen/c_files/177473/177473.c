/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [10] [10] = (arr_0 [i_0] [i_2]);
                    arr_11 [i_0] [i_1] [i_1] = ((((((-(arr_4 [i_0]))) - (0 + var_12)))));
                    arr_12 [i_0] = ((40096 ? (((!((((arr_3 [i_2]) ? var_8 : 4082)))))) : (~40096)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = 40076;
                                arr_17 [5] = ((((min(242, (((var_11 || (arr_13 [i_0] [1] [i_0] [i_0]))))))) != (arr_8 [i_0] [i_0])));
                                arr_18 [i_2] [i_2] [i_3] [i_2] [6] = (3005656073 - 3996341567944827718);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                {
                    var_17 = ((((max(29197, var_1))) ? var_4 : (1006547321 | var_2)));
                    arr_26 [i_5] [i_6] [i_5] [i_7 - 1] |= (max((((((max((arr_23 [14]), var_11))) ? (!1006547321) : (((arr_20 [i_5] [i_5]) ? (arr_19 [18] [18]) : 2414527394))))), (max((arr_21 [i_5] [i_6]), (!1)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 15;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            {
                                arr_41 [i_12 + 1] [i_12 + 1] [9] [i_9] [i_9] [9] [i_12] = (arr_30 [i_8]);
                                var_18 = 1006547321;
                            }
                        }
                    }
                    var_19 &= ((221 ? 25440 : 4558496751062572707));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_48 [i_8] [i_9] = ((!((max((arr_28 [i_8 - 1]), (arr_20 [i_8] [i_8]))))));
                                var_20 = (min(var_20, ((min((arr_38 [i_8] [i_9] [i_10] [i_10] [6]), (max(0, 232)))))));
                                var_21 = (max(var_21, 40072));
                                var_22 += (arr_35 [i_13] [5] [5] [i_8]);
                                arr_49 [i_9] = (((((1638938187 ? 242 : 1))) ? (min((arr_40 [i_8] [i_9] [i_10]), (min(18087752957314986782, (arr_21 [i_8] [i_14 - 2]))))) : (((~((var_4 ? 40095 : var_9)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
