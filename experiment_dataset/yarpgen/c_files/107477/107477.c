/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((~(61320 == 69)));
                arr_7 [1] [i_1] = (((((-((61320 ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_0])))))) ? (((((((arr_0 [i_0]) & (arr_3 [12] [i_1])))) || (arr_5 [i_1] [i_1] [15])))) : (((-30190 % 61317) ? (!19596) : var_17))));
                arr_8 [13] [9] = ((-(+-4323455642275676160)));
            }
        }
    }
    var_20 += -3039368107;
    var_21 = ((+((var_13 ? (var_2 - var_2) : (130 + 127)))));
    var_22 = var_6;
    var_23 = ((16384 < ((~(max(1, -127))))));
    #pragma endscop
}
