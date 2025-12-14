/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 15;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = (!(((var_2 ? var_8 : var_0))));
                                var_18 ^= (min((arr_0 [i_0 + 1]), ((var_9 ? (arr_0 [i_0 - 1]) : 31115))));
                                var_19 = var_2;
                            }
                        }
                    }
                    var_20 = (((((arr_1 [i_0 + 1] [i_1 + 3]) ^ (arr_10 [i_0] [i_1] [i_1] [i_1] [i_2])))) ? (53 || 1119293585) : (((arr_1 [i_2] [i_0 + 1]) ? var_5 : (arr_10 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_2]))));
                    arr_11 [i_0] [i_0] [i_2] = var_9;
                }
            }
        }
        var_21 = (max(var_21, -var_0));
    }
    #pragma endscop
}
