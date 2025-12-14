/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = ((+((((var_10 >> (((arr_1 [i_0]) + 6126274949490498496)))) << (((min(1387153424, var_2)) - 1225477167))))));

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = ((((((((arr_7 [0] [i_1] [i_2 - 4] [i_3]) ? (arr_1 [i_1]) : (arr_6 [i_0] [i_1] [i_3])))))) == (min(-1, (3992308338 - -961153159)))));
                                var_22 = (min(-903465563, 56244));
                                var_23 = (~1753072491);
                            }
                        }
                    }
                    var_24 = arr_1 [i_2];
                    var_25 = (arr_2 [i_0]);
                    var_26 |= ((((~4095) == (arr_7 [i_0] [4] [i_1] [4]))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_27 |= (-111 | 15087);
                    var_28 = (((1250845226 < 302658961) ? var_11 : (((arr_15 [i_0] [i_0] [5]) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_0])))));

                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        var_29 = var_4;
                        var_30 = (arr_12 [i_0] [i_0]);
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                {
                    var_31 = (min((((!(((arr_24 [i_7]) > (arr_23 [17])))))), (min(var_10, ((var_12 ^ (arr_21 [i_7] [i_7])))))));
                    var_32 &= (~7011050151886042142);
                    var_33 = (~1959545628);
                    var_34 = (min(var_34, 20));
                }
            }
        }
    }
    #pragma endscop
}
