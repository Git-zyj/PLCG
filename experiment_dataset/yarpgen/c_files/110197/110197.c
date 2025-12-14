/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 ^= var_6;
                        arr_12 [1] [i_2] [3] [i_0] = (((4112304793 ? var_9 : (arr_10 [i_0] [i_2 + 1]))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] = ((var_3 ? (max(723322026, (((27453 ? var_11 : var_5))))) : (arr_11 [i_4] [2] [i_1] [i_0])));
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4] = ((!((min(var_0, (arr_9 [i_2 + 1] [i_2]))))));
                    }
                    var_14 = (27469 % 27459);
                    var_15 = (((((var_0 ? (-1145477566 != var_0) : (27453 % -22171)))) || (((((var_4 ? var_2 : 1294615441)) | ((var_11 >> (var_1 - 58))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_16 += (((((min(133, 122)))) * ((+(min((arr_18 [i_5]), 182662503))))));
                            arr_26 [i_6] [i_7] = (max((((((((arr_22 [i_6] [i_6]) ? var_1 : (arr_24 [i_7] [i_8])))) && var_2))), (max(29819, (var_2 && var_3)))));
                            var_17 *= (((max((~var_11), 4133054602)) >> (((!(((-16 ? 27453 : 8598690765907386854))))))));
                        }
                    }
                }
                var_18 *= (((arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1]) - (((arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1]) + (arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1])))));
                arr_27 [i_5] [21] = ((((var_9 ? 29819 : (arr_19 [i_6 + 1]))) % var_1));
                var_19 = ((4133054602 / 4) ? (~-1294615437) : 4112304793);
            }
        }
    }
    #pragma endscop
}
