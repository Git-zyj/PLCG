/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (((arr_3 [i_0] [i_0]) ? (((((8846472726577273760 ? var_9 : var_3)) == ((var_7 ? var_1 : (arr_7 [i_0] [i_1] [i_2])))))) : ((~(arr_3 [i_2] [i_0])))));
                    var_18 -= ((((min((3429680540 * var_2), ((min((arr_0 [i_0] [i_1]), 60358)))))) ? ((+(((arr_3 [i_0] [i_0]) ? var_0 : var_16)))) : (((~((var_9 ? var_2 : 5150)))))));
                    var_19 -= ((((((((arr_3 [19] [i_1]) ? 4082434909 : var_3))))) / ((min(var_0, (arr_6 [i_0] [i_1] [i_1]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_20 = var_5;
                    var_21 = (((((~((((arr_6 [i_3 + 1] [i_3] [i_5]) > (arr_2 [i_3 - 1] [i_4]))))))) ? (min((((arr_13 [i_3 + 1] [2] [i_4] [i_3]) ? (arr_6 [i_3] [i_3 - 1] [i_3 - 1]) : (arr_12 [i_3 + 1] [i_3 + 1] [i_5]))), (!var_14))) : (arr_5 [i_3] [i_3])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_21 [i_3 + 1] [i_3 + 1] [i_5] [i_6] [i_3] = (((-(var_7 + var_9))));
                                arr_22 [i_3] [i_6] [i_5] [i_4] [i_3] = ((~(((((16 ? 141 : 41))) ? var_7 : (min(var_11, var_10))))));
                                var_22 = var_9;
                                var_23 = (((((max((arr_19 [i_7] [i_6] [i_5] [i_4] [i_4] [i_3 - 1] [i_3]), (arr_4 [i_3] [i_5] [i_6]))))) ? (~var_5) : -25));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = 212532375;
    #pragma endscop
}
