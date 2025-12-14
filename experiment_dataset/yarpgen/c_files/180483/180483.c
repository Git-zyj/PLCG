/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((!(((var_0 ? 2496608172 : var_7)))))), (((!2496608172) ? (max(var_4, var_0)) : (max(32754, 1798359124))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = 1798359125;
                    var_12 = (min(var_12, var_9));
                }
                var_13 = (min((!var_1), (((((arr_6 [0] [i_0]) ? var_8 : (arr_1 [i_0]))) % (((arr_2 [1] [i_1]) ? var_8 : (arr_3 [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_14 = var_3;
                            var_15 = (~(((((2496608163 ^ (arr_15 [i_3 - 1] [i_3])))) ? (min(var_8, 2496608172)) : 2496608160)));
                            var_16 = (((max(-2496608172, (arr_12 [i_3] [i_4])))) ? (max(-1748549160474106659, var_8)) : (((var_2 ? (arr_11 [i_4 + 1]) : (((var_9 ? var_9 : var_10)))))));
                        }
                    }
                }
                arr_22 [i_3] [i_4] [6] = min(1748549160474106658, (((-(arr_21 [i_3 - 1] [i_4] [i_3] [1] [i_4] [i_3])))));
            }
        }
    }
    #pragma endscop
}
