/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 &= ((2 ? ((0 ? (~-1) : 2)) : (!0)));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_1] = ((((min((0 & 0), ((min(-2, (arr_5 [i_0] [i_1] [0]))))))) ? (min((~30), -1)) : ((31637 ? (arr_2 [i_2]) : 1))));
                    var_13 = ((max(((-(arr_0 [i_0])), ((min(1, var_8)))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_14 = (max(var_14, -4022));
                    var_15 = 27753;
                }
                var_16 *= (((var_10 || var_3) ? ((min(((!(arr_5 [1] [17] [i_1]))), (arr_7 [i_0] [i_1])))) : ((min((arr_7 [i_0] [i_1]), (arr_10 [i_0]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_0] = (min(var_10, ((min(11, (arr_12 [i_1] [i_1] [i_5]))))));
                            var_17 = (~1016);
                            var_18 = (((((max(14517, 0))) <= var_7)) ? var_6 : (((((max(1, -15235))) ? (4021 <= var_1) : (-61 % -20)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_19 |= (arr_18 [i_7 + 1] [i_6] [i_1] [i_0]);
                            arr_22 [i_0] [i_1] [i_1] [i_7] = (((min(var_4, var_6)) + (arr_0 [i_1])));
                            var_20 = (!62708);
                            var_21 = (arr_17 [i_6] [i_0]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            var_22 = (max((((arr_25 [i_9 - 1] [i_8 - 1]) + 0)), (30 / 14502)));
                            var_23 = (max(var_23, ((min((8 << var_4), ((127 ^ (arr_24 [i_10]))))))));
                            var_24 = ((!(((-64 ? 11 : (var_6 * 0))))));
                        }
                    }
                }
                var_25 -= -1;
                var_26 = (min(var_26, (arr_24 [14])));
                var_27 &= ((((min((arr_23 [20] [20]), 60))) ? (((!((min(0, var_6)))))) : ((1 ? (((arr_29 [i_9] [i_9] [i_9] [i_8]) - 1)) : ((~(arr_31 [i_8 - 1] [i_8 - 1])))))));
            }
        }
    }
    var_28 = (min(var_28, ((min((((!(0 * var_8)))), ((var_4 + ((var_6 ? -74 : var_1)))))))));
    #pragma endscop
}
