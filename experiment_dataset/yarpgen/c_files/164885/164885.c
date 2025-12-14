/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_3);
    var_18 = (min(var_18, ((max((var_3 | 13767100538060323723), (max(((32759 ? -32765 : 0)), -28)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = (((((((~(arr_1 [i_1] [i_1]))) & (min(-32760, 1037031661))))) ? (min(((var_16 ? 32755 : (arr_4 [3] [i_1] [i_2]))), (~1037031680))) : -32759));
                            arr_9 [i_3] = 24;
                            arr_10 [i_0] = (((((arr_5 [i_3] [i_2] [7] [4]) ? 10135514032511714558 : (arr_0 [i_2] [i_2]))) != (!32760)));
                        }
                    }
                }
                var_20 = (max((11372961385344523688 >= -13757), (((arr_8 [i_0] [i_1] [i_1] [15]) ? (2002857772 != -32760) : 10135514032511714558))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_18 [i_4] [2] [i_4] [i_1] [i_0] = (max(19293, 3986429535799670453));
                                var_21 = ((!(((29296 ? 55217 : -1)))));
                                var_22 = (max(var_22, ((((arr_15 [i_5] [i_5 + 3] [i_5] [i_5] [i_5 + 3]) | -56)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
