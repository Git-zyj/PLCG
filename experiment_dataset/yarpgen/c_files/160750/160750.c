/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((max((((-122680277 ^ 782338632) ? (max(2810681976, 782338642)) : (((var_8 ? (arr_0 [i_1 + 2] [1]) : (arr_2 [8] [i_1] [8])))))), (((max((arr_3 [5] [i_1] [i_1]), -6)) >> ((((arr_3 [i_2] [i_1 + 1] [9]) < 782338642))))))))));
                    var_21 = (max(var_21, ((((max(var_14, ((var_19 ? var_4 : var_18)))) & (max(782338632, -782338632)))))));
                    arr_6 [i_2] [i_0] [i_0] [i_0] = (((var_15 - var_5) >> (-782338643 + 782338659)));
                }
            }
        }
    }
    var_22 = ((((((var_13 > var_12) ? -782338641 : ((max(var_5, var_2)))))) ? ((((var_6 ? var_11 : var_6)) ^ ((var_0 ? var_10 : var_2)))) : var_15));
    #pragma endscop
}
