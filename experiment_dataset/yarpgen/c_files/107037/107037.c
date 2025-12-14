/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 ^= ((var_17 ? 2147483630 : var_16));
        var_20 = (((4061743696738508008 / var_12) ? 1 : var_7));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            {
                var_21 = ((((max(83, 32753))) == (((!(!var_18))))));
                var_22 = ((((((((var_9 ? var_13 : -2147483631))) ? var_16 : ((var_13 << (var_16 - 65)))))) - ((((min(var_4, var_6))) ? (var_10 == 11690) : 4294967295))));
                arr_7 [i_2] = ((!2934823125) || ((((((var_9 ? var_18 : 4294967295))) ? (max(2276855698, 16710476736296728954)) : (((4294967295 ? var_5 : var_0)))))));
            }
        }
    }
    #pragma endscop
}
