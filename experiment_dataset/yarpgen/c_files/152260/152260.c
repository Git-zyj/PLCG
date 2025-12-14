/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-(~3)))) ? (--13735) : ((((max(35, 1))) ? -1 : -1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (max(var_12, -979325072236342871));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 *= 11;
                                var_14 ^= (-9223372036854775807 - 1);
                                var_15 |= max((-9223372036854775807 - 1), (((!(((2333654156468496140 ? 26 : 9223372036854775807)))))));
                                arr_15 [i_0] [i_1] [2] [2] [i_4] [i_2] = ((-27248 ? -9223372036854775792 : ((((max(165, -32757))) ? 65535 : ((-9223372036854775778 ? 4067501983315427483 : 13104478699450407895))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_21 [i_5] = (~-11609);
                            arr_22 [i_5] [i_1] [i_1] [i_1] [i_1] [20] = ((!((min(3187652133, 0)))));
                        }
                    }
                }
                arr_23 [i_0] [i_1] = ((~(((-4933145437129041329 ? 1 : 1)))));
            }
        }
    }
    #pragma endscop
}
