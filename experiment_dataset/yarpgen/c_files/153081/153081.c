/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max((((max(0, (arr_2 [i_0 - 3] [i_0]))))), (((var_1 == 0) * var_6))));
                arr_7 [i_0] = var_12;
                arr_8 [i_0] [i_0] = (min((((arr_5 [i_1 + 1] [i_1 + 1]) ? var_6 : 11248)), var_6));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_15 [i_2] = (((var_14 <= (max(18446744073709551615, (-9223372036854775807 - 1))))));
                arr_16 [i_3] [i_2] = (min((~-1808721599), ((min((arr_14 [i_3]), var_7)))));
                arr_17 [i_2] [i_2] [i_2] = (((((-48453 - ((min(var_5, var_5)))))) ? var_5 : (min(var_16, 9223372036854775807))));
            }
        }
    }
    var_17 = ((((((17154712737375937735 ? -15 : 0)))) ? ((1 ? 0 : 0)) : -var_0));
    #pragma endscop
}
