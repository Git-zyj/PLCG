/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (arr_6 [i_1] [9] [i_2 - 1] [5]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = ((-((~(arr_14 [i_4] [i_2 - 1] [3] [i_2] [i_2 - 1] [3])))));
                                arr_15 [i_0] [i_4] [i_2] [i_3 + 1] [14] [i_0] = (((((max((arr_7 [i_2 - 1] [i_3] [i_3]), (arr_2 [i_2] [i_0]))))) ? ((-((min(var_10, -20))))) : (min(var_0, ((((arr_9 [i_0] [i_1] [i_2] [i_2]) < 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_16, ((max(var_8, var_6)))));
    var_21 -= ((-(1 < var_4)));
    var_22 = (min(var_22, -1));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_23 = (arr_17 [i_5] [i_6]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_24 = (min(var_24, ((max(var_13, ((((arr_20 [1] [i_6] [i_7]) != -1))))))));
                            arr_24 [i_5] [i_6] [i_7] [i_5] [i_8] [10] = (!10234422920578628418);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
