/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, var_8));
                    var_20 = (min(var_20, (((((arr_0 [i_1]) + 9223372036854775807)) << (5 - 5)))));
                    var_21 = ((!(var_1 + -var_18)));
                }
            }
        }
    }
    var_22 = (~5);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 18;i_4 += 1)
        {
            {
                arr_12 [i_3] [i_3] = 29;
                var_23 = var_14;
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_24 = arr_16 [i_3] [i_3] [i_3];
                                var_25 = (min(var_25, (((((((-912923009 <= (!var_14))))) ^ 12512151578168450516)))));
                                arr_19 [i_3] [i_3] [i_3] [i_3] = (((((((arr_8 [i_7 - 3] [i_7 - 3]) != (arr_14 [i_3] [i_4] [i_5] [i_7 - 1]))))) >= (arr_11 [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
