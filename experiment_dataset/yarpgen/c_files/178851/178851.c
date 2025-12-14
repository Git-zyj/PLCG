/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (((251 > 908269620) < ((var_16 ? 175 : (arr_1 [i_0] [i_0 - 1])))));
                var_21 &= (((arr_0 [i_0] [i_1]) / 68));
                var_22 = ((((arr_3 [i_0 - 2] [i_0 - 2]) ? (arr_3 [i_0 + 1] [i_0 + 1]) : -54)) / (((-38 ^ -20) << 3)));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = (i_0 % 2 == zero) ? ((((((arr_6 [i_0] [i_0 - 3] [13] [i_0 - 2]) << (((arr_4 [i_0]) - 947772559)))) >= 16))) : ((((((arr_6 [i_0] [i_0 - 3] [13] [i_0 - 2]) << (((((arr_4 [i_0]) - 947772559)) + 1129560940)))) >= 16)));
                                var_23 ^= 24;
                                var_24 = (arr_6 [i_0] [i_0] [i_0] [10]);
                            }
                        }
                    }
                }
                var_25 = (var_7 % ((max((arr_10 [i_0] [i_0] [i_1] [2] [i_0] [i_0 + 1] [i_0]), (arr_10 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0 - 1] [10])))));
            }
        }
    }
    #pragma endscop
}
