/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_21 = (max(var_21, (((-3720 ? 32761 : ((max((arr_9 [1] [2] [0] [i_2 - 2] [i_3] [i_4]), (arr_5 [i_0] [i_2])))))))));
                            arr_14 [i_0] [8] [0] [i_4] = ((3749 ? 13745655690373027580 : 4701088383336524051));
                            var_22 = (max(((((arr_0 [i_0] [i_2]) ? (arr_1 [i_2 + 1]) : (~1)))), (min((max(15276, var_10)), ((((-32758 + 2147483647) << (6677 - 6677))))))));
                        }

                        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_23 = ((((min(((-19 ? 2147483647 : 20)), 4639994177477059470))) ? (arr_13 [6] [i_5 + 1]) : ((var_12 ? ((-(arr_16 [i_0] [i_0] [i_5] [3] [i_3] [i_5 + 1]))) : (-20 + var_8)))));
                            arr_17 [10] [i_1] [i_5] [i_5] = ((61836 ? ((((arr_8 [i_2 + 1] [i_2 + 2] [2] [i_5 + 1]) == (arr_8 [i_2 + 2] [i_2 + 1] [i_2] [i_5 - 1])))) : ((109 / (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_5 + 1])))));
                            var_24 ^= ((((min((arr_16 [i_0] [i_0] [i_0] [i_0] [i_3] [i_5]), (var_10 * 3700)))) > ((-3728 ? 3700 : (min((arr_8 [i_1] [3] [1] [i_5 - 1]), (arr_11 [7] [4] [i_3])))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_20 [0] [i_1] [i_2] [i_1] [i_6] = (((arr_7 [i_2 - 1]) < 7731253160690688005));
                            arr_21 [i_0] [i_1] [i_2 - 2] [i_2] [10] [0] = (13 / 904057605);
                            var_25 += ((((221 ? 1258303252 : (arr_5 [i_0] [i_6]))) & (arr_7 [i_2 - 1])));
                            arr_22 [i_1] [0] [i_6] &= var_5;
                            arr_23 [i_0] [i_1] [6] [i_3] [i_6] = (((var_16 | -6663) & (arr_9 [i_2] [i_2 + 2] [i_2 + 2] [4] [i_6 + 1] [i_6])));
                        }
                        arr_24 [i_0] [i_1] [i_2] [i_3] = ((-var_0 ? (min(-1820506214, ((var_5 ? -7731253160690687990 : var_18)))) : var_9));
                        arr_25 [9] [i_1] [i_2 + 2] [i_3] [0] [i_3] = -1794014175;
                        var_26 = (1 ? (((~(arr_8 [i_0] [i_0] [11] [0])))) : -8982587957339781521);
                    }
                    arr_26 [7] [i_1] [i_2] = -104;
                }
            }
        }
    }
    var_27 ^= (~-7731253160690688006);
    #pragma endscop
}
