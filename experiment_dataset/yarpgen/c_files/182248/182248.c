/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((!((((((var_1 ? var_6 : var_0))) ? ((max(var_6, var_10))) : var_0)))))));
    var_12 = (((max(((min(var_5, var_5))), (var_4 % var_4))) >= var_7));

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [12] = (arr_1 [1] [i_0]);
        var_13 = ((((((var_9 && var_9) << ((((~(arr_1 [i_0] [i_0]))) + 1323832018))))) ? var_3 : (var_0 + var_8)));
        var_14 += (1 * var_3);
        var_15 = (min(var_15, var_7));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (((arr_8 [i_1 - 2]) && var_5));
        var_16 -= (~var_10);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_17 [2] [13] [i_3] [i_4] &= (!(~var_6));
                        var_17 = (arr_10 [7] [2] [i_4]);
                    }
                }
            }
        }
    }
    var_18 -= -255;
    #pragma endscop
}
