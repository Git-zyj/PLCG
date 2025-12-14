/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (((~(arr_10 [i_0 + 1] [i_2] [i_2] [i_4] [i_4] [i_4]))));
                                var_22 = ((var_2 / (max((arr_10 [i_0 + 2] [i_0] [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_2]), (arr_10 [i_0 - 1] [i_0 + 3] [i_0 - 1] [7] [i_1 - 2] [i_2])))));
                                var_23 = 6;
                                var_24 = 259868051;
                            }
                        }
                    }
                }
                var_25 = ((var_14 / (((max((arr_8 [i_1] [i_1] [i_1] [i_1 - 1]), (arr_8 [i_1] [i_1] [i_1] [i_1 - 1])))))));
            }
        }
    }
    #pragma endscop
}
