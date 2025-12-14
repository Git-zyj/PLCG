/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((+(min((arr_0 [i_0] [i_1]), var_3))));
                arr_6 [i_0] [i_1] = (max((min(-1, ((var_7 ? var_0 : 16)))), ((min((var_8 / 13468), ((var_2 ? 433195767 : var_8)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_10 = (~5111472810364711649);
                var_11 = min(((~(max(var_8, 13014313331215372143)))), (var_7 >= var_2));
            }
        }
    }
    #pragma endscop
}
