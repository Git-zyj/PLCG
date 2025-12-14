/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_11));
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = ((min(((max(var_11, 4194303)), (min(18446744073709551615, var_6))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 ^= (((((min(7107356344505058251, (arr_7 [i_4] [i_3] [i_2] [i_2] [0] [0]))))) ? ((((((var_0 ? 2000641395 : 2000641395))) && (((var_9 ? var_16 : 2294325893)))))) : ((var_7 * ((max(var_3, 0)))))));
                                var_22 -= (arr_8 [i_0 - 1] [i_0 + 2] [i_1] [i_2] [i_2] [i_4]);
                                var_23 = (max(((((arr_9 [i_0] [i_0 + 1] [i_1] [i_1] [i_0] [i_0 + 1] [i_4]) ? (arr_9 [i_0 - 1] [i_0 + 2] [i_1] [i_1] [i_2] [i_1] [i_4]) : var_7))), var_6));
                            }
                        }
                    }
                }
                var_24 = ((((var_15 ? 2294325901 : 17863018646717531526)) << (((!(arr_6 [i_0 + 2]))))));
                arr_10 [i_0] [i_0] = ((((min(1086690336303079786, 847791218))) ? (max(var_13, (arr_5 [i_0 - 1] [i_0 - 1]))) : (((max(var_14, (arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
