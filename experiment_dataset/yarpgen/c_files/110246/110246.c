/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((var_13 ? var_5 : ((max(1, 0))))), ((var_8 + ((max(var_6, var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (!var_8)));
                arr_5 [i_0 + 1] [i_0] = var_5;
                var_17 = (((((var_14 ? (2483142810970619988 != var_11) : ((0 << (var_12 - 191)))))) ? (((var_8 ? var_8 : 2134589040344402436))) : (((~(arr_1 [i_0] [i_1]))))));
                var_18 = ((((1 % (arr_3 [i_0])))));
            }
        }
    }
    var_19 |= (~var_6);
    var_20 = (~((var_11 ? var_0 : var_8)));
    var_21 = var_9;
    #pragma endscop
}
