/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (!9222809086901354496);
                                var_20 = (max(var_20, (((253 >> (9223934986808197125 - 9223934986808197099))))));
                            }
                        }
                    }
                    var_21 ^= (arr_4 [i_0] [i_0]);
                    var_22 = ((-(arr_11 [i_1] [i_1] [i_2])));
                }
            }
        }
    }
    var_23 = max(65533, var_17);
    #pragma endscop
}
