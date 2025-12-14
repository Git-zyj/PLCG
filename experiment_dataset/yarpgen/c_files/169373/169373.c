/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max(var_1, ((var_3 ? var_3 : var_7)))), -8211374102094641420));
    var_15 = (max(var_15, var_6));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_16 ^= (((arr_0 [16]) ? var_2 : 29412));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = 17763;
                                arr_12 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_4] [10] |= (((((((!(arr_11 [6] [i_1] [i_3] [i_1]))) ? (1 && var_5) : var_4))) | var_8));
                                var_18 ^= (min(29418, -29419));
                            }
                        }
                    }
                }
                var_19 = (max(var_19, ((((((-7685981850560287307 ? -29412 : 986714866))) ? (~1) : (~109))))));
            }
        }
    }
    #pragma endscop
}
