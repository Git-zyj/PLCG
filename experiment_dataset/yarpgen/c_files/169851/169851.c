/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] = (max(-18, ((max((arr_2 [i_0 - 1] [i_0 + 1]), (arr_6 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = max(-24, (((!(!-39)))));
                            arr_15 [i_3] [i_1] [i_2] [i_1] [i_0] = (((((~((-(arr_6 [i_1])))))) ? ((-((38 >> (24861 - 24834))))) : ((((arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1]) <= var_11)))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_6;
    var_21 = ((!(((-var_2 ? (-30 || var_9) : var_4)))));
    var_22 ^= (((((var_3 && var_8) && 39)) && (min((var_18 && -69), (var_18 || var_6)))));

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_23 = ((!((max(((((arr_21 [i_7] [i_5] [i_4]) && var_7))), (arr_25 [i_4] [i_5] [i_7] [i_6] [i_7] [i_7]))))));
                        arr_27 [10] [i_7] = (max((max(((((arr_24 [i_6 - 1]) || 102))), (min((arr_26 [i_7] [i_5]), var_0)))), 24));
                    }
                }
            }
        }
        var_24 += ((((max((arr_24 [i_4]), -99))) ? 63 : 51));
    }
    #pragma endscop
}
