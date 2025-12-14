/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = (((((min((arr_6 [i_1]), (arr_8 [0] [i_1] [7]))) + (arr_1 [1] [i_0 + 2]))) - ((min(-112714173, 32)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = ((arr_6 [i_0 + 1]) ? (arr_1 [i_0 + 2] [i_0 + 1]) : (min(var_7, (arr_8 [i_0] [5] [i_0 + 1]))));
                                var_12 = (arr_7 [i_2] [i_4]);
                            }
                        }
                    }
                    var_13 = (arr_10 [7] [i_1] [3] [1] [i_0]);
                    var_14 = (min((min(0, -92)), var_9));
                }
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}
