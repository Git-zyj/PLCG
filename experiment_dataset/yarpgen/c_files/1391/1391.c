/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = (!var_15);
    var_20 = (max(var_9, ((((41 != -31526) * (min(992072122, var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = var_9;
                var_22 = (((((-4419388652186275338 ? -41 : 121))) | (min((arr_3 [i_0]), var_3))));
                var_23 = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_24 = 0;
                            var_25 = var_8;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_26 = -4295924544390620152;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_23 [i_6] = (((((-127 - 1) + 2147483647)) << (((-887763519852084522 + 887763519852084552) - 30))));
                                var_27 = (arr_18 [i_8] [i_7] [i_5] [i_5] [i_4] [i_4]);
                            }
                        }
                    }
                    var_28 = (min(var_28, ((((arr_11 [i_6] [i_5] [i_4]) <= (arr_12 [i_4]))))));
                }
                var_29 = 1;
                arr_24 [i_5] [i_4] [i_4] = arr_22 [i_5] [i_5] [i_4] [i_4] [i_5] [i_4];
            }
        }
    }
    #pragma endscop
}
