/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((min(((2800322740 ? var_10 : var_4)), ((max(var_7, 0))))), var_5));
    var_13 = max((((((var_6 ? var_6 : 2004863092))) ? (max(-486797997, 3515285894810953696)) : var_9)), var_4);
    var_14 = -65;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [18] [18] [i_1] = (arr_2 [i_0] [1] [i_1 - 1]);
                var_15 |= (((((((min(var_11, var_6))) ? (((24632 ? var_1 : 720334001))) : (max(var_4, 0))))) ? ((((arr_0 [i_1 - 1] [i_1 - 1]) ? (arr_0 [i_1 + 3] [i_1]) : (arr_0 [i_1 + 3] [i_1])))) : ((-((14931458178898597905 ? 9493986065243282408 : 14931458178898597899))))));
            }
        }
    }
    var_16 = var_1;
    #pragma endscop
}
