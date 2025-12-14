/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= 0;
    var_21 = 15823;
    var_22 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_0] [i_1] [i_3] [i_3] [i_0] [i_0] = -4842300570048946800;
                                arr_14 [i_2] [i_1] [i_2] [i_1] [i_3] [13] [i_4] = (max((~1841605835), (((~(arr_3 [i_1] [i_1]))))));
                                arr_15 [i_3] [i_1] [i_1] = (min(((max(103, (max(105, 118))))), var_3));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_23 = (max(var_23, var_1));
                            arr_22 [i_6] [i_6] [i_1] = 0;
                            var_24 = (arr_1 [i_1]);
                            var_25 = (min(var_25, 1290017247));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [17] [i_1] [i_1] [i_0] [i_8] = var_3;
                            var_26 = (min(var_26, ((((((arr_25 [i_7] [i_7]) ? ((~(arr_12 [i_0] [i_1] [i_7] [i_7]))) : (arr_5 [i_8] [i_1] [i_7])))) ? ((max(var_7, (-119 != 20711)))) : (arr_2 [1])))));
                            var_27 = (~((~(arr_17 [i_7] [i_7] [i_0]))));
                            arr_28 [i_0] [i_1] [i_0] [i_0] = (min(-var_7, -119));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
