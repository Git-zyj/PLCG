/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] [1] [i_0] [1] |= (min((arr_5 [i_0] [i_1] [i_2]), var_5));
                    var_15 = (-(-115 | var_10));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((!(((~(arr_5 [i_0] [i_1] [i_2]))))));
                }
            }
        }
    }
    var_16 = var_9;
    var_17 ^= ((~var_1) ? ((((!((max(var_8, -166367974))))))) : (max(var_2, var_5)));
    var_18 = (((var_9 + var_0) || (114 || var_6)));
    var_19 = var_11;
    #pragma endscop
}
