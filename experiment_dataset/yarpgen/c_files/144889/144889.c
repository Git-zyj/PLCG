/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((~var_12) ? var_14 : ((var_12 ? -91 : var_15)))) >= 130))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 += (min(var_5, ((min((!1), ((!(arr_0 [i_0]))))))));
                                arr_13 [i_1] [i_1] [i_2] [i_0 - 2] [i_1] = (-44 ? (var_6 * 59650) : ((((max(var_11, 5885))) + ((min(var_12, 90))))));
                                arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_1] = ((((!(arr_5 [i_1]))) ? (min((((arr_2 [i_0]) ? var_2 : (arr_12 [i_4]))), (!var_10))) : (arr_8 [i_2 + 1] [i_1] [i_2])));
                            }
                        }
                    }
                    var_21 = (~-1);
                }
            }
        }
    }
    var_22 = (max(((var_7 + (~var_6))), 0));
    #pragma endscop
}
