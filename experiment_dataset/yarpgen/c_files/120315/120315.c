/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += 7676922040386932901;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_11 = ((var_9 >> (((((arr_7 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]) ? (arr_7 [i_0] [i_1] [i_1] [i_1 + 1]) : 750164945753258831)) - 192))));
                                var_12 += (+((1 ? var_8 : ((1 ? (arr_0 [2]) : 3310933131673419398)))));
                                var_13 = (((!var_6) ? (arr_6 [i_1 - 1] [i_1] [i_3]) : ((52 ? var_9 : (arr_11 [i_1 - 1])))));
                            }
                        }
                    }
                    var_14 = ((-((4032 & (arr_13 [i_0])))));
                    arr_15 [i_0] [i_1 - 1] [i_0] [i_0] = ((-12078 ? (max((((arr_12 [i_0] [i_1 - 1] [i_2] [i_2]) + var_0)), (~var_3))) : (((((!0) != (!120)))))));
                }
            }
        }
    }
    var_15 = 1;
    #pragma endscop
}
