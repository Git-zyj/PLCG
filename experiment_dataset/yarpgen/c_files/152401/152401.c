/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_12 ? var_4 : var_6)) == ((var_3 ? var_5 : var_15))))) != var_7));
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 = ((-((-(arr_3 [i_1 - 1] [i_1 - 3] [i_1 - 3])))));
                            arr_8 [i_0] [i_1] [i_2] [11] = (arr_0 [3] [14]);
                        }
                    }
                }
                var_19 = var_12;
                var_20 = (arr_3 [22] [i_1] [i_1]);
                var_21 = ((((((arr_1 [i_0]) ? (((arr_7 [i_0] [i_1] [1] [1]) ? (arr_3 [i_1] [i_1] [i_0]) : (arr_6 [i_1] [2] [i_0] [17]))) : ((45 ? 45 : var_8))))) ? ((-(!var_10))) : (((((var_10 | (arr_4 [i_0])))) ? ((max(39, 219))) : (arr_3 [i_1 - 4] [i_1 + 1] [i_1 - 1])))));
                var_22 -= var_7;
            }
        }
    }

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_11 [i_4] [i_4] = ((((min((arr_6 [18] [i_4] [i_4] [i_4]), 199))) & ((var_11 ^ (arr_6 [6] [i_4] [i_4] [i_4])))));
        var_23 = (arr_0 [i_4] [i_4]);
    }
    #pragma endscop
}
