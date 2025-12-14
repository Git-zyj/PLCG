/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((max(-43, 15))) > ((min(var_3, (-127 - 1)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [6] [i_2] &= (max(((((max(var_3, var_4))) ? (((arr_9 [i_0] [i_1] [i_3] [i_3]) ? var_14 : 10)) : (arr_0 [i_3 + 1] [i_3]))), (max((arr_10 [i_4 + 1] [i_3 + 1]), ((((arr_3 [i_0] [i_0] [i_0]) >= var_9)))))));
                                arr_14 [i_0] [i_0] [i_2] [7] [i_4] [i_0] = (min((((var_3 == ((7957875379156753579 ? var_17 : -29))))), 14746680615271944777));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, ((((var_1 < (max(0, var_7))))))));
    #pragma endscop
}
