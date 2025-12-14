/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_0] [2] [i_0] [14] [i_3] = var_2;
                        var_18 = -7409186718446311129;
                        var_19 = (min(var_19, ((min(((7409186718446311124 & ((1892014375 >> (-7409186718446311129 + 7409186718446311150))))), (((max(var_14, var_7)) ^ (!17))))))));
                        var_20 = (((((-1892014381 ? 0 : -7409186718446311135))) ? ((((!(arr_5 [i_3] [i_2] [i_1] [10]))))) : ((1 ? var_1 : 0))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    {
                        var_21 = (1 && 85);
                        var_22 = (((max(-var_13, var_12))) ? ((-((max(70, var_16))))) : ((~(~-273912300))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = (max((((var_10 != (!var_11)))), (min(var_15, (arr_9 [i_4 - 3])))));
                        arr_17 [i_0] [i_4] [i_5] [i_4] = (max((17549100890320135493 || 939410902), (-109 && -2139776651)));
                        var_23 = (max(var_23, (((~(((((173 ? var_10 : var_8)) <= var_7))))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        arr_20 [5] [i_7] = ((0 ^ (arr_3 [0] [i_7] [i_7])));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    {
                        var_24 = (!690019550444486314);
                        var_25 = (-690019550444486303 ? var_14 : -1820645830);
                        var_26 = (max(var_26, 1071681681));
                        var_27 = 1621491507;
                        var_28 &= (((var_8 || var_8) || var_14));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            var_29 = var_14;
                            arr_39 [i_7] [i_13] [i_11] [i_13] [i_14] [i_13 - 1] |= (-939410902 ? 196 : var_3);
                        }
                        arr_40 [i_11] [i_12] = (((~var_16) ? (arr_11 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 2]) : (~-2139776651)));
                    }
                }
            }
        }
    }
    var_30 = (max((((((24 ? -3688 : -7409186718446311130))) ? ((min(33491, var_0))) : (!var_9))), ((-((10312 ? 1 : 48))))));
    var_31 = (max((max(((var_14 ? var_5 : 939410898)), -42)), var_13));
    #pragma endscop
}
