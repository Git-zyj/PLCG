/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 ? (min(-var_9, (var_8 <= 13672732921690782480))) : (var_8 == var_8)));
    var_12 = ((var_5 / ((((min(4774011152018769142, -6119529253046579302))) ? var_8 : var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 &= ((+(((((arr_1 [13]) ? (arr_6 [i_3 + 1] [i_0] [i_0] [i_0]) : var_0))))));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_14 = ((((arr_3 [i_1 + 1] [i_2]) ? (arr_5 [13] [i_2] [i_0] [i_0]) : (arr_3 [i_1 - 1] [i_1 - 1]))) == 91);
                                var_15 += (min((min(((var_1 ? 224 : (arr_1 [i_0]))), ((((arr_8 [i_0] [3] [i_2] [i_3]) ? (arr_6 [3] [i_1] [i_2] [i_3 - 1]) : 60))))), ((((max((arr_5 [i_3] [i_3] [i_3] [i_3]), 1831636465902412416)) >= (min(281474976448512, (arr_6 [7] [i_1] [i_2] [i_3]))))))));
                                var_16 *= ((((192743588 >> ((((var_9 ? (arr_3 [i_0] [i_1]) : var_3)) - 15832)))) <= ((((((arr_9 [6]) ? -13408 : var_5))) ? var_5 : (var_4 >= 2122462999)))));
                                arr_11 [i_0] [i_0] [1] [i_2] [11] [0] = ((((((min(4774011152018769114, -55)) || 120)))));
                                var_17 = (max(var_17, (arr_3 [8] [i_4])));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                arr_14 [i_0] [i_1] [1] [i_2] [i_3] [i_5] = (3419077542 ? 18446744073709518848 : 18446744073709551613);
                                var_18 = (min(var_18, ((((((((211 ? 1 : 91)) - 1))) ? ((var_4 * (arr_5 [i_3 + 1] [i_3 + 2] [i_1 - 1] [i_1 + 1]))) : -7283)))));
                                arr_15 [i_5] = (((((3631380720868498096 ? (arr_4 [i_0] [i_3] [i_5]) : ((var_5 ? var_1 : var_10))))) ? (max(-5011748946185795234, 15086991705872538765)) : var_10));
                            }
                        }
                    }
                }
                arr_16 [i_0] = arr_9 [i_0];
                var_19 *= (-738455236 | 191);
                var_20 = (32755 % -101);
            }
        }
    }
    var_21 ^= 66;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_22 = arr_24 [i_6] [i_7] [i_6] [i_8] [i_9] [i_9];
                        arr_27 [i_7] [i_7] [i_8] [i_8] &= ((((((arr_18 [i_7]) ? 15086991705872538736 : var_4))) ? var_8 : var_10));
                        arr_28 [i_6] [i_6] [i_9] [i_8] [i_8] [i_9] = (((arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 2]) < (arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7 + 1])));
                    }
                }
            }
        }
        var_23 = (min(var_23, -92));
    }
    #pragma endscop
}
