/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((-(((-32767 - 1) ? (max(-1, -7160956200224196842)) : (0 != 1341170017929510449)))));
                var_14 = (min(var_14, (min((((-8973522220828700354 ? 106 : 1))), 17105574055780041170))));
                var_15 = ((((((arr_0 [i_1 - 2]) >> var_6))) ? (!-8973522220828700370) : var_3));
            }
        }
    }
    var_16 = (max(var_16, var_3));

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = ((((max((var_6 ^ var_0), (-8973522220828700354 | 8973522220828700349)))) ? (~106) : ((var_10 ? (arr_6 [i_2]) : (((min(var_0, var_1))))))));
        arr_10 [8] &= var_2;
        arr_11 [5] [i_2] = (((~var_10) / var_5));
        arr_12 [i_2] [i_2] = var_9;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = ((!(((((((arr_13 [i_3]) > (arr_13 [i_3])))) | (max((arr_13 [i_3]), (arr_13 [i_3]))))))));
        var_17 = (min(var_17, (((~((max((arr_14 [i_3]), (arr_13 [i_3])))))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_18 [i_4] = var_2;
        var_18 = (min(var_18, (((((var_0 ? (min(-8973522220828700362, -8973522220828700344)) : (arr_16 [12])))) ^ ((var_10 + (min(var_4, var_9))))))));
    }
    var_19 = ((((min((-465668922408164378 != 167), ((var_11 ? var_8 : var_9))))) ? (!var_0) : var_6));
    #pragma endscop
}
