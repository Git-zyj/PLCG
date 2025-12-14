/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = ((((((23511 ? var_2 : var_10)))) ? (var_16 == var_11) : -var_17));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = 0;
                    arr_9 [i_1] = ((-(max(((var_8 ? 13 : var_3)), ((min(var_13, (arr_0 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = (max((max((min(var_2, var_15)), (((var_7 || (arr_13 [i_0] [i_0] [i_2] [i_2] [10])))))), ((((arr_6 [12] [i_3 - 1] [i_4 - 1] [i_4 - 3]) ? var_0 : (arr_12 [i_3] [i_3 - 1] [i_3 - 1] [i_4 - 3] [i_4 - 3]))))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_0] [1] = (((((max(2134, 0))) % 43648)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_3;
    #pragma endscop
}
