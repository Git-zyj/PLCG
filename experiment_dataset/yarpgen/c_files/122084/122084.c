/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_7 ? (((0 + (682457457 - 158)))) : (max((var_8 && var_9), ((var_3 ? var_1 : 18446744073709551606)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = (min(-28363, ((max((arr_2 [i_0 - 1] [i_0 + 2]), (arr_2 [i_0 + 1] [i_0 + 1]))))));
                            arr_10 [11] [i_2] [i_3] = ((-((~(-32767 - 1)))));
                        }
                    }
                }
                var_21 -= -26;
            }
        }
    }
    #pragma endscop
}
