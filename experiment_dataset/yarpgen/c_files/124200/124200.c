/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 1));
    var_12 = (((((((1148642594 ? 0 : -1591266219491578619)) != 3938827060725999758)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = -5716842160455495279;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [18] [i_1] [1] [1] = (14507917012983551862 != 1);

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_14 = (~137);
                            var_15 = (-1 && 1761139356);
                            arr_16 [i_0] [i_1] [1] [i_3] [i_3] [i_3] [i_4] = 255;
                        }
                        var_16 = 2988477843;
                        var_17 = 18446744073709551610;
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        arr_20 [13] [i_5] [1] [i_1] = (16034576737916178319 >= 14507917012983551862);

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_18 = -118940210;
                            arr_24 [1] [i_1] [i_0] = (11924817067708871935 * 4294967284);
                        }
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_19 = (38 < 1);

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_30 [i_0] [i_7] [8] [8] [i_8] = (2757705598738332747 < 1);
                            var_20 = ((1 >> (17104311080092711265 - 17104311080092711256)));
                        }
                    }
                    arr_31 [i_1] = 3938827060725999758;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_35 [i_9] [0] = ((6119536934421455216 * (4294967284 && 1)));
        arr_36 [5] [i_9] = ((-((max(23155, -15774)))));
        var_21 = 49570;
        var_22 = -502107481;
    }
    var_23 = 12327207139288096400;
    var_24 = ((-var_2 >> (15965 - 15947)));
    #pragma endscop
}
