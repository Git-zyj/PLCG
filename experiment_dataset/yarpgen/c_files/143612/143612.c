/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_2 && 2553577437);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 = (((1741389858 * 39) ? ((max((arr_8 [i_3 - 2] [i_0 - 1] [i_2 + 1]), (arr_13 [i_3 - 2] [i_0 - 1] [i_2 + 1] [i_1] [i_0 - 1])))) : ((39 ? ((11092 ? 8 : (arr_13 [i_4] [i_0 + 1] [i_2] [i_1] [i_0 + 1]))) : -16067))));
                                arr_14 [i_0] [4] [i_4] [i_4] [4] = (max(((min(16083, -1))), ((min(216, 16059)))));
                            }
                        }
                    }
                    var_13 = (min(((((((arr_9 [i_1] [i_1]) ? (arr_4 [i_2] [i_1]) : 2931289046061601065))) ? 0 : ((0 ? 42 : 18446744073709551589)))), (!18132788212854724941)));
                }
            }
        }
    }
    #pragma endscop
}
