/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))) || ((((arr_0 [i_1] [i_0]) ? 24061 : var_14))))) ? (arr_1 [i_1] [i_1]) : (((((-32767 - 1) || (arr_3 [11] [i_0] [6])))))));
                var_17 &= (((((var_0 / (((var_11 ? 1030 : var_4)))))) ? var_5 : (((arr_2 [i_0]) ? ((24061 ? var_7 : var_16)) : (((max(0, (arr_2 [i_0])))))))));
                var_18 ^= max((max(((var_8 << (((arr_1 [i_1] [i_0]) - 6034123980193619138)))), ((var_0 ? 28601 : var_8)))), 127);
                var_19 = var_0;
            }
        }
    }
    var_20 = ((((var_16 ? ((min(var_12, var_12))) : var_12)) << (((~var_16) + 8973))));
    #pragma endscop
}
