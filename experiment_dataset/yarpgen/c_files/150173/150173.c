/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((-26164 / (-2147483647 - 1))))));
                arr_5 [i_0] = (min(59197, 6345));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(((-((((arr_2 [i_4]) && 3120414071200618731))))))));
                                arr_15 [i_1] [i_2] [i_3] = (((((3295094617 == (arr_10 [i_0] [i_4 - 3] [i_2] [6])))) & ((min(7506, 32767)))));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = arr_7 [i_0] [i_3] [i_2];
                                arr_17 [8] [8] [i_3] [i_3] [i_3] [i_3] = -18754;
                            }
                        }
                    }
                }
                arr_18 [i_1] [i_1] [i_0] = 0;
            }
        }
    }
    var_15 = -1893389946;
    var_16 = var_8;
    #pragma endscop
}
