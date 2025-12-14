/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [1] [14] [1] [i_2] = ((((((1 ? (arr_1 [i_0]) : 2970567778))) ? (max(-4970466998630463123, (arr_6 [i_0] [i_0]))) : ((min(1324399517, (arr_2 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_10 = (max(1674607266, (arr_9 [i_4 + 1] [i_3] [i_2] [i_1] [i_0])));
                                var_11 = (min(((min((((3500649938 ? 2064999469 : 1847668912))), ((2064999473 ? 4970466998630463127 : (arr_10 [i_0] [i_0])))))), ((1 * (arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = (min(var_12, (895994185306925880 >= 89564277)));
    #pragma endscop
}
