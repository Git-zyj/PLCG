/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = ((((68 ? 2165712936 : 4570140243901166940)) * -var_2));
                var_13 = (max(var_13, ((min(var_8, var_5)))));
                arr_5 [i_0] = ((((min((~var_9), var_2))) ? (~var_8) : var_8));
            }
        }
    }
    var_14 = ((var_4 ? (-var_0 - var_11) : var_1));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_2] [i_2] = (var_2 <= var_11);
                arr_11 [i_2] [i_2] [11] = (min(-var_8, ((var_10 ? var_0 : var_1))));
                arr_12 [i_3] = var_1;
            }
        }
    }
    var_15 *= var_11;
    #pragma endscop
}
