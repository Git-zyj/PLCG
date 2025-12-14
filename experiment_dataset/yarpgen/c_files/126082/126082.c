/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((((1 - (4847418430210822711 - 1)))) ? ((((min(var_5, var_3))) ? (var_7 - 0) : var_0)) : var_4));
    var_14 = var_7;
    var_15 += ((2072388415 ? 1 : -168671223));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max(var_0, var_1));
                var_16 = (arr_3 [i_1]);
            }
        }
    }
    var_17 = (((var_11 - var_5) || var_8));
    #pragma endscop
}
