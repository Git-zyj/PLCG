/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((-var_7 - ((var_2 ? var_6 : var_2)))), (((!255) ? var_9 : ((min(var_2, var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (min((arr_6 [i_1] [i_1] [i_2]), (arr_6 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = (i_2 % 2 == 0) ? ((((var_5 + 2147483647) >> (((arr_10 [i_0] [i_2] [i_0]) - 109))))) : ((((var_5 + 2147483647) >> (((((arr_10 [i_0] [i_2] [i_0]) - 109)) + 36)))));
                                var_16 = ((((((211 + (arr_0 [i_0] [i_0]))))) ? ((max(((min((arr_6 [i_0] [i_1] [i_2]), 0))), var_6))) : 1));
                                var_17 = (((arr_4 [i_0]) && (arr_0 [i_3 + 1] [i_3])));
                                var_18 = (max((((arr_9 [i_3 + 1] [i_3] [i_3] [i_3 + 1]) + (arr_11 [i_0] [i_1] [i_2] [i_2] [i_4]))), (arr_5 [i_4] [i_3])));
                            }
                        }
                    }
                    var_19 = (((((((max(211, 255))) == (arr_2 [i_0] [i_0])))) >= ((+((((arr_6 [i_0] [i_0] [i_2]) >= var_2)))))));
                    var_20 = (max((6776 - 1), (((arr_10 [i_0] [i_2] [i_2]) - 0))));
                }
            }
        }
    }
    #pragma endscop
}
