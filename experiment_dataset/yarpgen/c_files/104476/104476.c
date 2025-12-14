/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (max(var_17, 14602));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] = (((arr_6 [i_2] [i_1 + 1] [i_1 + 3] [i_0]) ? var_6 : (arr_4 [i_1] [i_1 + 3] [i_1 + 2] [i_1 + 1])));
                    var_18 -= (((var_0 > -2147483632) ? ((-9 / (arr_3 [i_2] [i_0 - 2]))) : (arr_5 [i_1 + 2] [i_0] [i_0] [i_0])));
                }
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    var_19 = ((var_3 < (max((arr_1 [i_0]), (((35310 & (arr_3 [i_0 - 1] [i_0 - 1]))))))));
                    var_20 = ((!(!-2147483633)));
                }
                var_21 = (+((((min((arr_3 [i_0] [i_0]), (arr_1 [i_0])))) ? var_0 : (76 / -9))));
            }
        }
    }
    #pragma endscop
}
