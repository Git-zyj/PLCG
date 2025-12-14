/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = arr_5 [i_1] [i_0 + 1] [i_1];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] = ((((((arr_8 [i_0 - 1] [i_1] [i_2]) - (arr_1 [i_1])))) ? 5086764311983190788 : (arr_1 [i_3])));
                                arr_13 [i_1] [i_3] [i_1] = 134216704;
                                arr_14 [i_4] [i_3] [i_3] [i_0] = (-111 & -125);
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_9;
    var_16 |= 2821256156;

    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_17 = ((((((arr_15 [i_5] [i_5]) > (arr_15 [i_5] [i_5]))) ? ((((arr_15 [i_5] [i_5]) ? 125 : (arr_15 [i_5] [i_5])))) : (arr_15 [i_5] [i_5]))) & (((((arr_16 [i_5]) >= (((arr_15 [i_5] [i_5]) - (arr_15 [11] [11]))))))));
        arr_17 [i_5] = 1473711151;
        arr_18 [i_5] = ((((((arr_15 [10] [i_5]) >> (((arr_15 [i_5] [i_5]) - 2019289238))))) + (((arr_15 [i_5] [i_5]) ? (arr_15 [i_5] [i_5]) : 50154440082519547))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_18 *= (arr_15 [i_6] [i_6]);
        arr_21 [9] = (max((arr_15 [i_6] [i_6]), (arr_19 [i_6])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (arr_22 [i_7])));
        var_20 = (min(var_20, (((841641748024631380 ? (arr_19 [3]) : (arr_19 [i_7]))))));
        arr_24 [i_7] = (10 & 65535);
        var_21 = (((18396589633627032068 <= 118) ? ((((arr_16 [i_7]) ? 65535 : (arr_22 [i_7])))) : (arr_15 [i_7] [i_7])));
        arr_25 [i_7] = (((arr_16 [i_7]) ? (arr_16 [i_7]) : (arr_16 [i_7])));
    }
    #pragma endscop
}
