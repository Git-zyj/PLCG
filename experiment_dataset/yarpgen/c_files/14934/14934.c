/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((!6759504560160516343) ? (var_12 + var_3) : (((var_1 << (!7207897064583412320)))));
                    var_16 = (max((arr_3 [i_0] [i_0] [i_2 + 2]), (((!(((arr_0 [i_0]) && 7207897064583412320)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [12] [12] [i_2] [i_2] = ((-(arr_15 [i_0] [i_2 + 2] [2])));
                                arr_18 [i_0] [16] [i_0] [i_3] [i_0] [i_0] [8] = (+((((min((arr_13 [i_0] [i_3]), var_11))) ? (var_7 ^ -7207897064583412321) : 7207897064583412321)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = -7207897064583412328;
    #pragma endscop
}
