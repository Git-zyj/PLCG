/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = 7895318218125435645;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = ((((min((arr_5 [i_0] [i_0]), (arr_2 [8] [8])))) ? (max(var_11, var_6)) : (((~(arr_0 [i_0 - 3] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] = (max(((((15529527255776869637 ? 1994643865 : var_5)) * 16745494832967464370)), (var_9 ^ var_10)));
                                arr_16 [1] [1] [i_2] [i_0] [i_4] = (((arr_5 [i_0 - 2] [i_0]) ? (max(-18907, var_10)) : var_10));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_0] = (max(((((((arr_2 [i_0 - 3] [i_0]) & var_9)) >> (-5504608628709720134 + 5504608628709720136)))), (arr_7 [i_2] [i_2] [8] [8])));
                }
            }
        }
    }
    var_15 = ((var_3 ? ((((((8 ? var_1 : 2300323431))) ? var_3 : (((var_6 <= (-2147483647 - 1))))))) : ((2300323431 ? 30326 : 11541372542810841481))));
    var_16 = ((((min(252893090, var_4))) <= (min(var_8, var_6))));
    #pragma endscop
}
