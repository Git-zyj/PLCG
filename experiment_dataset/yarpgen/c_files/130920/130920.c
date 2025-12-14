/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = ((-(var_5 - var_2)));
    var_17 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 += (((min((((arr_2 [19]) / 4294967232)), (max(var_7, var_10)))) == (((234 ? 122 : ((3966 ? 169 : -3975)))))));
                                arr_11 [i_4] [i_0] [i_0] [i_1] [i_0] = var_11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_16 [19] [16] = (((((arr_14 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5 - 1]) ? (arr_14 [i_5] [i_5 - 2] [18] [i_5 + 1] [i_5 + 1] [i_5 - 1]) : (arr_14 [i_5] [i_5 - 1] [i_5] [i_5 - 2] [i_5 + 1] [i_5 - 1]))) == (0 - 3967)));
                                var_19 = ((((((arr_15 [i_5] [i_5] [i_2] [i_5 + 1] [i_6 + 1]) >= var_7))) * (max(((995955711405905759 ? 0 : -1)), ((var_12 * (arr_6 [i_0] [i_6])))))));
                            }
                        }
                    }
                    var_20 ^= (min((max((((var_13 | (arr_5 [i_2] [1])))), var_8)), (max(var_11, ((3965 ? -4387398280660872247 : 122))))));
                }
            }
        }
    }
    #pragma endscop
}
