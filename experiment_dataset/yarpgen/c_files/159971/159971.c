/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = -0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, -649262766));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_0] [12] |= 32736;
                        var_13 = ((((11 ? var_3 : (arr_12 [i_1] [i_2] [4])))) ? (arr_12 [14] [i_1] [i_1]) : ((-(arr_12 [i_3] [i_1] [i_0]))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_14 = (((((arr_6 [i_1] [i_2]) ? 32736 : 4294967271)) << ((((((max(0, var_8))) ? (arr_10 [i_4] [i_2] [i_1] [i_0]) : (arr_11 [i_0] [i_1]))) - 3800720783))));
                        arr_17 [i_0] = ((((((~(arr_7 [i_2]))) << (!var_0))) ^ (((!(((var_1 ? (arr_14 [i_0] [i_0] [i_0] [11]) : var_5))))))));
                        var_15 = (((((!(arr_9 [i_4] [i_2] [i_1] [6]))))) ^ (max(((var_9 ? var_2 : (arr_9 [i_0] [i_1] [i_2] [i_4]))), -12951)));

                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            var_16 = ((((min(var_2, (arr_7 [i_0])))) * ((min((!10), (arr_10 [14] [i_1] [i_2] [i_4]))))));
                            arr_20 [12] [i_1] [12] [i_4] [i_0] [i_1] [14] |= ((~((4294934559 ? (arr_18 [i_1] [i_5 - 1] [i_5 + 4] [i_5] [i_5] [i_5 + 4]) : (arr_18 [i_2] [i_2] [i_5 + 4] [i_5] [i_5] [i_5])))));
                            var_17 &= (((arr_19 [i_2] [i_5 - 1] [i_5 + 3] [i_5] [i_5 - 2] [i_5 + 2] [i_5 - 1]) ? (arr_18 [i_1] [i_5 + 1] [i_5 + 2] [i_5] [i_5 + 4] [i_5]) : 4294967291));
                            var_18 = (max(var_18, (((+((255 ? (0 % var_8) : ((var_8 ? (arr_5 [i_0]) : 2061984893503129254)))))))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_19 = (!var_4);
                            arr_23 [14] [i_6] [i_4] [i_2] [i_2] [i_1] [2] = ((!((min(1230981580, var_9)))));
                        }
                    }
                    var_20 -= ((+((((min((arr_14 [i_0] [i_0] [i_1] [i_2]), 4294967287))) ? (4288288921 - var_1) : ((max(3788202125, var_8)))))));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_21 |= ((((((var_0 <= 4294967278) ? ((-17639 ? 4294967293 : var_5)) : (((((arr_21 [i_7] [i_7]) && 4294934559))))))) != ((var_3 ? var_1 : (arr_4 [i_7])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_22 = (max(var_22, (!var_7)));
                                var_23 = (max(var_23, ((max((((((arr_10 [i_7] [i_7] [i_10] [i_11]) - var_0)))), (arr_8 [i_8] [i_9] [i_10 + 2] [i_11]))))));
                                var_24 |= (((var_7 <= 4294967280) << ((((3426740323 ? 32741 : 3788202125)) - 32735))));
                            }
                        }
                    }
                    arr_37 [i_7] = ((max(-8691188088561302227, 28454)));
                }
            }
        }
        var_25 += 44;
    }
    #pragma endscop
}
