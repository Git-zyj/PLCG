/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_0] = var_16;
                var_18 = ((var_3 >> (var_16 == var_16)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_19 = (min(((var_17 ? (arr_17 [i_2] [i_5 - 1] [i_4] [i_5]) : (arr_10 [i_3 - 4]))), var_12));
                                arr_21 [i_3] = var_2;
                                arr_22 [i_3] [i_3 - 4] [i_3 - 4] [i_3] = ((+(((arr_15 [i_2 + 2] [i_3] [i_4] [4]) ? 25171 : (arr_19 [i_5 + 2] [i_5] [i_5] [i_2] [i_2 - 1] [i_2])))));
                            }
                        }
                    }
                    arr_23 [i_3] [i_3 - 1] = ((min(var_4, ((-(arr_12 [i_2 + 2]))))));
                    arr_24 [i_2] [i_3] [i_3] = ((!((min(var_11, 25171)))));
                }
            }
        }
    }
    var_20 = ((((var_2 ? var_3 : (~var_11))) | var_10));
    var_21 = var_5;
    #pragma endscop
}
