/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 -= (min(-1112878167, -1687457533));
                                var_15 = (((-9223372036854775807 - 1) - ((min(89, -909)))));
                                var_16 = (arr_6 [i_0] [i_1] [i_2]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_2 - 2] = (arr_10 [i_2] [i_1] [i_2 - 1] [i_2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((1333058614 ? var_12 : 25) == ((min((arr_5 [i_0]), var_6))))))));
                                var_17 = ((((((((arr_9 [i_0] [i_1] [i_1] [i_2 + 1] [i_5] [i_5] [i_2 + 1]) ? (arr_7 [i_0] [i_0] [21] [i_5] [i_6]) : var_5)) | (arr_5 [i_0])))) ? (((((max(var_7, -4))) ? ((max(var_13, 2))) : 19299))) : (max((max((arr_16 [i_0] [i_2]), (arr_18 [i_0] [i_1] [i_5] [i_5] [i_2]))), 10362))));
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_6] = (max((~var_10), (min(14330, ((max((arr_8 [i_0] [i_1] [i_2] [i_5] [i_1]), var_10)))))));
                                var_18 = ((+(max((arr_10 [i_0] [i_6] [i_2] [i_0] [i_0]), ((min((arr_11 [i_0] [i_1] [i_2] [11] [i_6] [i_6]), 4)))))));
                            }
                        }
                    }
                    var_19 = (min(((min((((arr_4 [i_1]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [12]) : var_0)), (var_6 <= 51206)))), var_6));
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = (!var_7);
    #pragma endscop
}
