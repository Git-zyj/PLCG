/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= min((((var_8 ? var_10 : (!var_2)))), var_2);
    var_16 = (!var_0);
    var_17 = (min(2770178925747022108, ((-4220748616678401929 ? var_14 : (var_9 * var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1 - 1] [i_1] = (((((((3081228654374571216 ? 3081228654374571204 : 1))) ? (min(4127037621, 3081228654374571219)) : -1789889377)) > (((max(0, (!1)))))));
                    arr_9 [i_1] = (((((-(arr_7 [i_1] [i_1 - 1] [i_1])))) ? ((((arr_7 [i_1] [i_1 - 1] [1]) <= (arr_7 [i_1] [i_1 - 1] [i_1])))) : ((max((arr_7 [i_1] [i_1 - 1] [i_1 - 1]), (arr_7 [i_1] [i_1 - 1] [i_1]))))));
                    var_18 = 1520008631;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_2] [19] [i_4] = ((var_9 * (((((var_11 * (arr_7 [i_1] [i_2 - 2] [i_2])))) ? ((max((arr_6 [i_0]), (arr_13 [i_0] [i_1] [i_0] [i_3 + 3] [20])))) : (arr_5 [1] [i_1] [i_2])))));
                                arr_17 [i_0] [i_1 + 2] [i_0] [i_3 + 3] [i_3 + 1] [i_4] [i_1] = (min((!var_8), -3081228654374571184));
                                var_19 = (!var_6);
                            }
                        }
                    }
                    arr_18 [i_0 - 1] [i_1 + 1] [i_2 - 2] [i_1] = (((((3081228654374571219 ? 1 : (-9223372036854775807 - 1)))) ? 1 : ((~((max(1, -111)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_20 = (((((var_8 ? var_13 : ((min((arr_21 [i_5]), (arr_0 [11]))))))) ? var_9 : ((var_1 ? var_12 : (((arr_3 [i_5] [i_5] [i_5]) + (arr_19 [i_5])))))));
                    var_21 ^= (((max((min((-9223372036854775807 - 1), var_11)), ((((arr_7 [i_6] [i_6 - 1] [i_7 + 1]) && 1))))) - (((min(-2770178925747022128, var_4)) / (((arr_14 [i_5] [i_5] [i_5] [i_6] [i_5] [i_6] [3]) + (arr_15 [i_5] [i_5] [i_6] [i_6] [i_6])))))));
                    arr_30 [i_5] [i_7] [i_7 + 1] [i_6 - 1] = -73;
                    arr_31 [i_5] [3] [i_7] [i_7] = (max((arr_25 [i_6 - 1] [i_6 - 4]), (arr_25 [i_6 + 1] [i_6 - 2])));
                    arr_32 [i_6 - 3] [i_7] [i_7] [i_5] = ((((~((0 ? (arr_20 [i_5] [4]) : (arr_12 [i_5] [4] [2] [i_6 - 4] [1]))))) >> (!2770178925747022128)));
                }
            }
        }
    }
    #pragma endscop
}
