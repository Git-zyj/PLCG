/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((min(var_13, (((var_9 ? (~var_10) : var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (arr_2 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_3] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = min(-109, -109);
                                var_21 = ((!(arr_13 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])));
                                var_22 = max((((-114 ? 45017 : 55))), ((var_3 ? (arr_13 [i_3] [i_3] [i_3] [i_3] [i_0]) : 1)));
                                var_23 = ((!((((arr_4 [1] [i_0] [i_2]) ? (arr_15 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) : ((max((arr_6 [i_0] [i_1] [18] [i_3]), 109))))))));
                                arr_17 [i_0] [i_3] [i_0] [0] [i_4 - 1] [1] [i_0] = (min(-9103, (((arr_12 [i_0] [i_0] [i_0 + 1]) ? 1 : (arr_12 [i_0] [i_0 - 1] [i_0 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
