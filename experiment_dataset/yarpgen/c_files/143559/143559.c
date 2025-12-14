/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(((-1821613501 ^ ((var_6 ? -1821613501 : var_10)))), -24081);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 = (max(14809798654420397425, (((arr_4 [1] [i_0 - 2] [i_0 + 1]) ? (arr_4 [1] [i_0 - 1] [i_0 - 2]) : 268435328))));
                            arr_11 [i_2] = var_5;
                            var_19 = max((((!var_14) ? var_1 : ((var_2 ? (arr_4 [i_3 + 1] [i_1] [i_1]) : (arr_8 [i_0] [i_1]))))), ((~(arr_5 [i_0 + 2] [i_3 + 1] [i_0 + 2]))));
                            arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [0] &= ((!(arr_8 [i_3 + 1] [i_0 - 2])));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0 + 2] = max((max((arr_8 [i_0] [9]), (arr_1 [i_0]))), (3636945419289154191 / -var_2));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] = var_6;
                            arr_19 [i_0] [i_1] [1] [i_5] = ((((((var_4 && (arr_17 [i_5] [i_1] [i_0]))) * (arr_3 [i_0 + 2])))));
                            var_20 = (max(var_20, ((-(max((min(var_13, 3636945419289154190)), ((var_9 * (arr_1 [i_0])))))))));
                        }
                    }
                }
                arr_20 [i_0] [i_0] = ((((var_12 ? (arr_9 [i_0] [i_0] [i_0 - 1] [i_1] [5] [i_1]) : (arr_9 [2] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2])))) ? (((arr_9 [i_0 + 1] [i_1] [i_0 + 1] [i_0] [i_1] [i_1]) ? (arr_9 [i_0] [i_0] [i_0 - 1] [i_1] [i_0] [i_1]) : var_8)) : ((max((arr_9 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [14]), (arr_9 [0] [0] [i_0 + 1] [i_0 + 2] [i_1] [i_1])))));
                var_21 = ((max((arr_5 [i_0 + 2] [i_1] [i_1]), var_6)) / (((arr_5 [i_1] [i_1] [i_1]) * (arr_5 [i_0 + 1] [i_1] [i_0 + 1]))));
            }
        }
    }
    #pragma endscop
}
