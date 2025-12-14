/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] = -64;
                    arr_9 [i_1] = -5891;
                    arr_10 [i_1] [i_1] [i_2] = (((max((arr_7 [i_1 - 1]), (arr_7 [i_1 + 1]))) >= (45 != 67108863)));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_3] = (max((max(-13967392890833543115, 3476150688)), (max((arr_3 [i_0]), 16719202633645793870))));
                        var_17 = ((!((((!var_8) ? (!1794428064) : ((-5891 ? 471380307 : -64)))))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_16 [i_4] [i_1] [i_1] [i_0] = (arr_5 [i_0] [i_1] [i_2]);
                        var_18 = (((arr_0 [15] [15]) ? (1 != 1) : (arr_11 [i_0] [i_1] [i_2 - 1] [i_4])));
                        var_19 = (min(var_19, ((max(var_5, (((-(arr_15 [i_0] [i_4] [i_2] [i_4])))))))));
                        var_20 = (arr_7 [i_2 - 1]);
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        var_21 = (((arr_4 [16] [i_1] [i_1]) ? (arr_19 [i_1]) : 3633332150381155869));
                        var_22 = (max(63, var_6));
                        var_23 = ((max((arr_19 [i_1]), var_13)));
                    }
                }
            }
        }
    }
    var_24 = var_13;
    #pragma endscop
}
