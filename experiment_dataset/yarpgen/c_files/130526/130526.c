/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [4] [1] = (arr_6 [i_0] [i_0]);
                    var_18 += (((((((arr_5 [21]) ^ (arr_7 [19] [i_1] [19]))) ^ (arr_2 [i_1 + 1] [i_1 - 2])))) ? (arr_5 [i_0]) : (((((max(0, -17))) ? ((((arr_2 [i_0] [i_0]) == var_5))) : ((var_14 ? (arr_6 [i_0] [19]) : 1243880468))))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_19 = var_7;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_20 = (((((var_8 ? ((var_17 ? 1310979187 : 1449123537)) : (max(717205821, 134217728))))) && (arr_13 [i_4] [i_4])));
                    var_21 = (max(var_21, (arr_16 [i_5])));
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            var_22 = ((var_6 && (!-29740)));
            var_23 = var_2;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_24 |= ((var_2 + (arr_26 [i_3] [i_6] [i_3 + 2] [15])));
                            var_25 = ((arr_23 [i_3 - 2] [i_3 - 1] [i_3 - 1]) & (arr_23 [i_3 + 1] [i_3 + 1] [i_3 - 2]));
                            var_26 = var_3;
                            var_27 = (max(var_27, ((((arr_23 [i_3 + 1] [i_3 + 2] [i_3 + 2]) ? 12734 : (arr_23 [i_3 - 1] [i_3 - 1] [i_3 - 2]))))));
                            arr_32 [10] [i_6] [i_8] = (arr_16 [i_3 - 2]);
                        }
                    }
                }
            }
            var_28 = (arr_22 [3]);
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            var_29 = (((~-803435351) >> ((((-(arr_23 [12] [i_10] [i_10]))) + 19657))));
            var_30 = (min(var_30, ((((1449123541 ? 0 : 9771899537412126605))))));
        }
    }
    #pragma endscop
}
