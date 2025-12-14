/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!63488);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (min(11066883470949789419, 18446744073709551615))));
                var_12 = ((7379860602759762196 ? (22681 + 16721561856569162772) : ((-(arr_4 [i_0 + 3] [i_0 + 3])))));
                arr_5 [11] [11] = ((!((((arr_3 [i_1] [i_0 - 1] [i_0]) >> (((arr_3 [i_0] [i_0 + 1] [i_0]) - 27203)))))));
                var_13 += min(((-0 - (((arr_3 [i_1] [i_0] [i_0 - 1]) / 1316861823543034551)))), (((arr_4 [i_0 - 3] [i_0 + 2]) - (14223210981471056456 + 0))));
                arr_6 [i_1] [i_0 - 1] [i_0 - 1] &= (((((max(14161, 0)))) ? ((-(max(37739, var_8)))) : (((((!(arr_0 [i_1]))) ? (20888 >> 0) : (arr_2 [i_1]))))));
            }
        }
    }
    var_14 = (((-1920 >= var_9) * (((((22996 ? var_7 : 54801)) == (!var_0))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_3] [i_2] [i_2] = (((((!0) ? (((var_4 && (arr_2 [i_3])))) : (!65535))) == (((65523 == 10901740919306214954) >> (((var_0 == (arr_14 [i_4] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_15 += (var_5 ? (15515831498506348194 - 10083694115007920367) : var_6);
                                var_16 = var_0;
                                var_17 = (3464633705014479728 ? 7916 : 138538465099776);
                                var_18 = (min(var_18, 18446744073709551615));
                            }
                        }
                    }
                    var_19 = (min(var_19, 10083694115007920367));
                }
            }
        }
    }
    var_20 *= (((((-7251632907081842390 ? 18446744073709551615 : (12572110238540262936 + 10083694115007920364)))) ? (((min(var_9, 16311)))) : var_6));
    #pragma endscop
}
