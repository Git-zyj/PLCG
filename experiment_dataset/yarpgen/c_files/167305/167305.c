/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_6;
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    var_18 = -10042262399274310666;
                    var_19 -= (((((1 < (104 ^ 192)))) ^ -var_8));
                    var_20 = ((-1 >= ((((((arr_2 [i_2]) + 123))) ? 4194376182 : ((((arr_5 [i_0] [i_1 + 1] [i_1] [i_1 - 1]) ? (arr_2 [i_1]) : (arr_4 [16]))))))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_21 = (max((!1610612736), (((arr_8 [i_1] [0]) ? (((((arr_6 [i_0] [20]) <= 10042262399274310668)))) : ((-28 | (arr_0 [i_1 - 4])))))));

                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_22 = (((((arr_2 [i_1 - 3]) > (-9223372036854775807 - 1))) ? (arr_2 [i_1 - 2]) : (((arr_2 [i_1 - 2]) - 17878231760541503599))));
                        var_23 = var_15;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_24 = ((9223372036854775807 ? (arr_11 [i_1] [17] [16] [i_1 - 1] [0]) : (arr_11 [i_5] [21] [i_5] [i_1 - 1] [17])));
                        var_25 = (arr_6 [i_0] [i_5]);
                    }
                    var_26 ^= (min((arr_9 [i_0] [i_0] [i_0] [i_0]), ((min(1, (arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1]))))));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_27 = (min(var_27, (((((((min(1, 1))))) ? ((((~27) ? (max((arr_17 [i_0] [5] [18] [4]), var_15)) : ((208 ? 1 : 2004))))) : (((-95 ? 9111759726415534713 : 17865))))))));
                                var_28 = ((((((max(-8029510926263775900, 0))) ? (1 - var_5) : -32761)) ^ ((((2010 & var_7) ? 1 : var_1)))));
                            }
                        }
                    }
                    var_29 = 0;
                    var_30 = var_10;
                    var_31 = (((((((var_14 ? (arr_17 [21] [i_6] [i_0] [i_0]) : (arr_3 [i_0] [i_0])))) ^ 1)) & (-120 ^ 47671)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_32 = (arr_24 [8] [i_1] [2] [i_1] [i_10] [i_9]);
                                var_33 = (((((((((arr_12 [17] [i_0] [i_6] [i_6]) ? var_9 : (arr_6 [i_9] [i_9]))) <= (-104 * var_7))))) <= (arr_6 [i_1 - 1] [i_9])));
                                var_34 = (arr_14 [i_0] [i_0] [i_0] [i_0]);
                                var_35 = (-((((max(38698, (arr_10 [i_0] [16] [20] [13] [i_0])))) ? (((arr_26 [i_9] [0] [0] [i_9] [0]) ? (arr_14 [i_1] [5] [i_9] [i_9]) : (arr_28 [i_0] [i_0] [i_6] [21] [i_10] [i_0]))) : -104)));
                            }
                        }
                    }
                }
                var_36 = ((~((-((4294967295 ? 428553815246397792 : (arr_24 [i_1] [5] [i_1] [i_0] [i_1] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
