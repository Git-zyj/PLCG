/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_7 >> (var_5 + 1512047813)))) < ((var_11 ? var_5 : var_2)))) ? (var_0 - var_4) : (var_18 * -4294967295)));
    var_20 = var_5;
    var_21 -= var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((((~(~4063833454))) ^ var_12));
                    arr_9 [i_0] [6] [i_2] [i_0] = ((-var_13 ? ((min((arr_3 [i_0] [i_1] [i_2 + 1]), 1))) : (arr_6 [i_2 + 2] [23] [23] [i_2 + 2])));
                    arr_10 [i_2] [i_1] [i_2 + 1] = ((~((((max(var_17, 389932579))) ? ((((arr_5 [1]) + var_5))) : (min(2590969832, var_13))))));
                }
            }
        }
    }
    var_22 = 1548915922;
    #pragma endscop
}
