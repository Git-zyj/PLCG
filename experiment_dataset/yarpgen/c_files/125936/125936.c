/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (((233 ? 8 : var_1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = ((((((((var_6 ? 26 : 1566102931))) ? ((var_7 ? var_5 : -1)) : 1828940191))) ? ((((arr_2 [i_0 + 3] [i_1]) ? (((arr_5 [i_1] [10] [i_0]) ? (arr_5 [i_0 - 2] [i_0] [10]) : (arr_5 [1] [i_1] [i_0]))) : (arr_5 [i_0] [i_0] [i_0 + 2])))) : ((8184 ? 1566102932 : -20))));
                var_17 += ((((491292153 ? -10671 : var_10))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_11 [9] [i_3] = (((((var_0 ? var_9 : (((arr_9 [i_2] [i_2] [i_2]) ? var_0 : (arr_2 [8] [i_3])))))) ? (((((var_5 ? 1 : (arr_3 [i_3] [i_2])))) ? 2728864376 : ((((arr_3 [i_2] [i_3]) ? (arr_3 [i_2] [i_3]) : var_12))))) : ((((((arr_2 [i_3] [i_2]) ? (arr_7 [i_2] [5]) : -878251084))) ? var_1 : ((var_2 ? 230 : (arr_4 [i_2])))))));
                arr_12 [i_3] = ((((((((var_11 ? var_4 : var_2))) ? 31 : 1566102931))) ? (((((1 ? 521518556 : 1774585670))) ? 2305843009213693951 : var_0)) : (arr_10 [i_2])));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_2 + 1] [i_3] [2] [i_4] [i_5] [2] [i_3] = -36;
                                var_18 = ((((48 ? 7593456547076055605 : var_11))));
                                var_19 *= ((((((var_9 ? var_12 : 240))) ? ((var_9 ? (arr_14 [i_2] [i_3] [1] [i_5]) : var_12)) : 19)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
