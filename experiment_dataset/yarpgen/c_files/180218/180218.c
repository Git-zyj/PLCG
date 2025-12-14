/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (((((~(var_6 | var_10)))) || (arr_3 [i_0] [i_0 - 3] [i_0])));
                var_14 = max(((4611686018360279040 ? ((var_5 ? 1475320160 : var_0)) : (((var_3 << (((arr_2 [i_0] [i_1]) + 136))))))), ((((arr_3 [i_0] [i_0] [i_0 + 1]) ? var_7 : var_6))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_15 = (((var_2 > var_6) >= ((((((arr_9 [i_4] [i_4]) ? (arr_5 [i_3]) : (arr_4 [i_4])))) ? -2819647136 : 12645203488486330388))));
                    var_16 = (max((min((max(var_11, var_11)), ((max(55320, (arr_9 [i_2] [i_4])))))), (((1 ? ((max(var_4, var_4))) : ((4095 >> (var_3 - 130))))))));
                }
            }
        }
    }
    var_17 = (max((!1), (((!1) ? var_12 : var_10))));
    var_18 = var_4;
    var_19 |= (min(((((min(var_3, 31))) ? var_12 : var_6)), 31));
    #pragma endscop
}
