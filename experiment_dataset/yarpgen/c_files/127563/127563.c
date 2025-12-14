/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((max(var_5, (49 && 1)))) && ((!((max(var_3, var_12))))))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (((var_3 ^ var_9) ? ((((((max((arr_0 [i_0 - 1] [i_0]), var_8)))) == -3660545956195617260))) : (((arr_0 [i_0] [i_0 + 1]) | (arr_1 [i_0 + 3])))));
        var_16 = ((max((126 * 7), (arr_1 [i_0 + 1]))) + -0);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 = ((((((max(var_10, (arr_4 [6])))) % var_7))) ? var_4 : ((max(var_0, var_0))));
        var_18 = (((!17502) ? ((max(-7, 0))) : (-113 && 4294967295)));
        arr_6 [i_1] = ((((((arr_4 [i_1]) < (arr_2 [i_1] [i_1])))) | (~var_12)));
        arr_7 [i_1] [7] = (16912143370627438553 <= 0);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    {
                        var_19 = (min(var_19, (((((max(126, 51563))) + ((((max((arr_10 [i_2] [i_1] [2]), var_10)) <= ((~(arr_14 [i_1] [i_1] [4] [i_4 - 3])))))))))));
                        var_20 = (max((arr_1 [i_1]), (max((max(16264200940998555380, (arr_12 [i_1] [i_1] [i_1] [i_1]))), (14 >= 48050)))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_18 [6] = (((max((var_4 * var_11), var_5)) + (((var_6 * (((arr_11 [i_5] [2]) ? (arr_8 [i_5]) : var_12)))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_21 [i_5] [i_5] [i_5])));
                    var_22 *= ((61440 ? 40361 : (-9223372036854775807 - 1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                var_23 ^= ((-(((arr_30 [i_8 + 1] [i_8 + 1]) ? (arr_25 [i_9] [i_8 + 1]) : var_0))));
                arr_31 [i_8] = ((-(((163 / 30) + ((var_9 + (arr_27 [i_9] [i_8])))))));
            }
        }
    }
    #pragma endscop
}
