/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((!-7440253676092042806) | var_8))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 = (((((min(var_4, 975393237550700154)) * (arr_1 [i_0]))) * (((var_1 / 63) ? (4383138680616558743 / 27166) : (arr_3 [i_0])))));
        var_12 = var_5;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    {
                        var_13 = (max(var_13, (((var_7 ? ((((arr_13 [i_2] [i_4 - 1] [i_2] [i_4]) / (arr_13 [i_2] [i_2] [i_3 + 1] [i_4 + 1])))) : (((arr_13 [i_2] [i_3 + 1] [i_2] [i_2]) ? 27 : var_5)))))));
                        arr_15 [i_3] [i_1] [i_3 - 1] = ((((min(var_3, 63)))) >= ((min(var_1, (-32767 - 1)))));

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            var_14 = (max(var_14, var_9));
                            var_15 ^= (!9);
                            var_16 = (((((((arr_2 [i_1]) != 9223372036854775807)))) < ((var_6 ? -6951181427296259546 : 38595))));
                            var_17 = var_4;
                        }

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            arr_21 [i_3] [18] [18] [i_4 + 1] [1] = (((arr_19 [i_1] [i_3 + 1] [14] [i_4 + 2]) ? (arr_19 [i_1] [i_3 + 1] [i_1] [i_4 + 2]) : 4294967278));
                            var_18 |= ((var_5 ? -6951181427296259546 : (((2772918129 ? var_6 : var_2)))));
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            var_19 = -40;
                            var_20 ^= (((((max((!var_0), (!8542626449362144452))))) ^ -975393237550700133));
                            var_21 = var_0;
                            var_22 = ((var_1 ? (min(var_3, ((min(var_6, 255))))) : (max(((min((arr_16 [i_1] [i_1] [i_3] [i_4] [i_7 + 3]), 919732692))), ((-7440253676092042806 ? 3122647377 : var_1))))));
                        }
                    }
                }
            }
        }
        var_23 = (max((min((((-127 - 1) ? 33585 : 3599457306312507767)), (((arr_0 [i_1] [i_1]) & 255)))), (((((min(-18, var_6))) > var_8)))));
    }
    #pragma endscop
}
