/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = 11693;
                                var_19 = ((((max((arr_7 [i_0] [i_0]), (((!(arr_11 [i_0 - 1] [13]))))))) && (!48303)));
                                var_20 = (((((arr_10 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1]) ? var_6 : (arr_10 [i_3 + 1] [i_1] [1] [i_0] [11]))) > (min((min(1240, -2112519262975829438)), (!var_2)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = ((var_9 ? -21677 : (((arr_16 [5] [i_0] [i_2] [17] [i_6]) ? var_5 : (arr_14 [16] [i_5] [16] [i_1] [i_0])))));
                                arr_17 [i_6] [i_1] [4] [16] [i_1] [i_1] = var_16;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_22 = 2112519262975829444;
                                arr_23 [6] [1] [i_2] [i_2] [3] = arr_5 [i_8];
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(((min(-1, 32767))), ((-((-2112519262975829445 ? var_7 : 20))))));
    var_24 = (max(((((-684355016362201614 / var_4) == var_6))), ((3526506993 & (var_16 | var_10)))));

    for (int i_9 = 4; i_9 < 20;i_9 += 1)
    {
        var_25 = ((((((((arr_25 [i_9]) ? var_9 : var_1)) / 1))) ? (((((202 ? 2 : 8))))) : ((15 ? ((401 ? -684355016362201602 : (arr_24 [7] [i_9]))) : (var_12 - var_11)))));
        arr_27 [i_9] = var_3;
        arr_28 [i_9] = var_7;
        var_26 = (min((((((var_17 ? -684355016362201598 : var_4)) == 2112519262975829444))), var_7));
    }
    #pragma endscop
}
