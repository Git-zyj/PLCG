/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((163 >= var_9) ? ((max(0, var_1))) : ((8889 ? var_5 : 142))))) ? ((var_9 ? (156 % var_5) : (var_5 != var_1))) : ((((max(var_7, 187))) ? -93 : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 = ((~(arr_4 [i_1])));
                                var_12 = (((52 ? ((69 ? 14525750190958653788 : (arr_0 [i_3 - 1] [i_1]))) : ((((20679 == (arr_7 [i_0] [6] [i_0] [i_3 - 1] [6]))))))));
                            }
                        }
                    }
                    var_13 = (min(var_13, ((((arr_7 [i_0] [i_0] [i_1] [i_1] [i_2 - 1]) && ((((var_0 ^ var_4) ? (((arr_9 [i_0]) << (((((arr_0 [i_0] [i_1]) + 10070)) - 14)))) : (arr_0 [i_2] [i_1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
