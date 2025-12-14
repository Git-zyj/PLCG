/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(var_1, (var_9 & 52))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1 - 1] [i_1] [10] = (max((arr_2 [i_0] [9]), (926293595 & -926293587)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [12] [i_0] = -926293573;
                            var_12 = max((min((max(var_1, (arr_5 [i_1 - 3]))), var_7)), -926293611);
                        }
                    }
                }
                arr_13 [i_0 - 4] [i_1 + 2] [4] = (max(((3667251962 - (arr_2 [i_0 - 2] [i_0 + 1]))), ((min(var_4, 174)))));
                arr_14 [i_1 + 3] = max((arr_8 [i_1] [i_1] [i_0 + 1]), (((max(0, (-9223372036854775807 - 1))))));
                var_13 += (min((arr_2 [i_1] [i_0]), 8632941067362662636));
            }
        }
    }
    #pragma endscop
}
