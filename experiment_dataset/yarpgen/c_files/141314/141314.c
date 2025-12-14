/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-41 ? 15 : 41);
    var_15 = ((-(((((41 ? 18822 : -42))) ? (((max(-33, 44)))) : (min(var_8, 6943024764379352856))))));
    var_16 = (min(var_16, var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_10 [i_2] [i_1] [i_2] [18] [0] |= ((-9223372036854775807 - 1) ? (((arr_5 [i_0] [i_0] [i_0]) + -1)) : 20);
                            var_17 = (arr_9 [i_1] [20] [0]);
                            var_18 = (((((-33 ? (arr_1 [i_4]) : -56))) ? (arr_4 [i_1] [i_3 + 2] [i_3 - 1] [i_3 + 2]) : (((!(arr_3 [17] [9] [i_2 + 4]))))));
                            var_19 = (arr_7 [i_0] [i_1] [i_1] [i_2 - 2] [i_3 - 1] [i_4]);
                            var_20 *= (((arr_4 [i_2] [i_3] [i_3] [i_3 - 1]) ? (arr_4 [i_4] [12] [0] [i_3 - 1]) : 3653406114));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            arr_13 [i_5] [i_1] [i_0] = 86;
                            arr_14 [i_1] [i_1] [i_2] [i_3] [i_3 + 1] [6] = ((-48 ? 11503719309330198774 : 1));
                            arr_15 [i_1] [i_1] [i_1] [6] [7] [i_5] = (arr_4 [i_1] [19] [1] [i_5]);
                            var_21 = (min(var_21, (arr_11 [i_0])));
                            var_22 |= (4175435427277855772 ? 18446744073709551615 : (arr_12 [i_0] [i_0] [19] [i_2] [i_3] [i_5]));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_18 [12] [6] [21] [i_3] [i_1] [i_6] = ((-((85 ? -26830 : (arr_11 [i_1])))));
                            var_23 = (min(var_23, (arr_2 [i_2 + 4] [i_2 + 3])));
                        }
                        arr_19 [i_3] [i_1] [i_1] [i_3 + 2] [i_1] = ((0 ? 4198725827 : 56));
                        var_24 = (((arr_12 [i_0] [1] [i_1] [16] [15] [i_3 + 2]) ? ((((arr_2 [i_0] [i_3 + 1]) ? 0 : 56))) : 16216950426094113085));
                    }
                }
            }
        }
        var_25 = (min(var_25, (((252 ? (1 == 4480900695774893379) : ((11503719309330198780 ? 11503719309330198763 : 0)))))));
    }
    #pragma endscop
}
