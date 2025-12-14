/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((253 ? var_7 : (arr_3 [i_1])))));
                var_18 *= ((~(arr_2 [i_0])));
            }
        }
    }
    var_19 = (max(var_19, ((((-32767 - 1) != (((~var_1) ? var_8 : var_5)))))));
    #pragma endscop
}
