/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_19 = 60013;
                                arr_14 [18] [i_1] [i_0] [i_1] [i_0] = -1;
                            }
                            var_20 = ((((((min(-32754, 1)) > ((5 ? 1 : 13937)))))));
                            var_21 |= 17;
                            var_22 = (~((51598 - (!51613))));
                        }
                    }
                }
                var_23 |= (max((((22011 << 1) ? (max(-1077458706, 5418616889931156469)) : (~1))), 65535));
            }
        }
    }
    var_24 = (!-81);
    #pragma endscop
}
