/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (0 + 200);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 += var_14;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = min((max(((var_1 ? 1 : 1)), -123)), ((max((-32767 - 1), var_0))));
                                var_20 = ((((((arr_11 [i_0] [i_1] [i_3 + 2] [i_3 + 2]) ? var_5 : (arr_11 [i_0] [9] [i_3 + 2] [i_3 + 2])))) ? ((min(var_14, var_5))) : ((0 ? 1 : 122))));
                                var_21 = ((((max(0, var_3))) / ((((arr_4 [i_0] [i_1]) + ((-3423161102188661923 ? -25389 : var_16)))))));
                            }
                        }
                    }
                }
                var_22 = (max(var_22, (((1 ? 4294967295 : 11)))));
                var_23 = (max(var_23, ((((((((max(var_0, (arr_11 [2] [2] [i_0] [i_0])))) >= ((((arr_3 [i_0]) > var_14))))))) * ((((min(var_10, var_4))) ? ((1 ? var_12 : var_14)) : var_2))))));
                arr_12 [i_1] = ((~(((arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [5]) ? (max(var_12, (arr_3 [i_0]))) : (((var_1 ? var_16 : var_15)))))));
            }
        }
    }
    var_24 = var_13;
    #pragma endscop
}
