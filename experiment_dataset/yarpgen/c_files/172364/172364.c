/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = ((-1316 ? ((((!(~var_2))))) : ((var_6 - (min(var_3, var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (max(((((arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) == (arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])))), (max((arr_0 [i_0 - 1]), 1))));
                    var_20 = (~-1294);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_21 = ((-((~(arr_6 [i_0] [i_0 - 1])))));
                                arr_15 [i_0] [10] [10] [i_4] [10] = ((max(15, (min((arr_1 [i_0] [i_0]), var_11)))));
                            }
                        }
                    }
                    var_22 = (!(arr_2 [i_1]));
                    var_23 = (-1489124234707709177 - var_1);
                }
            }
        }
    }
    #pragma endscop
}
