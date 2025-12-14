/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (22433 ^ var_16);
                arr_4 [i_1] [i_1] [i_1] = ((((((arr_1 [i_0 + 1]) > (arr_1 [i_0 + 1])))) << (((var_17 == (arr_1 [i_0 - 2]))))));
                var_19 = (max((((((var_17 ? -70 : 32767))) ? ((max(-1, -107))) : (arr_2 [i_0] [i_0]))), 17));
            }
        }
    }
    var_20 = ((((((((var_7 ? var_3 : var_16))) - 17377989740158121061))) ? var_7 : (((((max(var_11, 0)))) + var_4))));
    var_21 -= var_2;
    var_22 = (var_8 ^ var_1);
    #pragma endscop
}
