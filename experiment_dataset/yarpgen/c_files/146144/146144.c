/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_1] [0] = (arr_3 [i_3]);
                        var_14 = 178512173;
                        var_15 = 3305148985;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_16 *= (10235467126908697714 <= var_1);
                        var_17 += (!-2042712895611930231);
                    }
                    var_18 = ((~(max((max(10235467126908697716, (arr_3 [i_0]))), (!var_4)))));
                    arr_15 [i_0] [i_1 - 2] [i_0] = (-((var_6 ? 5672214054433052537 : var_6)));
                }
                var_19 = (arr_14 [i_0]);
                var_20 = ((max(45, (max(3448565641, 192216483674553342)))));
                var_21 = (var_1 & 3260806872);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                arr_21 [i_5] = ((var_1 == (min(-4701714651382093143, ((4701714651382093148 ? 12016522949273631197 : -4701714651382093143))))));

                /* vectorizable */
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    var_22 = (arr_23 [i_7 + 3] [i_5]);
                    arr_24 [i_5] = ((~(arr_22 [i_5] [i_6])));
                    var_23 = 8211276946800853873;

                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        var_24 = ((arr_17 [i_5]) ? var_4 : 4065027629);
                        arr_27 [i_5] [i_5] [i_7] [i_5] = -12665;

                        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_5] [i_6] [i_7] [i_9] = (arr_16 [i_5]);
                            arr_32 [i_5] = (var_2 + 255);
                            var_25 = (~0);
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                        {
                            var_26 = 10235467126908697716;
                            arr_35 [i_5] [i_8 + 2] [i_7] [i_6] [i_5] = ((~(arr_34 [i_7 + 1])));
                        }
                        arr_36 [i_5] [i_5] [i_6] [i_5] [i_5] [i_5] = (((arr_34 [i_7 - 1]) ? var_2 : (60482 / var_9)));
                        var_27 = ((((var_6 ? (arr_22 [i_7] [i_6]) : var_1)) ^ 1439123123));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_39 [21] [i_5] = (arr_18 [i_11]);
                        arr_40 [i_7] [i_7] [i_7 - 2] [i_5] = (101 & 18254527590034998274);
                        arr_41 [i_5] [i_5] [i_7] = 18254527590034998275;
                    }
                }
            }
        }
    }
    var_28 = var_1;
    #pragma endscop
}
