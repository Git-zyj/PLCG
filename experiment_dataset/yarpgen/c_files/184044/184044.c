/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = 465398807;
    var_16 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = (max(((((max((arr_4 [10] [i_1]), var_4))) ? var_12 : -3)), ((((-9223372036854775800 ? -117 : var_9))))));
                    var_18 = (min(((((arr_0 [i_2 - 2] [i_2]) > (arr_2 [i_2] [i_0])))), (arr_1 [i_1])));
                    var_19 = (min(var_19, (((9223372036854775807 ? (((0 * 1) ? 4503599627370495 : ((var_6 ? (arr_1 [i_1]) : 2691099682)))) : (max((arr_1 [i_2 - 2]), 47013)))))));
                    var_20 = (max((((+((min((arr_2 [i_1] [10]), var_10)))))), (((127 < (arr_0 [i_0] [i_2 + 1]))))));
                }
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
