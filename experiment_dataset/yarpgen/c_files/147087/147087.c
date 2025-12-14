/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((-9223372036854775805 < 5) | (min(9223372036854775804, 1100797943)))) <= ((((-1100797943 == ((max(71, 52884))))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_8 [5] [i_3] [i_2] [9] [i_1] [7] = (max((0 | 1100797927), (0 < 2498848737)));
                            var_20 -= (((max(-1100797924, (min(-9223372036854775793, 12662)))) <= (((71 | 1) | (1 ^ 2147483647)))));
                            arr_9 [9] [9] [i_3] = (min((min(22581, (min(-417476527, -811335869866083507)))), ((((1 + 15) * -108)))));
                        }
                    }
                }
                var_21 = (((1 * 0) < (max(1796118539, 1))));
            }
        }
    }
    var_22 &= (((((max(52884, (2514082479 == 571313340))))) * (var_18 * 116)));
    #pragma endscop
}
