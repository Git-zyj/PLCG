/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((var_5 ? var_5 : var_0))) ? (((max(-1, (-127 - 1))))) : (min(var_10, var_5))))) || ((((((var_0 ? var_0 : var_6))) ? (min(var_5, var_2)) : var_1)))));
    var_13 *= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = max(((var_11 ? var_10 : (max(var_7, var_4)))), (((var_2 != (((var_8 == (arr_2 [i_0]))))))));
                arr_5 [i_0] = (((max(4294934528, 255)) >> ((((var_4 ? (arr_4 [i_0] [i_1] [8]) : var_11)) - 7759))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_0] [9] [i_2] [i_2] [0] [5] = ((~((~(min(var_9, 255))))));
                                var_15 *= ((min(((0 ? var_3 : 255)), ((var_11 ? var_7 : 30)))) != (((((max(var_10, var_8))) > (~65505)))));
                            }
                        }
                    }
                }
                arr_18 [5] [5] [5] |= (max((((((var_8 ? -1 : var_3))) ? ((var_7 ? -1 : var_3)) : (7 & var_8))), var_9));
                var_16 -= -1057743982;
            }
        }
    }
    #pragma endscop
}
