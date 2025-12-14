/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((2147483647 && ((max(var_13, (arr_7 [i_0] [i_1 - 1] [i_1 + 1] [i_2]))))));
                    arr_9 [i_1] [i_1] [i_2] [i_0] = (arr_7 [i_1 - 1] [i_1] [i_1 + 1] [i_1]);
                    arr_10 [i_2] [i_0] = (min((arr_2 [i_2]), (((((9179395046436684593 ? var_4 : (arr_6 [i_0] [i_2] [i_1])))) ? -9223372036854775807 : (arr_4 [i_0])))));
                    arr_11 [i_0] [i_1] = ((1 == (arr_6 [i_0] [i_1 - 1] [i_2])));
                }
            }
        }
    }
    var_21 = (((((~((155 ? (-9223372036854775807 - 1) : -144115188075855872))))) ? ((var_7 ? 61483 : ((var_15 ? var_3 : var_15)))) : (max(((var_5 ? (-9223372036854775807 - 1) : 1)), ((-895474568258211576 ? 9223372036854775807 : 9223372036854775807))))));
    var_22 = (9223372036854775807 ? (~-604380058) : 4396972769280);
    #pragma endscop
}
