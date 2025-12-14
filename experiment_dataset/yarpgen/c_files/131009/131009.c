/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((7 ? ((((!var_5) == ((var_1 ? var_0 : 2147483647))))) : var_8));
    var_11 = (min(var_11, ((((min(var_4, var_9))) != var_8))));
    var_12 = (((var_8 / var_2) / ((-((-7 ? var_6 : var_2))))));
    var_13 = (min(var_13, (!var_2)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = ((arr_3 [i_0] [i_1]) || (arr_4 [i_0] [i_1] [i_0]));
                    var_15 = (max(var_15, (arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_0] = 18446744073709551615;
                                var_16 = var_1;
                                var_17 -= ((((~(arr_3 [i_3] [i_3]))) | (arr_0 [14])));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [1] = (var_6 - 1);
                }
            }
        }
        var_18 = (max(var_18, -1170610583168371460));
        var_19 = (max(var_19, (!29567)));
    }
    #pragma endscop
}
