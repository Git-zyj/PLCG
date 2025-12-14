/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((max(var_9, ((var_4 ? 0 : var_8))))) && var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((-6 <= (arr_4 [i_0 + 2] [i_0 + 1]))) ? var_3 : (((arr_4 [i_0 + 1] [i_0 - 1]) ^ (arr_4 [i_0 - 1] [i_0 + 2])))));
                var_14 *= ((-((var_0 ? (arr_4 [i_0 - 1] [i_0 + 1]) : 68))));
                var_15 = ((var_5 >> (var_2 - 86031627)));
            }
        }
    }
    var_16 = ((!(!0)));
    #pragma endscop
}
