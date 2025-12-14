/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 1] [i_0 + 1] [i_2 - 3] [i_3] [i_4] [i_0] = (max((max(3637133857, 2071308511)), (~2071308511)));
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_4] = -657833438;
                            }
                        }
                    }
                    var_18 = 1033168636;
                    arr_14 [8] [8] [i_1] [8] |= max(-8575, (max(782794226, 5)));
                }
            }
        }
    }
    var_19 ^= var_17;
    var_20 = ((((!(8578 / 675836473972920843))) ? var_15 : var_15));
    var_21 = 29417;
    #pragma endscop
}
