/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_8, var_10));
    var_19 = var_3;
    var_20 = (min(var_20, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((var_7 ? var_1 : ((((arr_1 [i_0] [i_1]) >> (19080 - 19057))))))) ? (((-(arr_2 [i_0] [i_0])))) : (2317 + 482377891)));
                arr_5 [i_0] [i_0] = 1;
            }
        }
    }
    #pragma endscop
}
