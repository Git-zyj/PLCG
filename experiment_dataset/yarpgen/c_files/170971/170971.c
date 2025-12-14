/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~(((min(1329453775, var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = max(((min(-1329453753, 1329453775))), (max((arr_2 [i_1 - 2]), 0)));
                var_17 = arr_2 [i_0];
                var_18 &= (max(var_1, (max((arr_3 [i_0] [i_1] [i_1 - 1]), (arr_3 [i_0] [i_1] [i_1 + 1])))));
                var_19 -= (~(max((max(var_8, (arr_1 [i_1 - 1]))), (min(var_4, (arr_0 [i_0]))))));
                var_20 += (max((max(var_1, (arr_4 [i_1 - 1] [i_1 - 1]))), (max((arr_3 [i_1 + 1] [i_1] [i_1 - 1]), (arr_4 [i_1 - 2] [i_1 - 2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_21 = (max((arr_6 [i_3 + 1] [i_3 + 2]), (((~((var_14 ? (arr_14 [i_6] [i_4]) : var_9)))))));
                                var_22 = (max((~var_8), (((1 ? var_11 : (arr_6 [i_5] [i_2]))))));
                                var_23 = (min(var_23, ((((min((arr_20 [i_2] [i_6] [i_3 + 1] [i_3] [i_3 + 2] [i_3 + 1]), (arr_20 [i_3] [i_2] [i_3 + 2] [18] [i_3 - 1] [i_3 - 1])))) ? (~13191227895792657457) : (max((((var_0 ? var_7 : var_11))), (arr_15 [i_3] [13] [i_6])))))));
                            }
                        }
                    }
                }
                var_24 = (max(var_4, ((((max((arr_7 [i_2] [i_2]), (arr_18 [i_3] [i_2] [i_3 + 1])))) ? (((-1329453775 ? 203 : (arr_21 [i_2] [i_2] [i_2] [i_3 + 2])))) : var_8))));
            }
        }
    }
    #pragma endscop
}
