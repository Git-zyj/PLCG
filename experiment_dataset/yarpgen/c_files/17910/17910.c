/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (arr_1 [i_0]);
                arr_6 [i_0] = ((((((max((arr_0 [i_0]), (arr_2 [i_1])))) ? var_5 : (var_0 >> var_14))) | ((((var_13 <= var_2) ? ((min(var_1, var_1))) : var_18)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_20 = (min(var_20, (((0 > (((!4622506864119618177) & ((13585358634550793343 * (arr_12 [12] [i_3 - 1]))))))))));
                var_21 = var_2;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 = var_6;
                                var_23 = ((((max((((1 ? (arr_5 [i_3] [1] [1]) : var_14))), (((arr_9 [i_2] [i_3] [i_3]) ^ var_14))))) ? (((arr_13 [i_2] [i_2] [i_2]) ? (~var_0) : ((((arr_12 [i_3] [i_3]) ? var_17 : var_3))))) : (arr_1 [i_5 - 1])));
                                var_24 += 1;
                                var_25 ^= ((-(max((arr_0 [i_3 - 1]), var_7))));
                                var_26 = (min(var_26, (((var_14 & var_16) ? 13585358634550793343 : (((~((min(var_14, var_11))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
