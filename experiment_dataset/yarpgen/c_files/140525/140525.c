/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 130;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (max(var_16, ((((96923920 <= 31070) << (100 - 80))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_0] [i_3] = ((((((arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4 + 1]) ? 8176 : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 + 2] [i_2] [i_2])))) ? ((12 ? (arr_12 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_3] [i_4 + 2]) : (arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [i_4 + 1] [i_0] [i_0]))) : (min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_1 - 1] [i_4] [i_3] [i_4 + 2] [i_2] [i_0])))));
                                var_18 += (arr_12 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 2] [i_4 + 1] [i_4]);
                            }
                        }
                    }
                }
                arr_14 [i_0] = 18315154917721883782;
            }
        }
    }
    var_19 = (min(var_19, (((var_16 ? var_10 : (((max(-123, -5845589653535959433)) - (!-1))))))));
    #pragma endscop
}
