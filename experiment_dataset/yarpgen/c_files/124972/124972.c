/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-(max(var_2, var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((((-3974 ? 0 : 205)) != ((max(var_6, (min((arr_4 [i_0 - 1] [0]), var_8))))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (95 > -26866);
                                var_14 = (max(var_14, ((16975106018501063624 == (((((arr_8 [i_1 - 3] [i_1]) != (arr_14 [i_1 - 3] [i_1] [i_1 + 3] [i_1 - 2] [i_1 - 3] [i_1])))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = ((var_6 > ((((((max(var_5, (arr_2 [i_0] [15])))) || (var_4 != 711312442064703173)))))));
                            }
                        }
                    }
                }
                arr_16 [i_0 - 3] [i_0] [i_1] = ((min(((4503599627370495 ? var_9 : var_1)), ((4503599627370510 ? 97 : 37)))));
            }
        }
    }
    var_15 = ((((((var_0 ^ 208) + var_6))) ? (min(var_2, (9441167848412140999 / 1))) : var_7));
    #pragma endscop
}
