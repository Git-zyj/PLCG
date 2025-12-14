/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 += ((!((max(1, var_1)))));
    var_18 = ((+(((var_3 + var_11) ? ((max(var_11, var_2))) : var_12))));
    var_19 = ((52159 ^ (max(var_4, ((min(0, var_10)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((~(max((((arr_1 [i_2]) | (arr_5 [i_0] [i_0] [i_0]))), (arr_5 [i_0] [i_1 - 1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((~(arr_6 [i_0] [i_1] [i_2] [6])))));
                                var_22 = (max(var_22, (min(var_2, ((max((((!(arr_12 [6] [i_1] [i_2] [i_2] [i_4])))), (max((arr_0 [i_0] [i_0]), var_10)))))))));
                            }
                        }
                    }
                    var_23 = ((((~(arr_7 [i_0 - 2] [i_2] [i_1] [i_2]))) & ((min((arr_0 [i_1] [i_0]), ((~(arr_4 [1] [5]))))))));
                }
            }
        }
    }
    #pragma endscop
}
