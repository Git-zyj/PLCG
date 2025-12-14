/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 49152;
    var_16 = ((max(1, 1)) && 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_5 [i_0] [i_1]);
                var_17 = (var_11 / 162);
                var_18 = (arr_3 [i_0] [i_0] [i_1]);
                var_19 &= (((((arr_2 [i_0]) <= var_10)) ? ((max(var_11, 1))) : ((((arr_3 [i_1] [i_1] [2]) >> ((var_10 ? var_1 : var_12)))))));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
