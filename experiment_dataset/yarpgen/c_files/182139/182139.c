/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (~(arr_5 [i_1] [4] [4]));
                arr_8 [5] [1] = (min((arr_7 [i_0] [i_0]), (((~(arr_2 [i_1 - 4] [i_1 + 1]))))));
                arr_9 [i_0] [i_1 - 2] [i_1] = ((-(((arr_7 [i_1] [i_1 + 3]) ? (arr_2 [i_1] [i_1 - 2]) : (arr_2 [i_1] [i_1 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_2] [5] [8] = 293;

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_17 = (arr_4 [i_0] [i_0] [i_0]);
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(((4241402191 && (arr_13 [6] [i_1 - 1] [i_1 + 3] [10]))))));
                                var_18 = (arr_1 [i_0]);
                            }
                            var_19 = (max(1, (((arr_18 [i_0] [i_0] [i_2] [4] [i_3]) >= ((((arr_13 [4] [i_1] [i_1] [i_1 - 3]) && (arr_1 [8]))))))));
                            arr_20 [1] [i_0] [i_1] [i_2] [i_2] [i_3] = 293;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
