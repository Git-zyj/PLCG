/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 -= (arr_3 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_3 - 3] [i_2] [i_2] [i_1] [i_1] [i_3] = ((!(((40351 ? (arr_9 [0] [1] [i_2] [i_4 - 1] [i_3 - 3]) : var_10)))));
                                var_15 += 63571;
                            }
                        }
                    }
                    var_16 = ((var_2 + (min(16935399171290749906, (arr_4 [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                var_17 = 3920729451;
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_23 [11] [i_7] [i_6] = ((((max((63571 && 0), var_1))) ? (min((max(var_2, var_1)), ((min(1, var_2))))) : ((((arr_20 [i_7 - 2] [i_7 - 3] [i_7 - 1]) ? (arr_20 [i_7 - 1] [i_7 - 2] [i_7 - 1]) : 487838962)))));
                            arr_24 [i_6] [i_6 + 3] [i_7] = (((arr_14 [i_8] [6] [i_6 + 3]) < -1));
                            var_18 -= ((-(((arr_22 [i_6 + 2] [6] [i_5] [6]) ? 3920729451 : var_10))));
                        }
                    }
                }
                arr_25 [i_5] [i_5] [i_6] = (((max(((min(23822, var_13)), 42026)))));
            }
        }
    }
    var_19 += var_3;
    #pragma endscop
}
