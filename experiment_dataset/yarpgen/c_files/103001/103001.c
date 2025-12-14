/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((max(-190, (min(393216, var_5))))), (min(((max(21, 161))), (max(-779573307, var_1))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 += ((-(max((min(190, var_8)), (((58111 ? -2558 : (arr_1 [i_0 + 1]))))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_12 = (min(var_12, var_7));
                            arr_14 [i_3] [i_3] [i_3] = ((-((var_1 ? 32 : (min(var_6, (arr_5 [i_4] [i_1] [i_1])))))));
                            arr_15 [i_3] [i_1] = var_6;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_13 *= (min((min(var_7, var_0)), (arr_8 [i_0 - 2] [i_0 + 1] [i_6])));
                            var_14 = ((var_8 ? ((((((-32767 - 1) ? 0 : 68))) ? ((((arr_6 [i_1] [i_5] [7]) % (arr_13 [17] [17] [i_5] [2] [i_7])))) : (var_3 % var_9))) : (((((213 ? var_8 : var_5))) ? var_6 : (arr_7 [i_0])))));
                        }
                    }
                }
            }
        }
        var_15 = max((((var_5 + (arr_7 [i_0 - 1])))), 1334496337040559120);
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_28 [i_8] [i_8] &= (min(181497157, -20));
        var_16 += (max((~var_7), ((((var_6 < 230) / (arr_22 [i_8] [i_8] [i_8] [i_8]))))));
        arr_29 [i_8] = (min((arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), 65));
        var_17 += var_1;
    }
    var_18 ^= ((((((min(187, var_5))) || var_5)) ? 199 : ((max(213, 65)))));
    #pragma endscop
}
