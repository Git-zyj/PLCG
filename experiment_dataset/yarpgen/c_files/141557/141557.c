/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [11] [i_0] [i_0] &= ((((max(243, (arr_6 [i_3 - 1] [i_1] [i_2] [i_3 + 1])))) ? (max((arr_3 [i_3 + 1]), var_2)) : var_8));
                            var_12 = max((((-16 ? 202653544 : -202653563))), (((arr_7 [i_1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 1]) * (((3625141793 ? -202653566 : 202653571))))));
                            var_13 = 202653544;
                        }
                    }
                }
                arr_10 [i_1] = (((((((max(192, (arr_1 [i_0] [i_0])))) >= 202653568))) >= ((((arr_3 [i_1]) <= (max(-202653568, (arr_2 [i_1] [7] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
