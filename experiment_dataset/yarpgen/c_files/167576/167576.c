/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((((((arr_1 [i_0] [i_0]) ? var_9 : 49688))) || 31040));
        var_21 = -34480;
        var_22 = (((!(arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_23 = (max((arr_2 [i_1]), (arr_3 [i_1])));
        var_24 = -52778;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_25 = (arr_6 [i_2] [i_2]);
        var_26 = ((1 ? (arr_0 [i_2]) : 186));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_11 [6] = (!var_7);
                var_27 = (min(var_27, (((!((((180 && 52780) ? (var_13 / var_10) : 34504))))))));
            }
        }
    }
    var_28 = (min(1, (-1 / 63)));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_29 = ((((max((arr_18 [i_5] [i_6] [i_6] [i_7]), 1))) ? ((min(52786, 3414346177))) : var_7));
                    var_30 = ((~((max((arr_15 [i_5] [i_5]), (arr_15 [i_5] [i_6]))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_31 ^= var_17;
        var_32 = ((var_5 ? var_6 : (arr_20 [i_8] [i_8])));
        var_33 = (min(var_33, (((~(((arr_21 [i_8] [i_8]) / 52789)))))));
        var_34 = -919059029;
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_35 &= ((((((arr_13 [i_9] [i_9]) & (arr_14 [i_9])))) | (((-(var_14 < -856781854))))));
        var_36 = -7462732091570225191;
        var_37 = 282430027424568786;
    }
    #pragma endscop
}
