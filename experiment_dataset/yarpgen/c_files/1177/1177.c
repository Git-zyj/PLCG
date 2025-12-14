/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((-(((var_12 && (((var_11 ? var_9 : var_0))))))));
    var_21 = (max(var_21, -12370821476938257801));
    var_22 = (!var_8);
    var_23 ^= (((var_16 != var_12) ? ((-26 ? (((1 ? var_9 : -85))) : (max(var_11, -85)))) : (((((~var_17) > ((var_8 ? -90 : var_16))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                var_24 = var_7;
                                var_25 ^= ((((max((arr_11 [i_0] [i_1] [18] [i_3] [i_4 - 1]), var_2))) ? ((((((arr_6 [i_3]) == var_4))))) : (((min(1, var_11)) | ((var_0 ? 3670532652454011970 : (arr_13 [i_2])))))));
                            }

                            for (int i_5 = 2; i_5 < 17;i_5 += 1)
                            {
                                var_26 = ((6075922596771293814 ? var_6 : var_17));
                                var_27 ^= (min((((6087246707428506672 ? var_18 : var_8))), var_4));
                            }
                            var_28 = (min(((-7941126282225311624 ? (arr_7 [i_0] [i_0]) : (~-123))), (max(-301192645, var_10))));
                            var_29 = (((232 != 1783400350) ? (max(-6087246707428506672, 30675)) : ((max(((var_2 ? var_6 : (arr_4 [i_0]))), 16)))));
                        }
                    }
                }
                var_30 = ((~((~((var_1 ? var_3 : var_7))))));
            }
        }
    }
    #pragma endscop
}
