/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (--235847117);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] = (max((((var_3 < 262080) ? (((1 ? 1233567779 : -756186012))) : (((((arr_0 [i_0] [i_0]) + 9223372036854775807)) >> (1796833733 - 1796833730))))), 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 *= max((7263557144846303422 / -7263557144846303426), (((1 < (arr_6 [i_0] [i_0] [i_0 + 1])))));
                                var_15 = (min(var_15, 7263557144846303425));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_0] = ((((((1 ^ 1) ? (min(-16, 81)) : -1))) ? (((~(-16 <= 1600379239)))) : 2328747668));
                }
            }
        }
    }
    #pragma endscop
}
