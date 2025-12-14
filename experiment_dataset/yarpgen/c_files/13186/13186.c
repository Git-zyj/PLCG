/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (!1)));
    var_16 = min((min((!var_10), var_12)), ((!(~var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] [i_0] [1] = (min(4294967294, var_4));
                    var_17 = ((((arr_2 [i_0 + 1] [i_1] [i_2]) % 170)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (~1)));
                                var_19 = (arr_6 [i_4 - 1] [i_3] [23]);
                                var_20 &= 254;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
