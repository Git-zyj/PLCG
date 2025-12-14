/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (min((min((var_9 || var_17), (max(var_17, var_10)))), var_16));
    var_20 = (-(max((min(1487497771139665379, 1250876879213876760)), 221)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_21 ^= (((((arr_0 [1] [i_0]) ? -22 : (max(var_3, -7136)))) < ((max((~2130706432), (var_1 && 3656664177769621783))))));
                    var_22 = ((((arr_3 [i_2 + 1]) == (var_1 == var_11))));
                    arr_8 [1] [1] = ((((((((~(arr_7 [i_2] [i_0] [i_0] [i_0]))) == 66)))) < (min(((max((arr_6 [i_2]), (arr_3 [i_1])))), (min((arr_5 [i_2 + 1]), var_1))))));
                    var_23 &= ((!(((var_4 ? (arr_7 [i_2 + 1] [i_1] [7] [i_2 + 1]) : (arr_2 [i_2 + 1]))))));
                }
            }
        }
    }
    var_24 += ((((!(var_6 || var_14))) ? var_13 : (((7129 ? (((min(var_13, var_13)))) : var_12)))));
    #pragma endscop
}
