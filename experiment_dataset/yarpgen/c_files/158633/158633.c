/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(var_12, (max(var_7, var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (max((((~(arr_4 [i_1 + 3] [i_2 - 1])))), (max((arr_7 [i_1 + 3] [i_2 - 3] [i_2 - 2]), (arr_5 [i_1 + 1] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3 + 1] [i_1] [i_0] = (((arr_7 [i_4] [i_2] [i_0]) ? var_12 : var_11));
                                var_16 *= (((max(646980140, 780632998920844805)) > var_3));
                                var_17 &= ((max((arr_5 [0] [0]), var_13)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 |= 1;
    #pragma endscop
}
