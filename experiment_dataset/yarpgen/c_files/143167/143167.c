/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((max(6168477988507634776, 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((max(42, -7685788096091137536)))));
                                var_17 = (max(var_17, (((~((((min(1692897708, var_0)) <= 83))))))));
                                var_18 = (min(1, ((((6272616013065517544 == (arr_14 [i_0] [i_1] [i_2] [i_1] [i_0]))) && (!1)))));
                                var_19 = (arr_2 [i_0] [i_4 + 1]);
                            }
                        }
                    }
                }
                var_20 = ((-43 ? 1 : 1482461969));
                var_21 |= (min((max(1174367116, var_11)), 17071));
                var_22 = (min(var_22, (((((min(((23493 ? 24671 : 1)), ((max((arr_12 [i_0] [i_0] [i_0]), var_0)))))) > var_2)))));
            }
        }
    }
    #pragma endscop
}
