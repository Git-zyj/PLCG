/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 3] [i_1 - 3] [i_1] = (min(((-6118884811734098525 ? 5 : 3149)), -1));
                    var_10 = ((((3 >> (!21))) & ((~((max(var_1, (arr_4 [i_0] [16]))))))));
                }
            }
        }
    }
    var_11 = ((min(((var_1 ? var_7 : var_8)), ((max(var_8, var_9))))) != var_9);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            {
                var_12 *= ((((arr_7 [i_3] [i_3] [i_4 - 3] [i_4 - 3]) <= 6805953875855894656)));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_23 [i_7] [i_4] [i_5] [i_4] [i_3] = (((((-6805953875855894656 ? -6805953875855894655 : (arr_2 [i_7 - 2])))) ? (((2047 ? 0 : 6031253377185495889))) : (((min(65534, 32768))))));
                                var_13 = (((((~var_7) ? (((max(3149, 32767)))) : (max(var_9, 0))))) ? ((3 ? (min((arr_19 [i_7] [i_5] [i_4] [i_3]), 0)) : (((var_9 ? var_1 : 17))))) : 19974);
                                var_14 = ((~(((!0) ? ((-17 ? var_1 : (arr_17 [i_5]))) : (arr_7 [i_3] [i_4] [i_5] [i_4])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_15 &= ((((arr_13 [i_3]) > (0 & 16))));
                            var_16 &= ((((1 ? (arr_27 [i_3] [1] [1] [i_9] [i_9] [i_4 - 3]) : (((min(255, 32767)))))) - var_2));
                            var_17 &= ((0 ? 45345 : 0));
                            arr_30 [i_3] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4] [9] = (min(111, 18446744073709551615));
                        }
                    }
                }
                var_18 = (min(var_18, var_4));
            }
        }
    }
    #pragma endscop
}
