/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((28753 ? 67043328 : 67043328));
    var_13 = var_3;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 + 1] = ((((arr_0 [i_0 + 2]) || (arr_0 [i_0 + 1]))) ? -5546471692553929326 : ((((2048 != 6222030820609504768) ? (max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))) : (arr_0 [i_0 + 1])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_14 = ((var_6 <= (((arr_6 [i_1]) / (arr_6 [i_1])))));
                        var_15 ^= (min(((((((arr_0 [i_3]) ? var_7 : var_4)) / 65535))), ((64812 ? 6222030820609504786 : (arr_10 [i_3 + 1] [6] [6] [i_0 - 1])))));
                        var_16 = (max(var_16, (arr_0 [i_0])));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_17 = (min(var_17, ((((1 ^ 1) << ((((((arr_7 [i_0 + 3] [i_0] [i_4] [i_0]) ? (arr_0 [i_0]) : 12224713253100046847)) == ((6222030820609504761 * (arr_1 [5] [0])))))))))));
            var_18 = 6222030820609504783;
            arr_13 [i_4] [i_0] = (((-561174793987478480 - 12224713253100046832) ? ((((min((arr_3 [14]), var_9))) ? ((1 ? var_0 : var_11)) : (((var_2 ? (arr_5 [11] [16] [i_0 - 1]) : 24576))))) : (arr_9 [14])));
        }
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            arr_16 [i_0] [i_0] [9] = (max((max((max(6222030820609504783, (arr_7 [i_5 - 1] [i_5 - 1] [7] [14]))), var_4)), (((var_0 ? (((arr_1 [i_0] [4]) / var_6)) : var_11)))));
            arr_17 [i_5] [i_0 + 3] = (max(((6222030820609504768 ? ((var_3 ? 1 : (arr_4 [i_0] [i_5 + 1]))) : (min(2147483636, (arr_9 [4]))))), var_11));
            var_19 = (((arr_11 [i_0] [16] [16]) != (4227923967 * -19869)));
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = ((((min(((((arr_18 [i_6]) || -134217728))), (arr_18 [i_6])))) ? 6222030820609504768 : ((((!-23390) ? (var_2 || 22269) : (((arr_20 [6]) ? -78 : var_10)))))));
        arr_23 [i_6] = (min(((max((arr_19 [18]), (arr_21 [i_6])))), 1));
        var_20 |= ((-(max(((((arr_19 [i_6]) + var_4))), 1069547520))));
    }
    var_21 = (min(var_21, 12224713253100046848));
    #pragma endscop
}
