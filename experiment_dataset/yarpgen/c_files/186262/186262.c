/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((-var_5 ? (29704 & var_11) : ((var_13 ? var_9 : var_12))))) & -15132284625790672116));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [18] [18] [15] [i_1] = arr_4 [i_1] [17];
                    var_17 = 245;
                    arr_10 [i_0] [i_1] = (arr_1 [6] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = ((~(arr_16 [i_1] [1] [i_3] [1] [i_4] [i_1])));
                                var_19 &= (arr_6 [i_0] [i_4 - 1] [i_0]);
                                var_20 = var_8;
                                var_21 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
