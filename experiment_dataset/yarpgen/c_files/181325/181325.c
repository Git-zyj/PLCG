/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = var_7;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] = (((((((max((arr_10 [i_0] [i_0]), -21))) ? -2749371672 : (min(1545595644, 137438953472))))) ? ((((((!(arr_12 [i_0]))))) ^ ((var_10 & (arr_5 [i_0] [i_0] [15]))))) : (arr_10 [i_0] [i_0])));
                            var_12 = (arr_10 [i_0] [i_0]);

                            for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_2 - 1] [i_3] [18] = ((min(25, (arr_0 [i_3 + 3]))));
                                var_13 = 2258173293;
                                arr_17 [i_3] [i_0] [i_2 + 2] [i_0] [i_3] = (arr_14 [i_4] [i_4] [i_3 + 3] [i_2 - 1] [i_1] [i_0]);
                                arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] = (max(((137438953472 ? ((var_10 ? (arr_5 [i_4] [i_3 + 1] [i_2]) : 941868891)) : ((min(230, var_6))))), ((((var_9 ^ var_10) <= (((arr_4 [i_1]) ? var_2 : -137438953473)))))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_14 = 2749371652;
                                arr_21 [i_3] [i_1] [i_3] [i_3] [i_3 + 2] = ((((((((~(arr_19 [i_0] [i_1] [i_3] [i_3] [i_5])))) ? (((arr_14 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 1]) | (arr_0 [i_0]))) : ((min(196, (arr_8 [i_0] [i_0]))))))) ? (max(1545595644, -89)) : -var_0));
                            }
                            var_15 = (min(var_15, var_6));
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((max(var_9, 2179092842383592945)) & (~var_1))) ^ 29));
    #pragma endscop
}
