/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(255, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (((1 ? 51302 : (arr_0 [i_2]))));
                    var_15 = ((!((max((~var_9), (min(260046848, (arr_6 [i_0] [7] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = ((((min((((65512 + (arr_3 [22])))), (((arr_8 [i_1] [i_1] [i_1]) ? var_5 : 0))))) ? (min((arr_8 [i_1] [i_3] [i_4]), ((((arr_4 [10] [i_2] [5]) / var_0))))) : ((min(var_6, ((4294967290 ? 1 : 0)))))));
                                arr_16 [i_0] [i_1] [1] [i_3] [i_1] = (arr_6 [i_4] [i_1] [i_1] [i_1]);
                                var_17 = (min((max((arr_10 [i_0] [i_2] [i_2] [i_3]), var_11)), (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_10;
    #pragma endscop
}
