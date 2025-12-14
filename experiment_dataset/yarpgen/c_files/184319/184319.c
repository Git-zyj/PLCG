/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_17, ((~(min(var_14, var_3))))));
    var_21 = ((var_7 ? var_6 : (((15726852445428829211 >> (var_3 + 6027958159642044615))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_22 += var_0;
                arr_6 [i_0] [i_0] = (((((((var_7 ? (arr_2 [i_1] [i_0 - 2]) : var_16))) ? ((18446744073709551615 | (arr_1 [i_0 + 1]))) : ((var_2 ? var_14 : var_5)))) ^ ((((min(1040187392, var_1)) ^ ((((arr_4 [i_0] [i_1]) ? (arr_4 [24] [i_1]) : 7450))))))));
                arr_7 [i_0] [i_0] = -26563;
                var_23 = ((arr_4 [i_0] [i_0]) ? (((((-(arr_4 [i_0] [i_1])))) ? ((7200 ? var_0 : (arr_0 [i_0]))) : (((var_0 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0])))))) : (min((arr_2 [i_0] [2]), (((!(arr_1 [i_0])))))));
                var_24 = (var_14 % var_0);
            }
        }
    }
    #pragma endscop
}
