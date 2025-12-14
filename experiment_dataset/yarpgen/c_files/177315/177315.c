/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((2998520629 ? (((var_2 ? 0 : var_0))) : var_8))) ? 1025186323 : (((0 >= var_16) ? (((max(var_17, 0)))) : 1622215511)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = 216;
                arr_6 [i_0] = 0;
            }
        }
    }
    #pragma endscop
}
