/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (arr_6 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 *= ((!((var_0 && (((var_10 ? (arr_7 [2] [i_2] [i_3] [i_4]) : (arr_11 [i_1] [i_3]))))))));
                                var_13 = (((arr_7 [i_1 + 3] [i_2 - 1] [i_2 - 1] [i_2 - 1]) ^ var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, 88));
    var_15 = var_10;
    var_16 = var_4;
    #pragma endscop
}
