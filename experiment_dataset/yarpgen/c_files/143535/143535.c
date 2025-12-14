/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_10;
                    var_13 -= ((20 ? var_7 : (arr_4 [i_1])));
                }
            }
        }
        arr_9 [2] &= var_11;
        arr_10 [0] |= var_3;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_14 = (((var_6 ? var_5 : 1)));
                    var_15 = ((~(arr_11 [i_0] [7] [i_4])));
                }
            }
        }
        var_16 = -424582859866936387;
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_17 = var_8;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                {
                    var_18 += ((arr_16 [i_7] [i_7 + 2]) & ((((-40011 || (max(1, 0)))))));
                    var_19 = (max(var_19, 32767));
                }
            }
        }

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_20 = (max(var_20, 241946851));
            var_21 = (((7668289912034352590 || 0) < var_6));
        }
        var_22 = ((-((((max(var_6, var_2))) ? (arr_23 [i_5] [i_5]) : ((((var_6 >= (arr_22 [i_5] [i_5] [16])))))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_23 = ((((var_11 ? (arr_5 [i_9] [i_9]) : var_1)) >= var_8));
        var_24 = (min(var_24, (arr_26 [i_9] [i_9])));
    }
    var_25 = (min(var_25, ((((min(-var_11, var_10)) >= var_3)))));
    #pragma endscop
}
