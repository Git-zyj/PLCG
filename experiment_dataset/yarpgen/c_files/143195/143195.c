/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 = (((223 << (-102 + 103))));
                    var_18 = (--223);
                }

                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    var_19 = (min(var_19, 223));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((-(arr_4 [i_0 + 1]))))));
                                var_21 |= (max((arr_8 [12] [12]), (~-208)));
                            }
                        }
                    }
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_22 *= (((-(arr_17 [i_0 - 1] [i_6 + 3] [i_6] [i_6 + 1]))) <= 239);
                    var_23 = (arr_7 [i_0] [i_1] [i_0]);
                }
                for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_24 -= min((min((arr_8 [6] [6]), (arr_1 [i_0 - 1]))), -33);
                                var_25 ^= (((11 > 32) ? (((-(arr_17 [i_0] [i_0 - 1] [17] [i_7 + 4])))) : (arr_20 [16] [18])));
                                var_26 ^= 230;
                                var_27 *= (min((arr_23 [i_0 + 1] [i_7 + 1] [i_7 + 1]), (((arr_23 [i_0 + 1] [i_7 + 1] [i_7 + 1]) * (arr_23 [i_0 + 1] [i_7 + 1] [17])))));
                                var_28 = (max(var_28, (((min((arr_20 [16] [i_7 + 2]), (arr_20 [10] [i_7 - 1])))))));
                            }
                        }
                    }
                    arr_30 [i_0] [i_1] [i_1] = ((~((min(226, 2)))));
                    var_29 = (min((((10814230750296140146 == (((-(-127 - 1))))))), ((-((~(-127 - 1)))))));
                }
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    var_30 *= (min((min((min(30, -181136541)), (arr_15 [i_10] [i_10 + 1] [i_10 + 1] [0] [i_10 + 3]))), ((-((min((arr_12 [6] [8] [i_1] [i_10] [14] [4]), 30)))))));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_31 = 18446744073709551607;
                                arr_41 [6] [i_11] [6] [12] [6] [6] &= (((((-(arr_32 [i_11] [i_11 - 3])))) && (~30)));
                            }
                        }
                    }
                }
                var_32 = (max(((223 ? (arr_34 [i_0] [13] [i_0] [i_0]) : (!0))), 1));
                var_33 += ((~(((!(arr_2 [i_0] [i_1]))))));
            }
        }
    }
    var_34 += (!var_11);
    var_35 = (min(var_35, 10673761894668090814));
    #pragma endscop
}
