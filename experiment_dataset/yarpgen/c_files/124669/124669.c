/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 -= ((~(((arr_5 [i_1 - 1]) + ((min(1, 1)))))));
                arr_6 [i_0] [i_1 - 1] [10] = (((!((min(var_14, (arr_5 [i_0])))))));
                var_18 = (min((((((((arr_5 [i_0]) * (arr_2 [17] [i_1 - 1])))) ? (arr_0 [i_1 - 1] [i_1 - 1]) : ((var_2 ? (arr_0 [i_0] [i_0]) : var_16))))), (min((arr_2 [1] [i_1]), ((1 ? var_5 : (arr_3 [4])))))));
                arr_7 [i_1] = (max((arr_5 [i_0]), ((~(max(4, 1))))));
                var_19 = ((-(((arr_0 [i_1 - 1] [i_1 - 1]) ? 1 : 123))));
            }
        }
    }
    var_20 = var_13;
    var_21 = var_15;
    #pragma endscop
}
