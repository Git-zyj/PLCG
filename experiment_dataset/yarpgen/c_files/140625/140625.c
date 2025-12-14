/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = arr_1 [4] [4];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [6] [i_2] [i_1] [i_0] = ((((~((53177 ? 12288 : (arr_4 [i_0] [11] [i_0] [i_0]))))) / ((max((arr_3 [13] [13] [i_3 - 3]), (arr_3 [i_3] [i_0] [i_3 - 1]))))));
                                var_13 = ((65535 ? (arr_1 [i_0] [i_0]) : -32101));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
