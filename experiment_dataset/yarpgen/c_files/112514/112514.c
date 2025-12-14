/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_2 ^ var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = (max((max(-755628788, 12860)), (max((arr_12 [i_1] [i_1] [i_1]), (arr_12 [i_0] [i_1] [i_4])))));
                                arr_14 [i_0] [i_1] [9] [i_3] [i_4] = var_6;
                                arr_15 [i_4] [i_1] [i_2] [17] [i_4] [i_3] [i_3] = (max(1436590609, (~12428055216167877057)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_14 = var_3;
                        var_15 = ((+((-var_9 ? ((max((arr_6 [i_2]), -1436590609))) : (max((arr_4 [i_0] [5] [i_1]), 857237677))))));
                    }
                    var_16 = (~0);
                }
            }
        }
    }
    var_17 = ((((((max(40, var_9))) - var_3)) - 15407290505771771112));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                {
                    arr_27 [i_6] [i_7] [i_7] = ((var_2 ? (((var_10 < 233) ? ((max(-1436590614, var_8))) : (max((arr_21 [i_6] [i_6]), 368121908)))) : var_2));
                    arr_28 [i_7] [i_7] [i_7] = (arr_26 [i_7] [i_8]);
                    arr_29 [i_7] = (((25238 > 3632181010) ? 574876314 : ((((var_10 > (-2147483647 - 1)))))));
                    arr_30 [i_6] [i_7] [i_7] = ((((((((((arr_23 [i_7] [i_7]) ? var_11 : (arr_22 [i_6] [i_6] [i_6])))) != (arr_22 [i_8] [i_8] [i_8]))))) > (((!var_5) ? ((((arr_19 [i_6]) ? -1436590609 : 307785648))) : (max(7832709847573137554, (arr_26 [i_6] [i_8])))))));
                }
            }
        }
    }
    var_18 = (max((((var_1 > ((var_1 ? var_2 : var_10))))), (max((-7849 > var_9), var_4))));
    #pragma endscop
}
