/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min((((!((min(127, var_8)))))), (((var_3 ? var_2 : var_13))))))));
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 *= ((~(((arr_3 [i_0 - 1] [i_0 - 1]) ? var_1 : var_8))));
                var_18 = (min((min(var_6, (((129 ? 61468 : (arr_0 [i_0 + 1])))))), (arr_3 [i_0] [i_0])));
                arr_4 [i_0] [i_1] [i_1] = ((min((((var_5 ? var_3 : var_7))), var_8)));
            }
        }
    }
    var_19 -= 129;
    var_20 = ((((min(var_6, (!149)))) ? (var_6 + var_9) : ((var_14 ? var_0 : ((var_9 ? var_3 : var_4))))));
    #pragma endscop
}
