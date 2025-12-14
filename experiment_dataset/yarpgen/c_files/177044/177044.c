/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = var_16;
                arr_5 [i_0] = (max((arr_4 [i_0]), (((arr_4 [i_0]) - (arr_4 [i_0])))));
                var_19 = (min(var_5, ((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
                var_20 = ((-(max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
                arr_6 [i_0] [i_0] = (max(((((((-(arr_2 [i_1] [i_0])))) ? (arr_2 [i_1 + 1] [i_0]) : (~var_0)))), (min((((~(arr_4 [i_0])))), (~7165050494712315880)))));
            }
        }
    }
    var_21 = (min(var_21, var_9));
    var_22 = var_0;
    var_23 = var_0;
    #pragma endscop
}
