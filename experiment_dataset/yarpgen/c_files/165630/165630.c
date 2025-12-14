/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min((((65534 << (((-64 + 84) - 7))))), (min(32767, 9223372036854775807)))));
    var_17 = ((((max((~-379426674811393768), (((var_15 ? var_1 : var_7)))))) ? (min(var_14, -80)) : (!var_4)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] = var_0;
                                var_18 *= ((-(arr_6 [i_0] [i_0])));
                            }
                        }
                    }
                    var_19 ^= (((((var_8 << (((-63 + 87) - 10))))) <= (arr_11 [i_0 - 1] [i_1] [10] [10] [i_1])));
                }
                var_20 = ((((max(97, 65)))) + (max((arr_9 [i_0] [i_1] [i_0 - 1] [i_1] [i_1]), (((arr_1 [i_0]) ? 10 : (arr_7 [i_0] [i_0 - 1] [i_0] [10]))))));

                for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_0] [i_0] = (((max((var_4 < var_6), (min((arr_0 [i_0 - 1]), (arr_3 [1]))))) % 54));
                    var_21 = (((((((var_9 ? (arr_4 [i_0] [i_1]) : 875467361)) ^ ((((arr_10 [i_0 - 1] [i_5]) && 0)))))) >= ((((((arr_6 [3] [i_1]) / var_9))) ? (arr_10 [i_0] [1]) : (arr_7 [i_1 - 2] [i_5] [i_5] [i_5])))));
                    arr_18 [i_0] [i_0] [i_1] [i_0] = ((((((arr_15 [i_0 - 1] [i_5 - 2] [i_1]) ^ 1))) ? ((max((arr_16 [i_5 - 1] [i_1 - 3] [i_0 - 1]), (arr_16 [i_5 - 1] [i_1 - 2] [i_0 - 1])))) : ((max((arr_16 [i_5 - 1] [i_1 - 3] [i_0 - 1]), (arr_4 [i_1 - 2] [i_1]))))));
                    arr_19 [i_1] = (max((((arr_3 [i_0 - 1]) | var_13)), (-127 - 1)));
                }
                for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    var_22 = 127;
                    arr_23 [i_1] [i_1] [i_0] [i_0] = -55;
                    arr_24 [i_1] [i_1] [i_1] = ((((((((arr_6 [i_0 - 1] [i_0]) ? (arr_21 [i_0] [i_1]) : 65535))) ? ((((arr_14 [i_6 + 1] [1] [i_0]) ? (arr_16 [i_0] [4] [i_6]) : 32767))) : -64))) ? (((var_7 + 2147483647) << (((max((arr_0 [i_6]), (arr_21 [i_1] [i_1]))) - 1469860564)))) : ((9223372036854775807 ? (min(1437090685, 54)) : (min(875467358, (arr_1 [6]))))));
                    arr_25 [i_1] [i_1] [i_0] = (arr_13 [i_1] [i_1] [i_1]);
                }
                for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    arr_29 [i_1] [3] = (i_1 % 2 == 0) ? ((((-875467358 / -20973) % ((max((min((arr_27 [i_0] [i_1]), -64)), (arr_22 [i_0] [i_0 - 1] [i_1] [i_0 - 1]))))))) : ((((-875467358 / -20973) * ((max((min((arr_27 [i_0] [i_1]), -64)), (arr_22 [i_0] [i_0 - 1] [i_1] [i_0 - 1])))))));
                    arr_30 [i_1] [i_7] [7] [i_1] = ((arr_14 [i_7 - 1] [i_0 - 1] [i_1 + 1]) * ((34 % (arr_6 [i_1 - 3] [i_1 - 3]))));
                    arr_31 [11] [i_1] [i_1] [i_1] = (((((((arr_8 [i_7] [i_0] [i_1] [i_0] [i_0]) << (((arr_13 [2] [2] [i_7]) - 1090947619457586588)))) != var_3))) + ((((min(var_1, -1151021739))) ? var_15 : (arr_5 [i_0] [i_0 - 1] [3]))));
                }
                arr_32 [i_1] [i_1] = ((max((min(var_10, (arr_13 [i_0] [i_1] [i_1]))), ((min((arr_26 [i_0] [i_0] [4]), 79))))));
            }
        }
    }
    #pragma endscop
}
