/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 -= (-962079517 - 199215914);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_14 = ((((962079515 ? (arr_11 [i_3] [i_0] [i_1] [i_0]) : var_6)) >> (((min(-962079517, (arr_3 [i_1 - 1] [i_2 - 1]))) - 2007909615))));
                        var_15 = (min((arr_7 [i_1 + 2]), (arr_8 [i_1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 = (arr_3 [i_0] [i_2]);
                        var_17 = (arr_13 [i_2 + 1] [i_2] [i_1 - 2]);
                    }
                    for (int i_5 = 4; i_5 < 18;i_5 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_2 + 1] [i_5] = ((237 ? 244 : (arr_7 [i_1 + 2])));
                        var_18 = (arr_10 [i_1] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_19 += (!1);

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_20 = ((!(((min((arr_2 [i_0]), var_2))))));
                            arr_23 [i_6] [i_1 - 1] [i_6] [i_1] [i_1 + 2] [i_1 - 1] [i_1] = ((962079528 ? (min(10060482597667091601, -114)) : (((((arr_18 [i_0] [i_1]) > (max((arr_5 [i_0] [i_7] [i_2 - 1] [1]), 6732))))))));
                            var_21 = (min(var_21, ((max(-32083, ((min((arr_11 [i_2 - 2] [i_2] [i_1 + 2] [i_0]), var_7))))))));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_22 = (max(var_22, ((max((~120), 962079528)))));
                            var_23 &= 1;
                        }
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            arr_29 [i_9] [i_9 + 2] [i_9 - 2] [i_9 - 2] [i_9 + 2] [i_9] [i_6] = 58797;
                            var_24 = (max(var_24, ((max(1233379854, (min(116, 30178)))))));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_25 |= (min(35374, ((-(min((arr_8 [16]), var_8))))));
                            arr_32 [i_1] [i_10] &= (max((max((((arr_11 [i_1] [i_2] [1] [i_1]) + 11)), ((min((arr_25 [i_10] [i_6] [i_0] [i_1 - 1] [i_10]), (arr_15 [i_10] [i_10] [i_6] [i_0] [i_1] [i_0])))))), ((((7699428378336309529 ? 7987327788673723403 : var_4))))));
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] |= (min(57186, 6717));
                        }
                        var_26 = (max(var_26, (((-((1 * (((arr_28 [2] [2] [2] [i_2] [i_2] [i_6] [2]) ? (arr_13 [i_0] [i_1] [i_6]) : 249)))))))));
                        var_27 = (min(var_4, ((~(arr_30 [i_0] [i_1] [i_2] [i_6])))));
                    }
                    arr_34 [i_0] [i_0] = (max(2998771046, 5682904801965587354));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_28 = (min(((max(((~(arr_38 [i_0] [i_0] [i_0] [i_0] [i_12]))), (126 && -7)))), (min((((~(arr_38 [i_0] [i_0] [i_0] [14] [i_0])))), (min(-1277440802, (arr_26 [i_0] [i_0] [i_0] [i_11] [18])))))));
                                var_29 = (arr_28 [14] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_30 -= ((0 ? (((arr_1 [i_0] [i_11]) ? (arr_1 [i_12] [i_0]) : 1)) : (((!(arr_1 [i_0] [i_2 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
