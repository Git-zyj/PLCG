/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(((26614 ? -26621 : 26620)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, -26621));
                                arr_11 [i_3] [12] [12] [i_0] [i_4] [i_4] = (((((-(var_4 << var_9)))) ? var_8 : (11065 || var_3)));
                            }
                        }
                    }
                }
                var_13 = (((!(var_5 || var_8))));
                var_14 = (min((~var_10), ((1 ? (10233484567831337073 + 8213259505878214552) : 793956594))));
                arr_12 [i_0] [i_1] [i_0] = ((((!((max(8213259505878214573, var_10)))))));
                var_15 ^= max(var_4, (var_1 == 1));
            }
        }
    }
    var_16 |= var_4;
    #pragma endscop
}
