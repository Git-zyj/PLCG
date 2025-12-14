/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_18 = 146;
                        var_19 = -var_13;
                    }
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        arr_12 [2] [i_1] [i_1] [i_4] &= (((-(arr_1 [i_1]))) != (((((arr_1 [i_1]) && 24)))));
                        arr_13 [i_0] = (!var_16);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 7;i_6 += 1)
                        {
                            {
                                var_20 = (((-(arr_7 [1]))));
                                arr_19 [i_0] [i_0] [3] [i_5] [i_5] [i_5] = ((((((arr_7 [i_1 - 2]) & (arr_7 [i_1 - 1])))) ? (((arr_7 [i_1 - 2]) * (arr_7 [i_1 + 2]))) : (var_7 * 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((min(-var_6, 229))) ? var_14 : ((220 << (((min(var_16, var_1)) - 8673914510936519491))))));
    #pragma endscop
}
