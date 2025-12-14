/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((!(arr_7 [i_0 + 1] [i_2])));
                    arr_9 [i_0] [i_0 + 1] [i_0] [i_0] = (((max(-var_6, (123145302310912 <= -4378445086034138230))) - ((((min((arr_4 [i_0] [i_0]), var_1)) - ((var_6 ? var_7 : (arr_6 [i_0 + 1] [i_2] [i_2] [10]))))))));
                    var_10 = var_1;
                }
            }
        }
    }
    var_11 = var_7;
    var_12 = ((var_7 ? ((((var_9 < (max(4378445086034138242, var_0)))))) : (var_0 / var_8)));
    var_13 = (((min(var_6, var_3))) ? (~var_4) : (max(var_0, var_7)));
    #pragma endscop
}
