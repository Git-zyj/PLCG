/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((-61 >= ((((var_8 ? var_11 : var_6)) % -29933))));
    var_13 = var_2;
    var_14 = ((-(((min(var_10, var_8))))));
    var_15 = (min(var_15, ((max((((150820917 ? 126 : 1028448469))), (min(var_4, (101 != var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (((arr_0 [i_1]) ? (((!((((arr_4 [i_0] [i_0] [i_1]) / (arr_1 [i_1] [i_1]))))))) : (arr_0 [i_0])));
                arr_5 [i_1] = ((-(((arr_2 [i_1]) ? var_8 : ((min(var_8, (arr_3 [i_1]))))))));
                arr_6 [i_1] = (min(((-43 ? 7124764975119423 : (arr_2 [i_1]))), (((+(((arr_0 [i_0]) << (59417 - 59398))))))));
                var_17 = 2970026690804568923;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 &= (arr_2 [i_0]);
                                var_19 = (max(var_19, ((((((((arr_2 [i_0]) ^ (arr_11 [i_3] [i_1] [i_1] [i_1] [i_1] [i_1]))) & -1)) * (((var_0 ? 0 : (arr_2 [i_4 - 2])))))))));
                                var_20 = (min(((((!2619726733) || (arr_8 [i_0] [22] [5] [8])))), (max((min(940587918, 6100)), 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
