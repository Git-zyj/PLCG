/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_8, ((39475 ? var_2 : (((max(-52, 102))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = ((((var_6 + (arr_0 [i_2 + 1]))) % 3714341251));
                    arr_9 [i_0] [i_2] = (~-2147483643);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 *= ((var_9 % (((455614510 ? 100 : 39478)))));
                                var_15 ^= (((((arr_1 [i_2 - 2]) ? 39458 : (arr_1 [i_1 - 2]))) | ((-var_5 - (203 >= 1)))));
                                arr_16 [i_0] [i_1 - 3] [i_2] [i_3] [i_4] = ((arr_7 [i_4] [i_1 - 1] [i_2] [7]) ? var_2 : ((((-15 % 15) ? 2739244294 : (39496 % var_3)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
