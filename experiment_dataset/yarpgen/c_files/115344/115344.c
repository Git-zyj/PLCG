/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_4;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_13 = (((arr_3 [i_0 - 1] [i_1] [i_3]) + (min((((arr_1 [i_0 - 1] [i_2]) << var_0)), 1))));
                        var_14 = (min(var_14, ((-(((!(arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((min(2169399258059221086, (((13851399838978156223 ? 48048 : 0))))));
                        arr_13 [i_3] &= ((((((arr_6 [i_0 - 1] [i_0 - 1]) ? (arr_6 [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 1])))) ? var_5 : (((var_10 ? 54 : var_3)))));
                    }
                    for (int i_4 = 4; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_2 - 2] [i_4] = (!9174230747562097418);
                        arr_17 [i_0] [i_2 - 1] [i_4] = (arr_8 [i_0] [i_1] [i_0] [i_4 + 1] [i_4] [5]);
                        arr_18 [i_2 + 1] = ((var_7 & (arr_15 [i_1] [i_1] [i_4 + 3] [5] [i_4] [3])));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_15 = ((var_6 ? (min(6521868217768956666, 47898)) : (arr_5 [i_1] [i_2] [i_4 - 4])));
                            arr_22 [i_0 - 1] [i_0] [5] [i_0 - 1] = 55;
                            var_16 = 13851399838978156223;
                            var_17 |= (((((var_10 << (((arr_8 [5] [i_1] [i_1] [i_1] [i_1] [i_1]) - 960))))) ? ((max(17637, (arr_0 [i_0 - 1] [i_0])))) : ((((-32767 - 1) < 2)))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_18 = var_4;
                            var_19 += var_0;
                        }
                    }
                    var_20 = ((~((max((arr_9 [i_0 - 1] [i_1] [i_2] [i_2 - 2]), (arr_9 [i_0 - 1] [i_2] [i_0 - 1] [i_2]))))));
                    var_21 ^= ((((max(var_7, 1))) >> (((14 != (arr_15 [i_0 - 1] [i_0] [i_2 + 1] [i_2] [i_2] [i_2]))))));
                }
            }
        }
        var_22 = var_9;

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_23 = (arr_25 [i_0] [i_7] [i_7]);
            var_24 *= ((18446744073709551608 ? 9174230747562097411 : 2009861316));
            arr_28 [i_0 - 1] [8] [8] = var_9;
            var_25 = var_7;
            var_26 = (min(var_26, ((((arr_24 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_7]) + 749391493)))));
        }
        arr_29 [i_0] = var_11;
    }
    var_27 = var_1;
    #pragma endscop
}
