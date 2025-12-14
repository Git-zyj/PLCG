/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_20 &= (arr_1 [i_0]);
        var_21 = (!5);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = ((815410127 >> (2047 - 2018)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_23 = var_19;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [i_4] [i_3] [i_1] [i_1] = (max((min(((min(815410135, (arr_8 [i_2] [i_4])))), 144113680892865709)), (((9223372036854775784 == (arr_10 [i_1] [i_3]))))));
                                var_24 = ((-((((max(-9110136608314681501, 40185)) > (1 | 0))))));
                            }
                        }
                    }
                    arr_20 [i_1] [i_1] = -52170404;
                    var_25 = (min((((((max(var_1, 127))) ? (!1) : 10))), 815410127));

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_26 = (min(var_26, ((max(((39 ? (min(2247993615, (arr_13 [i_2] [i_6]))) : (((min(var_5, var_13)))))), -1)))));
                        var_27 += (min((!-629429772302391133), (min((arr_5 [i_2]), var_2))));
                    }
                }
            }
        }
    }
    var_28 += var_7;
    #pragma endscop
}
