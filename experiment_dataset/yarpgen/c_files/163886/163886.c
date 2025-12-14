/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((!var_8) | var_9)) - (min(82, 182)))))));
    var_21 = ((173 < (max(0, 49061))));
    var_22 = (((var_15 + var_3) ? 100 : (max(((82 ? 8134198340720721500 : 8)), var_16))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1] = (arr_3 [i_0]);
                                var_23 = (((+(((arr_11 [i_3]) << (82 - 60))))));
                                var_24 -= ((((min(164, -68))) / (arr_6 [i_2] [i_3] [9])));
                                arr_15 [i_0] [i_3] [i_2] [i_2] [i_4] = ((-(((((arr_6 [i_0] [i_0] [i_1 - 3]) + 2147483647)) << (((arr_7 [i_1] [i_1]) - 159))))));
                            }
                        }
                    }
                    arr_16 [i_0] = ((1405589004 % (arr_5 [i_1 + 1])));
                    var_25 = (arr_11 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
