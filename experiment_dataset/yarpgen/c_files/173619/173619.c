/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_16 = ((((((arr_2 [i_0]) ? (((arr_2 [i_0]) / (arr_0 [i_0 + 4]))) : (arr_2 [i_0 - 1])))) ? (((-846739989867423233 ? 100 : 71))) : (arr_0 [i_0 + 4])));
        arr_3 [i_0] = (arr_1 [i_0 + 3] [i_0 - 1]);
        var_17 |= (arr_2 [i_0]);
        var_18 = (max(var_18, (((((!((max(var_2, (arr_2 [i_0])))))) ? (((min((arr_0 [i_0]), 58804)))) : 65535)))));
        arr_4 [i_0 - 1] [i_0] = ((((arr_1 [i_0] [i_0]) < (arr_2 [i_0 + 3]))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = 5811203526365302058;
        var_19 = (min(var_19, (min((((arr_7 [i_1] [i_1]) ? (min((arr_6 [i_1]), var_12)) : (min(88, (arr_7 [i_1] [i_1]))))), (arr_7 [i_1] [i_1])))));
        arr_9 [i_1] |= max(((((max(2097151, var_15)) + ((657862240773182893 ? var_14 : var_12))))), (((((-(arr_1 [i_1] [i_1])))) ? (arr_7 [i_1] [i_1]) : ((var_10 + (arr_5 [i_1]))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                arr_15 [9] [i_3] = 2097129;

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_19 [i_2] = ((min((arr_0 [i_3 + 2]), (arr_0 [i_3 - 1]))));
                    var_20 |= ((max(18014398509481983, (arr_18 [i_2 + 1] [i_2 + 1] [12]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_21 = (min((arr_10 [i_2 + 2] [i_3]), (arr_0 [i_2 - 1])));
                                var_22 -= ((18014398509481983 ? (((((-1 ? 2612391606975160344 : 18014398509481972)) > (((arr_23 [i_2] [i_3] [i_4]) ? (arr_17 [i_2 - 1] [i_3] [6] [i_5]) : 118))))) : -2097151));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_23 = (max(var_23, -5));
                    var_24 = (arr_18 [i_2 + 2] [i_3] [i_2]);
                }
            }
        }
    }
    var_25 = (((var_13 ? (max(65530, (-2147483647 - 1))) : -2097152)));
    #pragma endscop
}
