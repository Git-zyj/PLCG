/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (((((var_7 ? (arr_4 [i_1]) : var_13)) <= ((var_11 ? (arr_1 [i_1] [i_0]) : var_8)))) ? var_5 : (max((arr_1 [i_0] [i_0 + 2]), (arr_6 [i_0] [i_0 + 1] [i_0 + 3]))));
                var_15 = (((var_10 != ((~(arr_1 [i_0] [i_1]))))) ? (arr_2 [i_0]) : var_5);

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_16 = (min(var_16, -1115857883));
                    var_17 = ((arr_0 [i_0]) ? var_12 : var_3);
                }
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    var_18 = (min(var_18, 1546302367));
                    var_19 = (max(var_19, (arr_10 [i_0 - 1] [i_0] [i_0] [i_0])));
                    var_20 -= ((min((max(-561645280, var_2)), ((-16617 ? var_8 : 89049936)))) / var_4);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            {
                var_21 ^= max((((730310272 ? -1115857883 : 124))), (max((arr_1 [i_4] [i_5 - 1]), (arr_2 [i_4]))));
                var_22 = arr_8 [i_4] [i_4] [i_4] [i_4];
                var_23 = ((var_5 != (!-1628107294)));
            }
        }
    }
    var_24 = ((((((var_9 | var_13) ? var_7 : var_10))) ? (min((var_8 / var_13), ((var_3 ? var_7 : var_3)))) : (!var_12)));
    var_25 = var_7;
    #pragma endscop
}
