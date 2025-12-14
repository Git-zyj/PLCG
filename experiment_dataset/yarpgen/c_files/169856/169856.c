/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_20 = -1;
                        arr_10 [8] [i_2] [i_1] [8] &= (37727 + ((min((arr_3 [i_3 + 1] [i_2 - 1]), (arr_3 [i_3 - 4] [i_2 - 2])))));
                        var_21 = (min((max(((-9080432488790393281 ? 9080432488790393280 : 70)), 32)), 1260686868));
                    }
                    for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_22 ^= ((~(arr_12 [i_2 - 1] [i_4 - 2] [i_4 - 2] [i_4])));
                        arr_13 [i_0] [2] [i_1] [i_0] = ((((min((min(14381786402289664103, (arr_3 [i_4 - 3] [i_0]))), ((((arr_2 [i_1]) ? -9080432488790393281 : (arr_9 [i_1] [i_1] [i_2] [i_4 - 2]))))))) ? 1260686868 : -31078));
                        var_23 = ((((min(35196, -16328))) - 4227));
                    }
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_1] = -4374072593620683733;
                        arr_17 [i_5] [i_1] [i_1] [i_0] = (arr_7 [i_0] [i_1] [i_2] [i_0]);
                    }
                    var_24 = (max(var_24, 1));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_25 *= var_10;
                                var_26 = 248;
                                arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] = var_17;
                                arr_25 [i_7] [i_1] [i_0] [i_1] [i_0] = (max((((!(arr_22 [i_7] [i_6] [4] [i_1] [i_0])))), var_8));
                                arr_26 [i_0] [i_1] [i_6] [i_0] = ((~(!-15011)));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_30 [i_1] = (min((32749 >= 1), 32758));
                        arr_31 [i_0] [i_1] [i_1] [i_8] = ((!((((arr_23 [6] [i_2 + 2] [i_2] [i_1] [i_2] [i_2 + 2]) & -1260686874)))));
                        arr_32 [i_0] [i_1] = ((11896748223838169182 * (var_5 != 1)));
                    }
                }
            }
        }
    }
    var_27 = (min(var_27, (((var_8 + ((var_19 ? (min(-1714841904, var_1)) : var_9)))))));
    #pragma endscop
}
