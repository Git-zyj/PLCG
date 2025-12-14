/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    var_11 -= (((((12963912289304753931 == 12367724609131415900) ^ (~-3009390403804694117))) | 65535));
                    var_12 = 43709;
                    arr_7 [i_2] [i_1] [i_0] = ((((min(57874, 3009390403804694116))) && (!9)));
                    var_13 = (min((arr_1 [i_1 + 2] [i_1]), (arr_1 [i_0] [i_0])));
                    arr_8 [i_1] [4] = (((4294967287 / (((min((arr_4 [i_0] [i_0] [i_0]), var_6)))))) * 61280);
                }
                var_14 = (((arr_2 [i_0] [i_1 + 2]) ? (var_2 * 63653) : (((37809 ? 17 : var_5)))));
                var_15 = (max(((-(arr_5 [i_1 - 1] [i_1]))), ((max((arr_5 [7] [i_1 + 2]), (max(var_5, 9)))))));
                arr_9 [i_0] [i_0] [i_1] = 39199;
            }
        }
    }
    var_16 = ((((max((65527 != 12963912289304753920), 9))) ? (((max(37297, var_4)) + (var_0 / var_4))) : var_4));
    #pragma endscop
}
