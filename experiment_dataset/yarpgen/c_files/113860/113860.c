/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((min(var_7, (!var_3))))));
    var_12 = ((1 ? 1 : 31002));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_2 - 3] [i_1] [i_0 - 2] = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 *= ((max(((~(arr_8 [17]))), 4916983338836620190)));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!4069182716);
                                arr_12 [7] [i_3] [i_2] [i_1] [i_0] = ((arr_3 [i_0 + 1]) ? (((arr_4 [i_3] [1] [i_3 - 1] [i_3 - 1]) ? 36 : (arr_8 [i_0]))) : (arr_0 [i_0 - 2]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
