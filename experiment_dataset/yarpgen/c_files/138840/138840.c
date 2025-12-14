/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (((arr_3 [i_2]) ? (max((arr_1 [i_2 - 1] [i_1 + 2]), (var_4 <= 24))) : (arr_6 [i_0] [i_1] [i_1] [i_2])));
                    arr_9 [i_0] [i_1] [i_1] = (((!(((arr_8 [i_1]) >= 1695649610)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 -= (min(-32175, 1));
                                var_13 -= (max(var_6, ((((min((arr_7 [i_1 + 1] [i_3] [i_4]), (arr_10 [i_0] [i_0] [7] [i_4 - 1])))) ? var_1 : ((var_5 ? var_10 : -7493))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_14, (((((~(~3159627130))) & (((var_8 ? 7051 : ((min(-1, 0)))))))))));
    #pragma endscop
}
