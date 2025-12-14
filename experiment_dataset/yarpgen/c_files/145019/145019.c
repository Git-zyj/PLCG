/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 = (min((max(var_7, (((arr_0 [3]) ? -32753 : var_0)))), var_5));
                                var_11 = (!var_8);
                                var_12 = ((((((arr_1 [i_0] [i_1]) >> (var_4 - 4801)))) & (max((min((arr_14 [i_3]), 32767)), (min(9223372036854775788, (arr_2 [i_0])))))));
                                arr_16 [i_0] [i_0] [i_3] [1] [i_2 - 3] [i_3 + 1] [i_4] = var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_2 + 1] |= ((var_1 ? (((((min((arr_7 [i_1] [i_2 - 2]), var_1))) || (((var_2 << (var_2 - 29238))))))) : var_2));
                                var_13 = 424859312319384611;
                                var_14 = (min(var_14, ((+((+((5679 ? (arr_6 [i_1 + 1]) : var_8))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_3;
    var_16 = var_3;
    var_17 = 3095367400;
    #pragma endscop
}
