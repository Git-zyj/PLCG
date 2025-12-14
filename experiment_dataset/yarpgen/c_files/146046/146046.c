/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = (min((max((2095618698 & 1752562653), (arr_1 [i_0] [15]))), (((!(arr_0 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_13 [i_2] [1] = var_1;
                            var_11 = (min(var_11, (((min(67104768, 123))))));
                        }
                    }
                }
            }
            arr_14 [6] = (!0);
            var_12 = min((max(var_9, (min((arr_10 [7] [i_1] [i_1] [i_1] [0]), var_4)))), (((var_8 ? ((11 ? 24576 : 0)) : (((var_1 ? (arr_2 [i_0]) : var_4)))))));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_13 = ((((((-2147483647 - 1) % -126))) ? (max(0, 8)) : 1));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_21 [i_0] [1] [9] [i_5] = (~2017612633061982208);
                        arr_22 [i_5] [i_5] [i_5] = 750466063;
                        var_14 = (2017612633061982226 * 0);
                        arr_23 [18] [2] [2] [8] [i_5] [2] |= var_6;
                        var_15 = var_9;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_26 [i_5] [i_5] [i_0] [i_0] [i_6] = var_9;

                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            var_16 = ((var_8 ? (1 + 0) : (min(((max(145, -2243760215423623792))), 15))));
                            var_17 = (min(var_0, (min(var_5, (arr_3 [9] [i_5] [i_9 - 2])))));
                            var_18 = (min(2487645061087314055, -48836940));
                        }
                    }
                }
            }
        }
    }
    var_19 = (min((-6987192931053913570 + -2579), -396091442));
    #pragma endscop
}
