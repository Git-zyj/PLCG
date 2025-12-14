/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1 + 2] [i_2] [i_1 + 2] [i_0] = 2713441764;
                                var_20 &= ((!((1581525531 <= (((max(54857, 65535))))))));
                                var_21 = max((min(((var_17 << (((arr_7 [i_0] [i_0]) - 63497)))), (1581525528 < 6755))), ((((arr_2 [i_1 + 2]) <= ((min(6778, 6755)))))));
                            }
                        }
                    }
                    var_22 &= 1;
                }
            }
        }
    }
    #pragma endscop
}
