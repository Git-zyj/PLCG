/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = (((((((min(var_6, var_4))) ? (41 && var_6) : var_4))) == var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((var_5 ? (min(371464888719190766, var_5)) : (var_2 & var_3))))));
                    arr_8 [i_2] [i_2] [i_0] = var_9;
                    var_14 = (min(var_14, (((var_7 / ((var_10 ^ ((var_6 ? 1 : var_10)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = (min((max((4592 * 1223999047840022522), var_7)), (((var_8 % var_8) ? var_8 : (var_0 | var_8)))));
                                arr_13 [i_3] [i_2] [i_3] = (min((~var_3), (60952 <= var_0)));
                                arr_14 [i_2] [i_2] [i_0] [i_2] [i_0] [i_0] = ((-var_10 ? -18446744073709551615 : ((min(var_4, var_4)))));
                                var_16 = (max(var_16, ((((var_9 & var_6) ? (var_8 <= var_7) : (((min(var_3, var_10)) | var_5)))))));
                            }
                        }
                    }
                    var_17 ^= (10601195999642412331 | var_9);
                }
            }
        }
    }
    var_18 *= ((var_7 & ((-(max(var_7, var_4))))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_19 += (min((min(var_2, var_10)), (~var_9)));
                var_20 = (max(((((var_6 ? var_0 : 1)))), (min(371464888719190766, 371464888719190766))));
                var_21 *= (min((((var_3 <= (min(var_6, var_0))))), (var_7 * var_8)));
            }
        }
    }
    #pragma endscop
}
