/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1 + 1] [i_2] = (((((var_13 > (arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 1])))) == (min(((min(65041, 1))), ((var_0 ? -20097 : 513))))));
                    var_14 ^= var_9;
                    var_15 = ((((max(var_10, var_10))) ? ((min(((var_4 ? var_10 : var_6)), var_13))) : (~5736837637276219465)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_16 += ((((min(43736, 19591845))) == var_9));
                                var_17 *= (arr_13 [i_3] [i_4]);
                                var_18 = (((var_0 - var_0) - var_13));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_19 = 127;
                            var_20 ^= (min(((((min(83, (arr_16 [i_8] [i_8] [i_4] [i_3])))) ? (arr_10 [i_4 + 1]) : (arr_24 [2] [i_4] [i_4] [i_4] [i_8] [i_9]))), (((-(~487))))));
                        }
                    }
                }
                var_21 = ((-((~(((arr_15 [i_3]) ? 491 : 68))))));
                var_22 = (max(var_22, (((((var_9 - (arr_10 [i_3]))) + (max((arr_27 [i_3] [i_3] [i_3]), ((1 ? 557396867 : 65040)))))))));
            }
        }
    }
    var_23 = var_5;
    var_24 = -var_2;
    #pragma endscop
}
