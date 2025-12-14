/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((max((((((arr_4 [i_1]) + 873190533601321603)))), (((((arr_4 [i_0]) >= var_4)) ? var_3 : var_1)))))));
                var_11 = (4503599627370495 <= 742962389);

                /* vectorizable */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [12] = (((arr_7 [i_2 - 1] [i_2] [i_2] [i_2 + 2]) * var_7));
                    arr_10 [i_0] = (!var_2);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [i_4] [i_4] = min((arr_12 [i_3] [i_4]), (((-114 ? 742962382 : -32767))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_12 = ((((arr_23 [i_3] [8] [i_5]) ? var_1 : ((18446744073709551615 ? -29938450547332838 : 8405865518764930439)))) == var_6);
                                arr_25 [i_7] [5] [i_4] [i_4] [14] = ((((((var_0 / var_8) ? (arr_15 [i_3] [4] [i_5]) : (arr_16 [22] [i_4] [i_5])))) * (~-1)));
                            }
                        }
                    }
                    var_13 = (((arr_19 [16] [16] [i_5]) / ((((((arr_23 [i_3] [i_3] [i_5]) ? 65535 : (arr_17 [i_3] [i_4 - 3] [i_4 - 3])))) ? (-8405865518764930418 + var_2) : (((max((arr_16 [i_3] [i_5] [i_5]), var_3))))))));
                }
                arr_26 [i_3] = (((arr_14 [i_3]) ? ((var_4 / (arr_16 [i_3] [i_4] [i_3]))) : 13489773298779031563));
                arr_27 [i_3] = (min((((!-16709) ? 226598902368536751 : var_7)), (((((arr_15 [i_3] [i_4 + 1] [i_3]) > var_1))))));
            }
        }
    }
    #pragma endscop
}
