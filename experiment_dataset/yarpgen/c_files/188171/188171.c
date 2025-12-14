/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (!-58)));
    var_14 = -14019;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = 3030557143;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2 - 2] [i_3] [i_3] [i_2 - 2] = max(var_2, 58);
                            var_15 = (max(var_15, (((var_3 / (var_2 / 254))))));
                        }
                    }
                }
                var_16 ^= (((-(arr_1 [i_0 + 2] [i_0]))));
                arr_15 [i_0 + 2] [i_0 + 2] = 1;
            }
        }
    }
    #pragma endscop
}
