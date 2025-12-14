/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 65535;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] = (arr_0 [i_0 - 1]);
                var_15 = var_10;
                var_16 |= (((((5708662816750327329 ? var_3 : (arr_3 [i_0] [i_0 + 1])))) ? (((arr_3 [i_0] [i_0 - 1]) - -105)) : ((((arr_3 [i_0] [i_0 + 1]) ? var_6 : 1672265770)))));
                arr_7 [i_0] [i_0] = ((((max(var_7, (arr_5 [i_0 - 1])))) ? (((((-2147483647 - 1) != 90)) ? ((((1 && (arr_0 [i_0]))))) : (((-32767 - 1) ? 17892740790647842856 : 1)))) : (((17157 ? 511 : (((arr_5 [i_1]) + var_11)))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    arr_10 [i_0 + 1] [i_0 - 1] [i_0 + 1] = -100;
                    arr_11 [i_0] [i_1] [i_1] [i_2] = var_3;
                    var_17 = (min(var_17, -28));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_18 = (((90 <= var_2) ? 3870 : 23881));
                    var_19 = ((1 ? 9332 : 6));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, 63267));
                                var_21 = 90;
                            }
                        }
                    }
                    arr_21 [i_4 + 1] [i_1] [i_4 - 1] = (arr_1 [i_0 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
