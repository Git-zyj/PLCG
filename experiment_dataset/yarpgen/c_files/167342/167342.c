/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 -= ((var_2 ? var_5 : (arr_1 [i_0])));
        var_13 ^= (max(((var_1 ? (arr_1 [i_0]) : (arr_1 [i_0]))), var_1));
        arr_4 [i_0] [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_9 [0] = (((((arr_5 [i_1]) && (((1725743381 ? var_2 : var_3))))) ? (!-1725743381) : (!-673239286004838722)));
        arr_10 [i_1] [i_1] = var_0;
    }
    var_14 *= (((((min(-1725743381, 65)))) * (((var_2 ? var_3 : var_10)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_15 = ((var_10 ? 95 : var_0));
                arr_18 [i_2] &= (((((((min(var_4, var_9))) ? 25 : ((min(var_1, 24350)))))) ? (((((19413664 ? var_3 : var_8))) ? (max(var_4, var_0)) : (arr_11 [i_3]))) : ((((arr_11 [i_2]) ? var_5 : (((arr_16 [i_2] [0] [i_2]) ? (arr_14 [i_2] [i_3]) : -1662767906)))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_21 [i_4] = var_8;
        arr_22 [i_4] = (((((~((1725743381 ? var_6 : 1725743380))))) ? ((min((arr_15 [i_4]), (arr_1 [i_4])))) : ((24349 ? (var_7 | 2402080425) : 1725743373))));
        arr_23 [i_4] = ((((min(11621822407974339865, var_4))) ? ((((var_11 ? var_10 : var_8)) * (-95 > var_0))) : (((var_7 ? var_11 : (((arr_14 [i_4] [i_4]) ? var_5 : var_4)))))));
        arr_24 [i_4] = ((((((arr_6 [i_4]) ? (var_2 & var_10) : (((min(205, var_9))))))) ? ((((((var_10 ? var_9 : var_5))) ? 58441 : (~19413664)))) : (((((var_10 ? 99 : 6867))) ? (var_7 >> 12) : (arr_5 [8])))));
    }
    #pragma endscop
}
