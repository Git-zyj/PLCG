/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((!(((var_4 ? var_4 : 1))))))) == (min((max(1, var_6)), var_6)));
    var_16 = ((((min(var_8, var_11))) ? 1 : var_5));
    var_17 = 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 |= var_12;
                                var_19 = (min(var_19, ((((((-((15845006348895595399 ? var_12 : var_3))))) || (((((var_4 ? var_3 : var_10))) == (min(26, 26)))))))));
                                arr_12 [13] [i_2] [i_4] [i_4] = 1380897644;
                            }
                        }
                    }
                    arr_13 [i_0] [i_2] = (((((arr_1 [i_0 - 1]) ? (((arr_8 [i_0] [i_0] [i_0 - 1] [0] [i_0 - 1] [3]) ? (arr_5 [i_1] [i_1] [i_1]) : 12462365533781765148)) : var_14))) ? (min(15845006348895595385, -6201211992245015148)) : ((((((var_7 ? var_11 : -124))) / ((46105 ? var_5 : var_12))))));
                }
            }
        }
    }
    #pragma endscop
}
