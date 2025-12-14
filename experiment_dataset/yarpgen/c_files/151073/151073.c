/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_0;
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_19 -= ((!(arr_6 [2] [i_2] [1] [i_0])));
                    var_20 ^= (((((var_2 >= ((((var_9 < (arr_6 [i_2] [i_2] [i_2] [i_2])))))))) << (-11091337834022309979 - 7355406239687241625)));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] [i_1] [i_1] [i_0] = var_9;

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_21 = ((5769 ? ((2032 ? -1606408697110015173 : 3645553458)) : ((((arr_9 [i_1]) ^ ((var_6 ? (arr_16 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3]) : (arr_14 [4] [6] [i_3] [i_3] [8] [i_4]))))))));
                        var_22 ^= 2251799813685248;
                        var_23 = (((~(((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) | var_0)))));

                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            arr_19 [i_5] [i_1] [i_0] = ((((min(((((arr_3 [i_1]) ? var_12 : (arr_18 [i_1] [2])))), var_4))) ? (-51 == 32640) : ((~(arr_3 [i_5 + 3])))));
                            var_24 = (min(var_24, (((((var_11 ? var_14 : 3838871185)) | ((((arr_9 [i_5 + 1]) - (arr_0 [i_5 + 3] [i_5 + 2])))))))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_25 = (245760 * 63455);
                            arr_22 [i_0] [i_1] [i_3] [i_4] = (((((((arr_17 [i_1]) || -1618382079)))) <= (arr_5 [14] [i_1] [i_1])));
                            arr_23 [i_0] [i_1] [i_3] [i_1] [i_6] = (((-147885307 <= 2080) ? 32908 : -7299236071777786232));
                            var_26 = (min((((((var_6 == (arr_10 [i_0] [i_1] [i_0] [i_0]))) ? var_16 : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), ((0 ? 2080 : var_2))));
                            var_27 |= (max(0, 5444334453088330249));
                        }
                    }
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        arr_26 [i_1] [i_3] [i_1] [i_1] = var_2;
                        var_28 = (max(var_28, (((-125 ? ((6 ? (arr_15 [i_7 - 3] [i_7 + 3] [i_7 - 3] [i_7 - 2]) : (arr_13 [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7] [i_7 + 2] [i_7]))) : ((((18580 != ((1176515189546244850 ? (arr_5 [i_0] [i_1] [i_0]) : 38354)))))))))));
                    }
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_1] = -1959;

                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        arr_34 [i_1] = var_5;
                        var_29 = ((32767 | (arr_30 [i_9] [i_9] [i_9] [i_9 - 1])));
                        var_30 = 32767;
                    }
                }
                for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    arr_37 [i_1] [0] [i_1] [i_1] = ((2424498138 ? -8 : 2267446501803698593));
                    var_31 = 50572;
                    arr_38 [i_0] [i_1] [i_1] [i_10] = var_3;
                }
                arr_39 [i_1] = (arr_15 [i_0] [i_1] [i_0] [i_1]);
                var_32 = (min((((arr_20 [i_0] [i_1] [i_0] [i_0] [i_1]) ? (12843872535718282933 ^ 9231870939313886475) : var_2)), ((min((arr_24 [0] [i_1] [0] [i_0]), var_1)))));
            }
        }
    }
    var_33 = var_14;
    var_34 = var_4;
    #pragma endscop
}
