/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (~var_18);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_21 ^= (((((arr_1 [i_1 - 1] [i_1 + 2]) & var_9))) >= (max(var_12, var_1)));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_0] [i_1 + 2] [i_2] = (min((((arr_4 [i_1 - 1] [i_1 + 1] [i_2]) ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]) : 1)), ((-(max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_1 - 1] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 = ((((((((1 ? var_7 : var_4))) ? ((-(arr_9 [i_0] [i_0]))) : (((arr_8 [i_4] [i_2] [i_0]) ? (arr_6 [i_0] [i_1 + 1] [i_2] [i_3]) : var_4))))) ? (~var_6) : (!1927487090171752420)));
                                var_23 -= 1023;
                            }
                        }
                    }
                    arr_13 [i_2] [i_1 - 1] [i_2] [i_0] = (max(((1721804423 ? (-9223372036854775807 - 1) : -1712519940)), (arr_1 [i_2] [i_0])));
                    arr_14 [i_2] [i_2] [i_2] = (max((min(var_15, (4294967295 + 16540698711550100653))), ((max(((max((arr_6 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1]), (arr_5 [i_2] [i_1 - 1] [i_0] [i_0])))), (arr_0 [i_2]))))));
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    arr_18 [i_5] [i_1 + 2] [i_1 + 1] = ((max(var_13, 1)));
                    arr_19 [i_5] = ((((1588211693 ^ (arr_8 [i_0] [i_1 - 1] [i_5 + 1])))) ? ((((!2147483647) > -1))) : (arr_4 [i_0] [i_1 - 1] [i_5 + 1]));
                    var_24 = ((((var_11 ? (arr_1 [i_1 - 1] [i_5 + 1]) : (arr_1 [i_1 + 2] [i_5 + 1])))) ? ((var_9 % (arr_1 [i_1 + 2] [i_5 + 1]))) : ((min((arr_1 [i_1 - 1] [i_5 + 1]), (arr_1 [i_1 + 1] [i_5 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
