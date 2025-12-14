/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 << (var_9 - 10436)));
    var_13 = (min(-var_9, var_7));
    var_14 += var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 -= (arr_1 [i_3] [i_4]);
                                var_16 = (max(var_16, ((((((arr_11 [i_0] [i_1] [i_2 - 1] [4] [5] [i_0] [i_0]) ^ var_3)) == (arr_7 [i_0] [i_1] [i_2 + 1] [i_0]))))));
                                var_17 = (((((var_7 >> (var_9 - 10428))) > ((max((arr_5 [i_0]), var_6))))) || (((~(arr_7 [i_1 - 1] [i_0 + 2] [i_3 + 1] [i_2 - 1])))));
                                var_18 = (max(var_18, ((min(((var_9 ? var_7 : (arr_8 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))), (((var_1 > (arr_9 [i_3 + 1] [i_4] [8] [8])))))))));
                                var_19 = ((((((!var_1) * (arr_4 [i_0 - 1] [12])))) ^ (((arr_7 [i_0] [i_1 + 1] [i_3] [i_4]) ? (arr_8 [i_4] [i_4] [12] [i_2] [i_0 + 1]) : (arr_8 [i_3] [21] [14] [i_0 + 2] [i_0 + 2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_20 = var_10;
                                var_21 = (min(var_21, var_7));
                                var_22 = (arr_11 [17] [i_1] [7] [i_1] [i_5] [i_6] [i_6]);
                                var_23 = (var_0 > (arr_10 [i_0] [i_2 + 1] [i_2 + 1] [i_6 + 1] [11] [i_6]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_24 = ((var_4 * (!var_0)));
                                var_25 = (arr_15 [i_8] [i_7] [i_0] [i_0] [i_1] [i_0]);
                            }
                        }
                    }
                    var_26 = ((+(((arr_7 [i_0 - 1] [i_0] [i_0 + 1] [i_0]) ^ (arr_14 [i_2 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
