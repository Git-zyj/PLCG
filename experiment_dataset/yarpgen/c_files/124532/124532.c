/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_0 [i_4 + 1]) ? ((((arr_0 [i_4 - 1]) || (arr_0 [i_4 - 1])))) : ((var_7 ? 32743 : (arr_0 [i_4 + 1])))));
                                var_14 = ((((!(arr_9 [i_4] [i_3] [i_1] [i_0 - 1]))) ? (max((arr_8 [i_0] [i_1] [i_2] [i_4 - 1]), (var_4 | var_2))) : (((((arr_5 [i_4] [i_4 + 1] [i_4 - 1]) && 221547211))))));
                                arr_13 [16] [i_4] [i_2] [i_1] = (min(((((((arr_5 [i_2] [i_2] [i_0]) ? 735531868377887960 : 55441))) ? (arr_3 [i_1] [i_3]) : (~var_10))), (arr_1 [5])));
                                var_15 = ((-((((arr_2 [i_2]) || (arr_11 [i_0 - 1] [i_1] [i_1] [i_2] [1] [i_4]))))));
                                var_16 -= 7607379790855339935;
                            }
                        }
                    }
                }
                var_17 &= (min(var_0, (((arr_1 [21]) ? (arr_5 [i_1] [i_0] [i_0 - 1]) : var_12))));
                var_18 = (max(var_18, (((~(max((max(var_0, (arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [3]))), (((-12400 - (arr_2 [i_0])))))))))));
            }
        }
    }
    var_19 = ((((((1 > 8799220833124126012) >> (min(var_10, var_2))))) ? (max(-var_7, (var_9 % var_10))) : (max((!var_4), (max(var_10, var_12))))));
    var_20 = (!-var_11);
    var_21 = (max(var_21, (((!((max((min(4039921508, var_12)), var_0))))))));
    #pragma endscop
}
