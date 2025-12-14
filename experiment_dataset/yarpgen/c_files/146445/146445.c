/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 *= ((~(~0)));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (arr_9 [i_0] [3] [i_0]);
                    var_14 = 533670905;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (((-7419538188204458325 / 37836) ? (((!((min((-9223372036854775807 - 1), (arr_13 [i_0] [i_1] [i_0] [i_0] [i_4 + 3]))))))) : ((max(var_12, (min(1, var_3)))))));
                                arr_16 [5] [i_1] [i_0] [i_3] [i_4] [i_3] [i_1] = (((((((max((arr_12 [i_0] [i_0] [i_0] [i_0]), var_8))) ? ((max(-15029, 1))) : ((776161346 ? 56 : var_3))))) || (((((arr_0 [i_0]) ? -1386 : 10))))));
                                var_16 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_8;
    var_18 -= (var_5 >= 7494162661091360935);
    var_19 = (min((!65522), ((~(max(var_4, var_6))))));
    #pragma endscop
}
