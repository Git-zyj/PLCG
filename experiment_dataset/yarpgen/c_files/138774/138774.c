/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = 192;
                var_17 = ((~1413043084) ? (max((min(var_5, 511)), (arr_2 [i_1] [1] [i_0]))) : ((min((~1965175358), (arr_2 [i_0] [i_1] [i_0])))));
            }
        }
    }
    var_18 = var_10;
    var_19 = ((!(((var_2 ? var_7 : var_0)))));

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_20 = (((((arr_4 [i_2]) ? (arr_6 [i_2] [i_2]) : 13049)) ^ var_4));
        var_21 = var_9;
        arr_8 [i_2] = (((((((arr_7 [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : var_9)) ^ (~-13050))) != ((((((max((arr_6 [i_2] [i_2]), 2543)))) == (min(41914, var_0)))))));
        var_22 &= ((((min(-21378, -13050))) ? (min((arr_5 [i_2] [i_2]), 1243383583)) : (arr_5 [i_2] [i_2])));
    }
    var_23 = (min(var_23, var_7));
    #pragma endscop
}
