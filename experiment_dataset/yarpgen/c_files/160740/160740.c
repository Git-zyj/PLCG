/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(948210029, ((((min(157, var_1))) + ((max(167, 150))))));
    var_12 = (((((-var_0 + 2147483647) >> (var_4 - 73))) | ((((145 ? 203 : 203)) >> (min(2147483647, 0))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = ((arr_3 [i_0 - 2]) >> (((((((((arr_2 [5]) | 203)) + 9223372036854775807)) >> (((!(arr_3 [i_0])))))) - 1868806900017698762)));
                var_14 = ((((max(119, (203575708 < 509104789)))) > (524287 > 203)));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_6 [i_0 - 1] [16] [1] = ((((!((min((arr_2 [i_0]), (arr_3 [i_1]))))))) ^ (arr_1 [1] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = 379656852;
                                arr_13 [i_0] [i_1] [i_2] [1] [i_2] = arr_10 [i_0] [i_1] [i_2] [i_3] [i_4 + 1];
                                var_16 = (min((((-1 ^ ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) > -4)))))), (arr_2 [i_3])));
                            }
                        }
                    }
                    var_17 = ((((((arr_11 [i_0] [2] [i_0] [i_0] [6]) >> (1045187755 - 1045187751)))) < (-1 - 334391917)));
                    var_18 = (+(((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_7 [i_0] [13] [i_0 - 2] [i_0 - 1] [17] [i_0]))) - -1306184923)));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] [21] = 379656865;
                    var_19 = arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0];
                    var_20 = (+-1933330835);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_5] [i_7] [i_1] = (((arr_10 [i_0] [18] [i_5] [0] [i_7 + 3]) ^ (arr_4 [1] [9] [i_5] [i_5])));
                                arr_23 [i_0] [i_7] [i_0 - 3] [16] [16] [i_0] = ((-((-334391917 | (arr_0 [i_1])))));
                                arr_24 [i_0 - 1] [i_7] = (arr_20 [i_0] [i_1] [i_5] [i_5 + 3] [i_5] [16] [i_7 - 2]);
                                arr_25 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7] [14] = 119;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (1602571780 ^ var_10);
    #pragma endscop
}
