/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(2147483647, ((((min(0, var_17))) ? var_10 : 144114638320041984))));
    var_21 = ((1162068060 | (((~var_16) ? var_16 : ((min(-1162068060, var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = (var_12 / -1162068061);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_22 = var_14;
                            var_23 = ((((((-1162068070 ? var_3 : -27344)))) ? (min(1162068060, (!-39))) : (((124 ? (arr_9 [i_0] [i_1 + 1] [i_2] [i_3] [i_1] [i_3]) : (-1162068060 & -1162068061))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
