/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((14841 ? -48 : var_7)));
    var_13 = 1894;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = ((((max(var_6, (arr_0 [i_0 + 3])))) || (((arr_0 [i_0 + 3]) || (arr_0 [i_0 + 3])))));
        arr_5 [i_0 + 3] = (255 ? (max(var_10, 10196934890527511478)) : ((((arr_1 [i_0 - 1] [i_0 + 3]) ? 63642 : ((((arr_2 [i_0 + 3]) > 0)))))));
        arr_6 [i_0 + 3] [i_0 + 3] = ((((arr_3 [i_0 - 1]) ? (arr_3 [i_0 - 1]) : var_6)));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_11 [i_1] = ((+(((~1) ? (arr_10 [i_1 - 1]) : (((18446744073709551615 <= (arr_9 [i_1 + 2]))))))));
        arr_12 [i_1 - 1] = (((((1893 ? 32767 : (arr_9 [i_1 + 1])))) ? ((max((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1])))) : ((32767 ? 41368 : (-2147483647 - 1)))));
        var_14 = (((max(((var_10 ? var_8 : (arr_8 [i_1] [i_1 + 2]))), (63641 | 32767))) <= ((((max(18446744073709551615, (arr_7 [i_1 + 2]))))))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_15 = (((arr_7 [i_1]) ? ((max((arr_9 [i_1]), var_7))) : (arr_15 [i_1 + 1] [i_2])));
            arr_16 [i_1 + 2] [i_2] [i_2 + 1] = 63646;
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_16 = ((((((arr_13 [i_1]) ? var_8 : -1))) ? (max((arr_8 [i_3] [i_3]), (((arr_9 [i_1 - 2]) / var_4)))) : ((((var_9 ? 1 : 441915011)) * (!var_2)))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_17 = ((var_11 ? (((arr_18 [i_1 - 2] [i_3 - 1] [i_3 - 1]) ? (arr_18 [i_1 - 1] [i_3 + 1] [i_3 + 2]) : 0)) : 64));
                var_18 = (~(arr_13 [i_4]));

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_19 = (max(var_19, (arr_21 [i_1] [i_1 + 1] [i_1 - 1])));
                    var_20 += (max((((!(arr_17 [i_4] [i_4])))), (max(((1 / (arr_15 [i_1] [i_5]))), (arr_7 [i_3])))));
                    var_21 = (max(5048, (max(4294967295, (arr_10 [i_1 - 2])))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_30 [i_1 - 1] [i_1 - 2] = ((((4294967295 ? 1 : (arr_15 [i_1 - 2] [i_6]))) << (((arr_25 [i_1 + 1] [i_1 + 1] [i_3 - 1]) - 41748))));
                    var_22 = (~-5976198975658577381);
                    var_23 = -4;
                }
            }
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                var_24 ^= 0;
                var_25 &= (max(((((max(4294967295, 441915011))) ? (arr_18 [i_1 - 1] [i_1 + 2] [i_1 + 2]) : ((0 ? (arr_20 [i_1] [i_1] [i_7 + 1]) : var_8)))), ((var_3 ? -116 : (arr_25 [i_1 + 2] [i_3 - 1] [i_7 - 1])))));
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    arr_39 [i_1] [i_1 + 2] [i_1 + 1] = ((((!(arr_29 [i_1] [i_3 + 2] [i_3 + 2] [i_1] [i_1] [i_9]))) ? 19590 : var_0));
                    var_26 = (arr_18 [i_1 - 2] [i_8 + 2] [i_9]);
                }
                var_27 &= 103;
            }
        }
        arr_40 [i_1 - 1] = 2426;
    }
    #pragma endscop
}
