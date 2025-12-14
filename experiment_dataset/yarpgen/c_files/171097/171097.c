/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_10 = var_5;
        var_11 -= 0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_12 += ((+(((arr_3 [i_0] [i_0]) ? (!var_7) : var_1))));
                        arr_8 [i_3] [i_0] [i_0] [i_0] = (((var_1 ? ((max(var_4, 1))) : 1)));
                        arr_9 [i_3] [i_3] [i_3] [i_1] [i_0] [i_3] &= 1;
                        var_13 = (arr_3 [i_0] [19]);
                    }
                }
            }
        }
        var_14 = var_6;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = var_4;
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                {
                    var_15 = (((((var_7 ? (arr_4 [i_6 + 3] [i_6 + 2] [i_6]) : var_5))) ? (!var_8) : ((var_7 ? 9223372036854775807 : -1024983463))));
                    var_16 = (max(var_16, 1));
                    var_17 -= ((((var_6 ? var_6 : 1)) & ((((((var_9 ? var_0 : var_5))) ? var_2 : (var_9 | 1))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                {
                    arr_26 [i_7] [i_8] [i_7] = (((var_2 / (var_5 & 108))));
                    var_18 = var_3;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    arr_32 [i_7] [i_10] [i_7] [i_7] = var_8;
                    var_19 = var_9;
                }
            }
        }
    }
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            {
                arr_39 [i_12] = ((var_1 * ((var_2 ? ((((arr_34 [i_12] [i_13]) == var_0))) : (arr_37 [i_12] [i_12] [i_13])))));
                var_21 = (((((((min(var_4, var_3))) ? var_9 : 0))) & (9223372036854775807 >> 1)));
            }
        }
    }
    #pragma endscop
}
