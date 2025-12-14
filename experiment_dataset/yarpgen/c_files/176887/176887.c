/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_1, ((var_6 ? var_4 : (var_6 < 16)))));
    var_13 *= (((((-327792221 ? var_1 : var_7))) > var_6));
    var_14 = (((((var_11 / -105) * var_5)) / -var_0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [1] [1] [i_0] = (~var_10);
                    arr_9 [i_0] = ((var_10 ? ((max(-var_5, 119))) : (((~-3181528618733126246) ? var_3 : var_6))));
                    arr_10 [i_0] [11] = (arr_6 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = -14574;
                                var_16 = (max((min(var_0, (arr_13 [i_0 + 1] [i_2] [i_2] [i_0]))), (((114 ? -840909266435594100 : 119)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (~var_4);
    #pragma endscop
}
