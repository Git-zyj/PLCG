/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((~var_1) != 2331351965)) ? (max(((3859498122 ? 130 : 1)), -216)) : (((var_17 == (1 != 0))))));
    var_21 = (~((-((((-9223372036854775807 - 1) > 5870))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_0 [i_0 - 2]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_22 = 1342361506;
                            var_23 ^= arr_3 [i_3] [1] [i_2];
                            arr_13 [i_0 - 3] [i_0 - 3] [i_0 - 3] &= ((var_6 ? (arr_3 [i_0 - 3] [i_0 + 3] [i_0]) : (((arr_3 [i_0 + 2] [8] [i_0]) ? var_18 : var_11))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_24 = ((~((max((arr_20 [i_1] [i_6 - 1] [i_6] [i_6 + 1] [i_6]), (arr_12 [i_1] [i_6 + 2] [i_6 + 2] [i_1] [i_6] [i_6 - 1]))))));
                                var_25 = (max(var_25, ((max((max((!1), (arr_22 [i_0 - 1] [i_0] [i_0] [i_0]))), var_17)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = ((~(((((8452421253642207313 ? var_18 : var_13))) ? 48 : (!var_8)))));
    #pragma endscop
}
