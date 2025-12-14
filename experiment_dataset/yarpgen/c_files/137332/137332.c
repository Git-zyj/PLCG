/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (--9223372036854775807)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_13 = 2093398990;
                    arr_8 [i_0] [i_0] = (((!var_1) < (((!6701027072120231269) ? (-5091014279357452468 <= 8045129884784267613) : var_0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            {
                arr_15 [9] [i_4 + 3] [i_4 + 3] = (-1362844314 ? 590937202 : 4026531840);
                var_14 = ((((5091014279357452467 ? 17 : 65530))));
                var_15 &= ((-((-1362844314 ? 0 : (((3452011908 ? var_8 : var_7)))))));
                var_16 += min((max(-2131607923, 3344323590)), (0 | 41058));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_17 = var_4;
                                arr_23 [i_3 + 1] [i_4] [i_4] [i_5] [i_5] [i_6] [i_7] &= ((((23 / 786432) ? (65534 * var_6) : (min(var_9, var_2)))));
                                arr_24 [i_6] [i_3 - 4] [i_3 - 2] = ((-((44 ? 127 : 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((+(((-2617339428030838578 / 1396983943) ? (((var_0 ? 9850 : var_6))) : (var_3 / var_11)))));
    #pragma endscop
}
