/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((~(min(var_6, var_10)))) & (min(var_0, (((var_14 ? var_15 : var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = (((~(33794 ^ var_14))) <= (arr_3 [i_0]));
                arr_5 [i_0] [i_0] = (31726 % 31726);
                var_19 = (max(var_19, 2921543899));
                var_20 += (((arr_0 [8]) ? var_8 : ((((33794 & var_1) ? var_6 : ((0 ? var_1 : (arr_3 [i_0]))))))));
            }
        }
    }
    var_21 += var_17;
    var_22 |= (((min(-31726, (var_3 ^ var_10))) + ((((var_4 || (21 < 1)))))));
    #pragma endscop
}
