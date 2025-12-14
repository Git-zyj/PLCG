/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(var_0, var_5))) >= var_3));
    var_14 |= -var_8;
    var_15 ^= ((((min(27353, var_7)) >= (~var_11))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_16 = (((max(27354, ((3921888295418739791 / (arr_9 [i_0] [i_0] [i_0] [i_3])))))) ? ((~(arr_5 [i_0] [i_0]))) : (((((arr_7 [i_1] [i_1] [i_3] [i_4]) >> (var_9 + 994824337))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_1] [i_0] [i_0] = max((((arr_8 [i_0] [i_0] [i_0] [i_0]) % (~var_4))), (arr_5 [i_1] [i_1]));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_17 = ((~((~((~(arr_2 [i_0])))))));
                                arr_16 [i_0] [i_5] [i_5] = (arr_4 [i_2] [i_3] [i_3 + 1] [i_5]);
                                arr_17 [i_0] [i_5] [i_2] [i_2] [i_3] [i_3] [i_5] = (min((min(8058992365334019280, 1640658039491687401)), (((((max(0, (arr_15 [i_0] [i_1] [i_2] [i_3] [i_5])))) ? ((min(0, 251))) : ((~(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_2]))))))));
                                arr_18 [i_0] [i_0] [i_2] [i_3] [i_5] = max(((-6061 ? ((max(1, -1126441973))) : ((0 ? 2147483642 : 18446744073709551615)))), (((~(~1)))));
                            }
                            var_18 = (((((-(!1)))) & (arr_3 [i_0] [i_0] [i_0])));
                        }
                    }
                }
                var_19 = ((!(((((((arr_8 [i_0] [i_0] [i_0] [i_0]) - (arr_7 [i_1] [i_1] [i_1] [i_1])))) ? (1 | 1640658039491687401) : (((127 ? (arr_15 [i_0] [i_0] [i_0] [i_1] [i_1]) : 1525667450))))))));
                var_20 -= ((+(((arr_1 [i_0 + 1] [i_1 + 1]) ? ((~(arr_9 [i_0] [i_0] [i_0] [i_0]))) : (~var_4)))));
            }
        }
    }
    var_21 = ((1613360990 ? -32756 : 202));
    #pragma endscop
}
