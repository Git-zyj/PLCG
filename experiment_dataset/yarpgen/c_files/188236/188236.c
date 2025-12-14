/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 *= (((+-376673392) ? var_4 : -var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (((((~(var_9 <= var_0)))) ? (((7205889763604378841 ? 2259833531746516776 : (arr_2 [i_4] [i_2 + 2])))) : (arr_4 [i_2 + 1])));
                                var_17 = var_3;
                                arr_15 [i_0] [i_1] [10] [i_3] [i_2] [i_4 + 3] = arr_0 [i_0];
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_18 = ((~((((0 ? var_10 : var_9))))));

                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_19 = var_13;
                        var_20 = (max((arr_2 [i_0] [i_5]), (max((arr_8 [i_0] [i_1] [i_5]), var_12))));
                        var_21 = (min(var_21, (arr_10 [i_6])));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_22 = var_0;
                            var_23 += (((arr_4 [i_8]) >= (arr_4 [i_5])));
                            var_24 += (arr_24 [i_0] [i_8] [i_5] [i_0] [i_8]);
                        }
                        var_25 = (min(var_25, (arr_3 [i_0])));
                        var_26 += (!((max(((max((arr_6 [0] [10] [i_5] [i_7]), 4294967283))), 2259833531746516776))));
                        var_27 |= ((2259833531746516776 ? 16516918536027354908 : 2259833531746516776));
                    }
                }
            }
        }
    }
    var_28 = (min(var_28, (((16186910541963034840 ? var_9 : var_6)))));
    #pragma endscop
}
