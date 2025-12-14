/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 ^= ((max(var_17, 31232)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 *= ((arr_0 [i_0]) > (min(var_7, (min((arr_0 [i_1 - 2]), (arr_11 [i_0] [i_0] [i_2] [i_3] [i_3]))))));
                                arr_13 [i_0] [15] [i_2] [i_3] [i_4] = ((!((!((min(var_16, var_12)))))));
                                var_22 = ((((max(var_1, (~var_18)))) ? ((-(var_13 | 65535))) : (7 & 19)));
                            }
                        }
                    }
                    var_23 = var_15;
                }
            }
        }
    }
    var_24 = var_13;
    #pragma endscop
}
