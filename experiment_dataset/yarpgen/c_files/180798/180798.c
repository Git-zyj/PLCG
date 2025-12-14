/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 1023));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((var_4 > (arr_2 [i_0 - 1])));
        var_13 = (max(var_13, 65525));
        var_14 = (((arr_1 [i_0 + 1] [i_0]) ? (((-(arr_1 [i_0 + 1] [i_0 + 1])))) : (min(var_11, var_3))));
        arr_4 [i_0] = (((((24665 && (arr_1 [i_0 + 1] [i_0])))) << (255 - 248)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_15 = ((-((min(90, (arr_6 [i_1]))))));
        arr_7 [i_1] [i_1] = ((1937705926 ? 124 : 85174708));
        var_16 = (((-var_9 + 4294967285) + (((13010522119525917826 - var_8) ? (((arr_1 [13] [i_1]) ? 2241856016 : 3849901460304910661)) : (((-127 - 1) ? (arr_6 [i_1]) : var_9))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [9] = (arr_6 [i_1]);
            var_17 ^= ((-(var_5 == var_5)));
            var_18 = (min(var_18, (((96 ? 9223372036854775807 : 1)))));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_19 = (min(var_19, (arr_1 [i_1] [i_3 + 2])));
            arr_13 [i_1] = (((((((-32761 - var_0) ? (min(var_5, var_6)) : (arr_8 [i_1]))) + 9223372036854775807)) >> ((-((48530 ? 0 : 28705))))));
            arr_14 [i_1] [3] [i_3] = (((-32767 - 1) ? ((((((arr_5 [i_1]) & 6229468425736641201))) ? (40 - var_11) : (arr_11 [i_1] [i_1] [i_3]))) : ((min(17918, (arr_8 [i_3 + 4]))))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_1] [i_4] [i_4] = -23390;
            var_20 = (max(var_20, ((((var_6 ? 32767 : -29)) ^ var_10))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_25 [i_1] [i_4] = max(7, ((((arr_11 [i_5 - 1] [i_5 - 1] [i_5 + 3]) < 3359770623))));
                        arr_26 [i_1] [i_4] [i_5] [i_6] = (((var_7 >> (!var_10))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
