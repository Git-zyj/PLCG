/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_8 - var_5) != (((var_11 ^ var_4) - var_6))));
    var_15 = var_3;
    var_16 = (min(var_16, var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 |= 0;
                arr_6 [i_0] [i_0] [i_0] = ((((var_8 ? var_13 : 4)) <= (arr_5 [4] [i_1] [i_1])));
                arr_7 [6] [6] [6] |= ((((max(1533873372068725833, -38))) ? ((19 ? 5761 : 5759)) : (arr_3 [i_0 - 2])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = arr_8 [i_0] [i_2] [i_2];
                                arr_15 [i_1] [6] [2] [10] [i_0] |= 9;
                                var_19 = 5166906729681330761;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
