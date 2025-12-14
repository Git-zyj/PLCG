/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = ((((((((arr_1 [i_0 + 1]) ? (arr_6 [i_1] [i_0] [i_0]) : 9420360015520992232))) ? (arr_4 [i_1 + 1] [i_1] [i_1 - 1]) : (((arr_2 [i_0]) ? 9420360015520992232 : (arr_0 [15] [i_1]))))) - (arr_0 [i_0 - 1] [i_0 - 1])));
                arr_7 [i_0] = ((-(~14213114)));
            }
        }
    }
    var_16 = var_8;
    var_17 *= ((((var_2 ? -var_11 : var_13)) > var_6));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_18 = (min(var_18, (((-(((arr_8 [21] [i_2]) & ((-16875 ? (arr_11 [i_2] [18]) : 0)))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_19 *= (min((15 < 121), 0));
                                arr_20 [18] [i_6] = ((((((-326 < -16881) << (((((arr_17 [19] [i_3] [19] [19] [i_6]) ? (arr_16 [i_2] [i_2] [i_4] [i_2] [i_6]) : (arr_12 [15]))) - 1487750073))))) && (arr_14 [i_4] [i_4] [i_3 - 3] [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 ^= ((-(((var_5 <= (!0))))));
    #pragma endscop
}
