/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [12] [i_1] [i_1] = -var_2;
                arr_6 [i_0] [i_0] [i_0] = (min((min((var_3 * 43198), var_3)), ((-11540 ? var_6 : (!var_15)))));
                arr_7 [i_0] = (min((var_10 > 36913), ((var_2 <= ((max((arr_3 [7]), var_0)))))));
                arr_8 [2] = ((-(((arr_1 [i_1] [i_0]) ? (arr_1 [i_0] [i_1]) : var_7))));
            }
        }
    }
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] = (~((min(var_13, (min(var_10, (arr_11 [i_2] [i_3] [i_2])))))));
                var_19 *= ((!((-var_5 <= (min(var_1, var_2))))));
            }
        }
    }
    var_20 += var_6;
    #pragma endscop
}
