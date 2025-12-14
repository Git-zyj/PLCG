/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (1723188725869245594 || 2979291999);
    var_13 = ((1 ? var_4 : 8576131591426362516));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 -= (max(-1, ((~(arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                    var_15 -= ((((max((arr_1 [i_2]), (arr_4 [i_2] [i_1] [i_0])))) ? var_9 : (((!(arr_1 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = ((var_7 ? var_2 : (9075 / 1)));
                                arr_13 [6] [i_1] [i_1] [i_3] [i_1] [i_0 - 1] [i_0] = ((((arr_11 [i_4 + 1] [i_0] [i_4 + 1] [i_0 + 1] [i_0] [i_0]) * (arr_11 [14] [i_0] [i_4 - 1] [i_0 - 1] [i_0] [8]))) ^ ((1315675296 ? (arr_11 [i_4] [i_0] [i_4 - 1] [i_0 - 1] [i_0] [17]) : (arr_11 [i_4 + 1] [i_0] [i_4 + 1] [i_0 + 1] [i_0] [i_0 - 1]))));
                                var_17 = var_8;
                                var_18 = ((((15029341864401156755 ? 79 : (arr_1 [i_0 - 1]))) / ((83 ? 1 : 511))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
