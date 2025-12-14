/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((((max(((var_2 ? var_7 : 161)), ((83 ? var_2 : var_7))))) ? ((100 ? ((65529 >> (30527 - 30525))) : var_3)) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 -= (min(1, 7504641991844013843));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (((((96 ? ((max(58736, 0))) : var_8))) ? ((min((arr_5 [i_4 - 1] [i_0 - 1]), var_7))) : (max(((var_6 ? 0 : 0)), ((0 ? 95 : 0))))));
                                var_15 = (max((((0 << (var_5 - 53065)))), (((max(var_8, var_1)) - (((max(var_5, var_7))))))));
                                arr_15 [i_1] [i_1] [7] = (max(((max(87, (arr_13 [i_0 - 1])))), ((-(var_11 + 0)))));
                                arr_16 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_0 - 1] [1] [19] = (((40 == 94) ? (max(((var_11 ? 222 : 1)), (arr_9 [i_0 - 1] [i_4 - 1]))) : ((min(var_7, 231)))));
                                var_16 = 0;
                            }
                        }
                    }
                    arr_17 [i_0] [3] [i_0] = max(209, var_4);
                }
            }
        }
    }
    var_17 = (min(var_4, ((max(var_5, var_3)))));
    #pragma endscop
}
