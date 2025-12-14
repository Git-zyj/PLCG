/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, -14687));
                                var_18 = ((~((var_1 ? 24486 : ((~(arr_10 [i_0 - 1] [i_0] [i_2])))))));
                                var_19 = (max((-9223372036854775807 - 1), (((arr_0 [i_0]) + (arr_0 [i_0])))));
                                var_20 &= ((~(arr_2 [i_1])));
                                var_21 = (min(var_21, ((max((((arr_7 [i_0 - 3]) ? ((-(arr_2 [i_3]))) : (~var_4))), var_13)))));
                            }
                        }
                    }
                    arr_12 [i_2] [i_0] [i_0] [i_0 + 2] = (arr_10 [i_0 + 1] [i_0] [i_2]);
                    arr_13 [i_0] [i_1] = ((!(((-((~(arr_3 [i_0 - 3] [i_1] [i_1]))))))));
                    var_22 = (((~9223372036854775807) ? 0 : ((23 ? (!23) : (((arr_1 [i_1]) ? (arr_11 [i_2] [i_2] [i_0] [i_0] [i_1] [i_0 + 2]) : -2))))));
                }
            }
        }
    }
    var_23 = ((-5405893430487209434 ? var_1 : ((var_11 ? 13888781962264949533 : (((var_0 ? var_14 : 47)))))));
    #pragma endscop
}
