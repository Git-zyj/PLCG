/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 ^= (arr_2 [i_0]);
        arr_3 [i_0] [i_0] = var_2;
        var_20 = ((var_15 | (arr_2 [i_0])));
        arr_4 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 -= (1450235353 ? (!var_14) : 2211369179138036206);
                    arr_11 [i_1] [i_1] [i_0] [i_1] = var_10;
                }
            }
        }
    }
    var_22 = var_3;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_17 [i_3] [i_3] [i_3] = (((((var_0 ? ((var_0 ? var_1 : 1)) : ((((arr_7 [i_3] [i_3] [i_3]) && var_12)))))) ? (~-1) : var_2));
                arr_18 [i_3] = 885117098;
            }
        }
    }
    #pragma endscop
}
