/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max((var_14 & var_9), (var_14 | 576460752303423487)))) && (((255 ? -576460752303423480 : 219)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = 576460752303423515;
                var_17 ^= ((13472935 && ((((16383 ? 2302377300 : (arr_2 [1])))))));
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
