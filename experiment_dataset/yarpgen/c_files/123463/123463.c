/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = ((((((arr_3 [i_0 - 3]) ? var_4 : var_10))) ? ((-(arr_3 [i_0 - 1]))) : ((-(arr_3 [i_0 - 2])))));
                    arr_9 [2] [i_1] [i_1] [i_1] = (var_5 <= var_0);
                }
            }
        }

        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            arr_13 [i_0] [i_3] = (((max(24081, var_3))));

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_16 = ((((((1768859889 ? 16471375659747541364 : -91)) ? 19420 : (min(var_14, -13988))))));
                var_17 = (arr_16 [i_3] [i_0 + 1] [i_3 + 1] [i_4]);
            }
        }
        var_18 = (1 - -1975102023);
        var_19 = (min(var_19, ((3492390738 ? var_4 : 161013811523905959))));
    }
    var_20 = -25769803776;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_27 [i_6] [i_6 - 2] [i_6 + 2] [4] = (min(((var_2 ? (var_11 < -7759162906123012729) : var_7)), (var_10 || var_9)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_21 ^= (min(((min((arr_29 [i_5] [i_6] [i_7] [i_5]), var_10))), ((0 ? var_8 : (arr_7 [i_6 + 3] [i_6 + 3] [i_6 + 2])))));
                                arr_33 [i_9] [i_6] [i_7] [8] [i_6] &= ((((min(1, 27267))) ? var_8 : (arr_7 [i_6 - 2] [i_6 + 1] [i_9])));
                                arr_34 [i_5] [i_6] [6] [i_7] [i_6] [14] [i_9] = (!var_5);
                                var_22 += (min((arr_16 [i_7] [i_6 + 2] [i_9] [i_9]), var_1));
                            }
                        }
                    }
                    var_23 = ((!(((-64 ? -3428 : 14278)))));
                }
            }
        }
    }
    var_24 = ((((((!(255 ^ var_12))))) - (max((min(var_10, 41454)), ((max(var_2, var_11)))))));
    var_25 = var_8;
    #pragma endscop
}
