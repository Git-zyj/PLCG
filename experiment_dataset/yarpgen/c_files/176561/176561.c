/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_2] = ((var_4 ? (((var_3 ? var_3 : var_4))) : ((max((((!(arr_12 [i_4] [i_3] [i_2] [i_1] [i_0])))), var_4)))));
                                var_10 = (arr_3 [i_0] [i_0] [i_0]);
                                var_11 = ((((var_2 ? (arr_0 [i_2]) : (arr_0 [i_0]))) - (((((arr_7 [i_4] [i_3] [i_1]) != (arr_4 [i_2] [i_3])))))));
                                var_12 &= var_2;
                                var_13 *= ((!(arr_4 [i_0] [i_1])));
                            }
                        }
                    }
                }
                var_14 = 21287;
                var_15 = (((((var_5 | (!var_0)))) ? ((((arr_9 [i_0] [i_1]) / ((26408 ? var_5 : var_0))))) : (arr_8 [i_0] [i_0] [i_1] [12] [i_1])));
                var_16 = 2099223427;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_17 = (!15935);
                arr_19 [i_5] [i_6] [i_6] = ((-var_4 + (((arr_5 [i_5] [1] [i_6]) << (var_4 - 7271948739953825159)))));
            }
        }
    }
    var_18 = var_3;
    var_19 += var_0;
    #pragma endscop
}
