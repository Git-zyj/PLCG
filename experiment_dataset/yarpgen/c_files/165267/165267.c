/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -21379;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_2] = (((min(var_3, 107))));
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] = (max(((var_7 ? var_7 : var_4)), var_6));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] &= (min((((~(var_14 ^ var_13)))), (((((max(48, 111)))) + (min(var_16, 4264913084))))));
                                arr_19 [i_0] [i_0] = var_4;
                                var_20 = (((((52 ? (-1 * 54166) : (var_11 > var_18)))) ? ((32909 ? (arr_8 [i_2 - 3] [i_2 - 3] [i_2 - 1] [i_0 - 2]) : 7562113146539868461)) : 32901));
                                var_21 = 943430774;
                            }
                            arr_20 [i_3] = var_9;
                        }
                    }
                }
                arr_21 [i_0] [i_1] = (((((arr_6 [i_0 + 1] [i_1] [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_0 + 2]))) ^ (((arr_4 [i_0 + 1]) ? 24576 : (arr_4 [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    arr_28 [i_6] [i_6] [i_6] [i_6] |= (~8188);
                    var_22 = ((+(((arr_27 [i_6] [i_7] [i_8] [15]) ? 839433674 : (arr_27 [1] [i_7] [i_6] [i_6])))));
                    arr_29 [i_6] [7] [i_8] [i_8] = ((-(((arr_25 [i_6] [i_6] [i_6]) ? (arr_25 [i_6] [i_6] [i_8]) : -1754569228))));
                    arr_30 [i_6] [i_7] [i_8] = ((-(~-1858501155)));
                }
            }
        }
    }
    #pragma endscop
}
