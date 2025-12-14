/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min((((((var_8 ? var_7 : var_6))) ? ((max(-37, var_0))) : var_8)), (((((1 ? var_1 : var_8))) ? (var_8 > var_7) : ((var_8 ? var_8 : var_1)))));
    var_11 = (min((((((var_6 ? var_5 : var_0))) ? ((35383 ? 1 : 3917387464512861328)) : ((var_8 ? var_6 : var_5)))), ((((min(14529356609196690288, var_6)) < -11)))));
    var_12 = (1 - var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 *= var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_2] [i_4] = (min((max((arr_12 [1] [i_1] [i_4] [i_3] [i_4 - 1]), var_2)), (((~(arr_13 [i_0] [6] [i_2] [2] [i_4 - 3]))))));
                                arr_16 [9] = 1;
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] [0] = (~var_7);
                    var_14 += ((var_1 && (14 && -63)));
                }
            }
        }
    }
    #pragma endscop
}
