/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((max((var_11 ^ 1), ((max(253, 1)))))) ? ((-((max(1, 1))))) : ((max(var_3, (max(1, 77))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 -= var_19;
                            arr_11 [i_1] [9] [10] [i_1] = (((((min(0, 1))) ? var_11 : var_19)));
                            var_22 = ((((((arr_6 [i_2 + 1] [i_2 + 2] [i_1 + 1] [i_1 + 1]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 - 1])))) - (max((arr_2 [i_1 - 1]), var_7))));
                        }
                    }
                }
                arr_12 [i_1] = 35144;
            }
        }
    }
    var_23 = ((!(((((var_8 ? var_4 : 1)) / 175)))));
    var_24 = (min(var_24, (((!(((var_19 ? (var_14 / var_4) : (min(var_11, var_10))))))))));
    #pragma endscop
}
