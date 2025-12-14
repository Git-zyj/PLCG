/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 *= (((18181561879534802139 & 1) ? (arr_3 [i_0]) : (((((1 ^ (arr_0 [i_0])))) % (arr_2 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_0] [i_4] [i_4] [i_1] = 0;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                            }
                        }
                    }
                }
                var_20 = (!(((-(arr_6 [i_0])))));
                var_21 = var_8;
            }
        }
    }
    var_22 = (((var_14 || var_3) && var_15));
    var_23 = (~18);
    var_24 = ((((((max(var_5, var_1)))) & ((var_2 << (var_9 - 1))))));
    var_25 = (max(var_25, var_9));
    #pragma endscop
}
