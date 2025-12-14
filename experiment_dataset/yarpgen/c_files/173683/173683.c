/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((63 >> (!0)));
    var_21 = var_6;
    var_22 = (var_3 << 1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [11] = ((1 & (1 % 1)));
                var_23 = ((~(-3501551003813958149 && 1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] = (((var_8 >= -3780827067427967582) ? ((((~1) <= 1872971487))) : 1));
                            arr_15 [i_0] [i_1] [i_2] [i_3] = (arr_0 [3] [6]);
                        }
                    }
                }
            }
        }
    }
    var_24 = (~-63);
    #pragma endscop
}
