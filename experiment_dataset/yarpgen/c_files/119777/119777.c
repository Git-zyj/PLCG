/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = var_0;
                var_17 += (min((((arr_1 [i_1]) ? (arr_1 [i_0]) : 4294967295)), (((var_6 ? 0 : 32767)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_18 = var_13;
                arr_12 [i_2] = (((~var_4) ? (((arr_0 [i_2] [i_2]) ? 2577073712 : (max(489614885, -30334)))) : ((min(((~(arr_2 [i_2]))), (-32767 - 1))))));
                var_19 = (min(var_19, (((max((arr_11 [i_2] [i_3] [2]), 144097595889811456))))));
                arr_13 [i_2] [i_3] [i_2] = ((((arr_7 [i_2]) ? 104 : var_7)));
            }
        }
    }
    var_20 = ((((((((var_9 >> (172 - 134)))) ? var_12 : (~var_11)))) ? (min((min(var_9, var_5)), 11)) : ((var_14 & (max(-144097595889811459, 22359))))));
    var_21 *= var_14;
    var_22 = var_3;
    #pragma endscop
}
