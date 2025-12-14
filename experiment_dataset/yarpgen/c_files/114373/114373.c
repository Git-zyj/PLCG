/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = var_6;
                var_19 = ((var_14 || (((var_8 ? var_16 : var_15)))));
                var_20 += (((~var_9) ? ((((min(var_10, 40))))) : (min((min(-1, var_10)), (min(var_12, var_11))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_3] = (((~(arr_7 [i_2]))));
                var_21 ^= (min((((var_4 ? 90 : var_9))), (((var_3 ? (arr_9 [i_2] [i_2]) : var_5)))));
                arr_11 [i_2] [i_2] [i_2] = ((-((-(arr_9 [i_2] [i_2])))));
            }
        }
    }
    #pragma endscop
}
