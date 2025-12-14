/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 = (arr_4 [i_0 - 1] [i_0] [i_1]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_2] = var_3;
                    var_11 = (min(var_11, (((((min(1819807400, 4294967295))) && ((max(var_7, 15965))))))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_12 = (min(var_12, (((var_9 * var_7) ? (!4294967295) : (((~var_1) | (max(var_9, 1))))))));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_13 = (!var_8);
                        var_14 = (max(var_4, (arr_17 [i_3] [i_1] [i_0 - 1] [i_0])));
                        var_15 = (arr_7 [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_16 = var_5;

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_17 = (min(var_17, ((max(((max((max((arr_13 [i_0] [1] [i_3] [1]), var_7)), (max(127, var_0))))), (max(-var_2, var_4)))))));
                            arr_26 [1] [i_0] [i_5] = (((max(var_2, (arr_15 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_5] [i_6]))) ^ ((min((var_2 - 554153860399104), var_6)))));
                            arr_27 [i_0] [18] [i_0] [i_0] [i_6] [8] = ((((((!(arr_7 [i_0 + 1] [i_0]))))) >= (((~var_9) / (((var_1 >> (var_2 - 25019))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_18 = (arr_8 [i_0] [i_1]);
                                var_19 = (max(var_19, ((((~var_9) % (((960 ? (arr_3 [1]) : var_7))))))));
                                var_20 -= var_5;
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_41 [i_0] [i_0] [i_9] [24] [24] [i_0] [i_9] = var_6;
                                var_21 = (max((((max(var_7, var_7)) ? (((var_3 ? var_9 : var_7))) : (arr_23 [i_0] [i_0]))), ((min(var_1, -127)))));
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_22 = 4294967295;
                        var_23 = (max(var_23, var_6));
                    }
                    var_24 = 527765581332480;
                }
                var_25 += var_7;
                var_26 = (((min((min(var_3, var_8)), (var_4 + 64275558))) + -var_1));
            }
        }
    }
    var_27 *= (min(var_0, var_7));
    var_28 = (min(var_28, ((((~var_6) ? (~var_2) : ((~(~var_1))))))));
    #pragma endscop
}
