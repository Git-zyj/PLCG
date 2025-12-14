/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (max(var_13, var_10));
                var_14 = (max((arr_1 [i_0]), -8));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = ((-((70 ? (((var_8 ? (arr_7 [i_1] [i_0] [i_0] [i_1]) : (arr_10 [i_0] [4] [4] [3] [i_3] [i_4])))) : (min((arr_6 [i_0] [i_0] [i_2] [19]), 4294967295))))));
                                var_16 = (min(var_16, (((((min(242, ((var_3 ? var_0 : -26915))))) || ((((var_1 == 1564258285) ? (((~(arr_7 [i_4] [8] [8] [i_0])))) : var_12))))))));
                                arr_12 [20] [i_0] [i_0] [i_2] [i_3] [i_4] = (((var_5 < var_7) << 11));
                                var_17 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = (min(var_19, var_8));
    #pragma endscop
}
