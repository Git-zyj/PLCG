/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_4, ((var_10 ? (var_11 | 2359215158417666900) : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_15 = ((var_11 ? (arr_0 [i_0 + 1]) : var_6));
                    var_16 += ((3145752663 ? ((var_5 & (arr_4 [i_0] [i_0] [20]))) : var_6));
                    var_17 = (((!var_4) ? ((0 ? 166 : 18911)) : (!18)));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((min(var_7, 976615862))))));

                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 20;i_5 += 1)
                            {
                                var_19 = ((var_6 && (((133 ? 8 : 1)))));
                                var_20 = (max(var_20, 94));
                            }
                            arr_15 [i_0] [i_0] [i_1] [i_1] [i_0] [i_4 - 1] = (133 % 129);
                        }
                    }
                }
                var_21 ^= ((-8736556744953873005 ? 126 : -2129255424619719917));
            }
        }
    }
    #pragma endscop
}
