/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (!15464);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = -var_3;
                                arr_15 [i_0] [i_1] [1] |= 41097;
                                var_14 &= (arr_0 [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [10] [10] [12] [6] |= ((34488 ? var_11 : (arr_8 [i_6 - 1] [i_0 + 2] [i_1 - 1])));
                                arr_21 [i_0] [i_0] [i_0] [i_0] = ((45 ? 17314 : 1));
                                arr_22 [i_0] = ((1015808 ? ((-(arr_12 [i_0] [i_1] [i_1] [15] [i_2] [i_1] [i_1]))) : (((-(!8179639652761633567))))));
                                var_15 = (((((~(((arr_7 [i_0]) ? 58573 : 1383692334))))) ? ((-(arr_14 [i_0]))) : 44125));
                                arr_23 [i_0] [14] [i_2] [18] [i_6] |= var_0;
                            }
                        }
                    }
                    var_16 = ((~(~0)));
                }
                var_17 = var_7;
                var_18 = ((-var_2 * (((arr_18 [i_0 + 2] [i_0 - 1] [i_1 - 1] [i_0]) ? (1508926544 ^ -1015831) : (~-2147483640)))));
            }
        }
    }
    var_19 = ((-88 ? 7364560283008489779 : (!60340)));
    var_20 = (min((min((!var_6), (min(30930, 44122)))), var_11));
    #pragma endscop
}
