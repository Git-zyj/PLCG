/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (max((((110 ? 110 : 2120847629))), (min((((-78 / (arr_7 [i_1 - 1] [i_1 - 1] [i_0])))), (min(var_2, 902951882298754856))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1 + 1] [i_1] [i_3 + 2] = (((arr_3 [i_0]) ? ((min((arr_5 [i_1 - 1] [i_3 + 2] [i_3 + 1]), (arr_5 [i_1 - 1] [i_3 - 1] [i_3 + 2])))) : (((arr_3 [i_0]) / ((-110 ? 2120847623 : 229))))));
                            arr_14 [i_0] [i_1 - 1] [i_1] = ((((min((arr_10 [i_1 - 1] [i_0] [i_3 - 1]), 0))) ? 16512573982304675123 : ((((arr_10 [i_1 + 1] [i_1 + 1] [i_3 + 1]) ^ 1)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_20 = ((var_6 == (var_6 + 17136364206982318024)));
                            arr_21 [i_1] [i_4 + 1] [i_1] = ((((((arr_10 [i_0] [i_5 + 1] [i_4 - 2]) ? (arr_10 [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_1 + 2] [i_5 + 1])))) ? 1706 : (((((arr_4 [i_0] [i_0]) && var_13))))));
                            var_21 = (min(var_21, ((((((min(8878580922534364086, 65535)) >> (16382 - 16380))) / (((max(65522, 32942)))))))));
                            var_22 = ((185 ? (((min((919 < 64605), (2376861884 >= 52575))))) : (arr_18 [i_0] [i_1 + 3] [i_4 + 2] [i_5 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((-113 ? 1421617030 : 9223372036854775807));
    var_24 = (((0 ? 0 : 4168672669)));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_25 ^= (((((~(arr_25 [i_9] [i_6])))) ? (((arr_25 [i_7] [i_6]) ? (arr_25 [i_7] [i_6]) : -11559)) : (arr_25 [i_9] [i_7])));
                                var_26 ^= 4294967270;
                            }
                        }
                    }
                }
                arr_32 [i_6] = (arr_22 [i_6] [i_6]);
            }
        }
    }
    var_27 = (~var_6);
    #pragma endscop
}
