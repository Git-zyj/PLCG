/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (((((var_11 ? (arr_2 [i_1 + 1] [i_1 - 1]) : (arr_2 [i_1 + 1] [i_1 - 2])))) ? (((-(((arr_1 [i_0]) ? -2147483641 : (arr_0 [i_1])))))) : (var_4 / var_0)));
                var_16 = ((((max(-19, 13022047750826733936))) ? ((((!((((arr_2 [i_0] [i_1 - 2]) ? 13022047750826733936 : var_11))))))) : 5424696322882817680));
            }
        }
    }
    var_17 ^= var_8;
    #pragma endscop
}
