/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_16 ^= (((var_3 * var_10) ? (((!var_14) | 3867476861)) : (3395253449 <= 1073709056)));
                var_17 = (min(var_17, ((max(((((min(-91, var_8))) % 33)), (((18446744073709551615 != var_11) ? (arr_3 [i_1]) : ((3003458270374472898 ? 1416407285 : 14)))))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 &= (!var_4);
                                var_19 = ((8781232966301237831 != (((min((min(var_11, -57)), ((((arr_10 [i_1] [i_2] [i_3] [i_4]) == var_10)))))))));
                                var_20 |= ((((min((((var_14 <= (arr_10 [i_0] [i_4] [0] [i_4])))), (max(var_8, var_0))))) ? ((-((9665511107408313813 ? var_12 : (arr_0 [i_0] [13]))))) : ((min(((min(var_2, var_2))), (arr_10 [i_1 + 1] [i_4] [i_1 + 1] [i_0]))))));
                                arr_12 [1] [1] [i_2] [11] [i_2] [i_4] = ((-(((78 ? 3003458270374472904 : (arr_9 [i_4] [1] [i_1 - 2] [13]))))));
                            }
                        }
                    }
                }
                var_21 -= (min(((1 ? (max(var_0, 248)) : (43 ^ 2147483647))), (((((var_0 <= (arr_5 [1] [i_1 - 2] [i_0]))) ? (((min((arr_4 [i_0] [i_0]), 8)))) : ((688621291 ? 672619747 : (arr_9 [i_0] [i_0] [i_1] [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_22 += (((((arr_15 [i_6]) ? 88 : (arr_15 [1]))) > (((var_9 * (((arr_19 [i_5] [i_5] [i_5]) ^ var_2)))))));
                            arr_23 [5] [i_7] [i_7] [i_5] = (arr_22 [i_7] [4] [4] [i_8]);
                            var_23 = (min(var_23, 7318865701588646339));
                            var_24 = (((arr_14 [i_5]) & ((((var_3 ? var_4 : var_11))))));
                            var_25 = (max(var_25, ((((((((-1 ? var_3 : 242))) - (arr_13 [i_6]))) << (((var_0 + -var_3) - 5741304914575040477)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_26 *= ((~(((!(((3 ? 15 : (arr_18 [i_5] [i_5] [8])))))))));
                            var_27 -= (((var_4 & 37) ? ((~(arr_16 [i_10 - 2]))) : (((var_1 ? (arr_18 [i_10 - 2] [3] [i_9]) : var_7)))));
                        }
                    }
                }
                var_28 = (min(var_28, (((-((-(((!(arr_22 [i_5] [i_6] [i_5] [i_5])))))))))));
            }
        }
    }
    #pragma endscop
}
