/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (var_12 - -var_8);
                                var_14 = (min((((!(((var_10 ? var_6 : (arr_2 [i_4] [i_1] [i_0]))))))), ((var_9 + (arr_1 [i_0])))));
                                var_15 = ((min((arr_6 [i_0] [i_0] [i_2] [i_4]), (arr_6 [i_0] [i_0] [i_3] [i_4]))) ^ ((min(-1313720199, (-1313720199 < 9111771892733739227)))));
                            }
                        }
                    }
                }
                var_16 = ((max((arr_1 [i_1]), var_8)));
            }
        }
    }
    var_17 = (((var_0 ? (min(-1313720199, -1313720192)) : ((min(var_6, var_6))))));
    #pragma endscop
}
