/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (max((((!(((var_14 ? var_2 : (arr_4 [i_1] [i_0]))))))), (arr_0 [21])));
                arr_7 [i_0] [i_0] [i_0] = ((((var_6 != (arr_1 [i_0]))) ? (((!(arr_1 [i_0])))) : ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
                arr_8 [2] [i_0] = (((((arr_5 [i_0]) != (arr_5 [i_0])))) <= -24434);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 &= var_5;
                                var_18 *= ((!(arr_11 [i_3] [16] [i_1] [i_0])));
                                var_19 = (max(var_19, ((max((-2147483647 - 1), 24419)))));
                                var_20 -= 24400;
                                var_21 = (17 * 1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((1 ? 1 : -99))) ? (max((((151593833650029740 ? -7123031558849325462 : -1944109202))), var_4)) : -1);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_22 [i_6] [i_6] [i_5] = ((~(((arr_6 [12]) ? ((min((arr_5 [14]), var_1))) : ((max(var_1, 24428)))))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_23 = (arr_18 [i_5]);
                                var_24 = (min(var_24, (arr_2 [i_6])));
                            }
                        }
                    }
                }
                arr_29 [i_5] [i_5] [i_5] = (max(((((arr_24 [i_5] [i_5] [i_6]) <= (arr_24 [i_6] [i_6] [i_5])))), var_7));
            }
        }
    }
    #pragma endscop
}
