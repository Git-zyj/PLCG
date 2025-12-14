/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((var_12 & var_16) >= (arr_0 [i_0])));
                var_17 = 18446744073709551605;
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_18 ^= (((((~(~-4759)))) ? ((((!(arr_2 [i_2]))))) : var_2));
        arr_10 [i_2] = (((12288 - var_13) - (((arr_1 [i_2]) | (max(12308, var_3))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_19 = ((((max(0, (arr_12 [i_3] [i_3])))) ? ((~((var_9 ? 11 : (arr_12 [i_3] [i_3]))))) : (((((arr_11 [i_3] [i_3]) <= (((arr_12 [23] [i_3]) ? (arr_11 [i_3] [3]) : (arr_11 [i_3] [21])))))))));

        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            var_20 = (((arr_16 [i_3]) % (((arr_16 [i_4]) + ((var_11 - (arr_15 [i_3] [i_3] [i_4 + 1])))))));
            var_21 = ((~((((-1 & (arr_12 [i_3] [i_4]))) | ((((-2147483647 - 1) & (arr_15 [i_4 - 2] [i_4] [i_3]))))))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_22 = ((((0 ? ((((!(arr_18 [i_3]))))) : var_5)) & ((((((arr_16 [i_3]) >> (53234 - 53231)))) ? (((arr_15 [i_3] [i_5] [i_5]) % (arr_11 [i_3] [i_5]))) : ((((arr_18 [i_3]) ? (arr_14 [i_3]) : var_4)))))));
            var_23 = (min(var_23, 11));
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    var_24 = (arr_11 [i_7] [i_7 - 1]);
                    var_25 = (((var_2 & 1609902961668232242) & (arr_16 [i_6 + 1])));
                }
            }
        }
    }
    var_26 = ((var_2 ? (max(var_6, 20982)) : (((248 & (~var_12))))));
    #pragma endscop
}
