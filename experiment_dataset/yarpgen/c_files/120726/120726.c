/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = (-3369260802514809563 / -42);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_4 - 1] [i_4] [i_4] [i_0] [i_4] [i_4] = (((max(((var_10 % (arr_13 [i_0 + 1] [i_1] [i_0 + 1] [i_1] [i_4 + 1] [i_0] [i_3]))), 11))) ? (((((var_0 / (arr_8 [i_0] [i_0] [i_2])))) ? (max(10, 3021662590456682549)) : (~-9))) : (!0));
                                arr_17 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((3021662590456682549 % (max((((var_8 ? (arr_3 [i_0] [i_0]) : -24))), 7269377189487247309))));
                                arr_18 [i_0] [i_3] [i_2] [i_1 - 2] [i_0] = max((max((arr_4 [i_1 - 1] [i_1 - 2]), (arr_8 [i_0 + 1] [i_4 + 1] [i_0 + 1]))), (min((arr_8 [i_0 + 1] [i_4 + 2] [i_4 + 2]), var_7)));
                                arr_19 [i_4 + 2] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = (max(-9223372036854775807, (arr_3 [i_0] [i_0])));
                            }
                        }
                    }
                    arr_20 [i_0] [i_1 + 2] [i_1] = (max((min(var_1, (((arr_11 [i_0] [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_2]) ? var_0 : -3369260802514809562)))), ((max((arr_10 [i_0]), (max(0, 0)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_28 [i_5] [i_6] [i_5 - 4] [i_5 - 2] &= (((((!(((4999010715870212601 ? var_10 : 11)))))) % ((((3021662590456682549 > (arr_12 [i_5] [i_5] [i_6] [i_7] [i_7])))))));
                    var_13 = (min(var_13, ((max((var_6 / 5056648019450073115), (((max(var_0, (arr_15 [i_5] [i_6] [i_6] [i_7]))) % (((max((arr_7 [i_5] [i_6] [i_6]), var_9)))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                var_14 = (((~(arr_0 [i_8 - 1]))));
                var_15 = (min(var_15, ((max((((var_3 ? var_6 : var_10))), (((109 ? -120 : 0))))))));
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
