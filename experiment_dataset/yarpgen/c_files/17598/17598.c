/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 |= (((~var_4) ? (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_1 [i_1]))) : (min(-1, -1))));
                var_17 = (max((((~var_13) ? 6438 : -1)), (!var_1)));
                arr_5 [i_0] [i_0] = ((((min(6438, (max(var_8, 255))))) ? ((var_2 ? (arr_1 [1]) : 25)) : (arr_0 [i_0])));
                var_18 = -1;
                var_19 = 8;
            }
        }
    }
    var_20 = ((((max(var_0, (((var_4 ? 2 : -1)))))) ? ((var_11 ? var_8 : var_2)) : ((min(var_3, 1)))));
    var_21 = var_12;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] [i_3] = (min(((~(arr_0 [i_3]))), (arr_0 [i_3])));
                arr_13 [i_3] [i_3] [i_2] = var_2;
            }
        }
    }
    #pragma endscop
}
