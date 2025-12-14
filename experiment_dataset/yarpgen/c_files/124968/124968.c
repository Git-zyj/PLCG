/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_10));
    var_19 = (min(var_19, ((max(-8638378505600826736, var_4)))));
    var_20 = (max(var_20, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [1] [i_1 + 1] [i_2] [i_3] [i_2] [i_4] = ((8638378505600826740 < (arr_8 [i_0] [i_1 + 1] [i_2 + 1] [i_1 + 1] [i_1 + 1] [6])));
                                var_21 = (~-2375128416392286758);
                                var_22 = (~var_8);
                                arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] = (min(-2375128416392286746, (arr_5 [i_2 + 2] [i_2 + 1] [i_2 - 1])));
                                var_23 = (((arr_12 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (arr_12 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 1]) : (((arr_12 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1]) ? var_4 : 8638378505600826721))));
                            }
                        }
                    }
                }
                arr_17 [i_0] = (!94);
                arr_18 [i_1] = ((21 ? var_7 : (max((arr_14 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1]), (arr_4 [i_1 + 2] [i_0])))));
            }
        }
    }
    #pragma endscop
}
