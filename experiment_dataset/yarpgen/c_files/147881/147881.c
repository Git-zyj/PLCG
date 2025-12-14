/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((arr_2 [i_0]) ? ((min((!-596152686), 0))) : ((((var_10 - -9223372036854775795) > var_3)))));
                    arr_9 [i_0] [i_1] [i_2 - 3] = 112;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [11] [i_4] [i_0] [i_1] = ((var_12 ? 31408 : (((!(arr_1 [i_0]))))));
                                var_13 ^= 339998227;
                            }
                        }
                    }
                    var_14 ^= (((arr_5 [i_1] [i_1] [i_1]) ? ((((!(arr_10 [i_0] [i_0] [i_0] [i_1] [i_0]))) ? (arr_5 [i_2] [i_2] [i_2 - 1]) : -161503317)) : (((!(arr_10 [i_2 + 1] [i_2] [i_2 - 3] [i_2 - 4] [i_1]))))));
                }
            }
        }
    }
    var_15 = var_7;
    var_16 = (-596152685 ^ var_8);
    var_17 = var_7;
    #pragma endscop
}
