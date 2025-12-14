/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (!18446744073709551615);
                var_13 = arr_0 [9];
                var_14 = (min(var_14, ((min(234, (((arr_6 [i_0]) ? (arr_6 [12]) : (arr_5 [i_0]))))))));
            }
        }
    }
    var_15 = (!8240952);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_16 = (max(var_16, (((((arr_6 [i_2 - 1]) > (arr_9 [i_2 - 1])))))));
                arr_12 [i_2] [3] [i_3] = (arr_8 [i_2]);
                arr_13 [i_2] [1] [0] = (((arr_0 [i_3]) != (((!(((arr_10 [i_3]) == (arr_1 [i_3]))))))));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_17 |= ((~(~var_7)));
                                arr_23 [i_2] [i_3] [i_4] [i_4] [13] |= (((((((153 ? 170 : var_0))) ? (max((arr_15 [i_2] [i_2] [i_2] [i_2]), 2522363088)) : 14977830489537887332))) ? ((((arr_10 [i_2 - 1]) ? (arr_10 [i_3]) : (arr_7 [i_3] [i_2 - 1])))) : ((((-(arr_6 [i_2]))) * var_3)));
                            }
                        }
                    }
                }
                var_18 = (min(var_18, ((max((arr_14 [i_3] [i_2]), ((((arr_9 [i_2 - 1]) - -4294966784))))))));
            }
        }
    }
    #pragma endscop
}
