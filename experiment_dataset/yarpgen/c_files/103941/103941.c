/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (min((((((arr_1 [i_0]) <= (arr_1 [i_0]))) ? (((arr_0 [i_0] [i_0]) ? 7552148865530176157 : (arr_1 [i_0]))) : (((53 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))))), (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_14 = (min(var_14, (((-((-(arr_3 [i_1 + 1] [i_1 + 1]))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = (min((max((~1740548554241925120), -53)), (((min(133653014, (arr_8 [i_0] [i_0])))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((~(arr_4 [i_1 + 1] [i_1 + 1])));
                    }
                }
            }
            arr_11 [i_1] [i_0] = 4294967295;
            var_15 = (max(var_15, (((-(((((-51 ? (arr_1 [i_0]) : 183))) ? (max(4294967295, (arr_7 [i_0] [i_1] [i_0] [i_1]))) : (!12525))))))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_16 = (min((max((arr_14 [i_0] [i_4] [i_4]), (arr_14 [i_0] [i_0] [i_0]))), (arr_14 [i_0] [i_0] [i_0])));
            var_17 = (max(var_17, ((+((((arr_8 [i_0] [i_0]) <= (arr_8 [i_0] [i_0]))))))));
            var_18 = (~-1);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            arr_17 [i_0] [i_5] [i_5] = (((arr_2 [i_0] [i_5]) ? (arr_1 [i_5]) : (arr_4 [i_0] [i_5])));
            arr_18 [i_0] [i_5] = ((-(((arr_1 [i_5]) ? (arr_0 [i_0] [i_0]) : (arr_16 [i_5] [i_5] [i_5])))));
            arr_19 [i_5] = ((~(arr_7 [i_5] [i_5] [i_5] [i_0])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_22 [i_0] [i_6] = (((127 ? (arr_5 [i_0] [i_6] [i_6] [i_6]) : -113)));
            var_19 ^= 128;
            arr_23 [i_0] = (((arr_16 [i_6] [i_6] [i_6]) ? ((24456 ? (arr_14 [i_0] [i_0] [i_0]) : 7552148865530176162)) : (arr_14 [i_6] [i_6] [i_0])));
        }
        var_20 = (max(var_20, (((((~((1 ? 4294967295 : -7552148865530176141)))) / -7552148865530176157)))));
        var_21 += ((max(-127, (arr_12 [i_0] [i_0]))));
    }
    var_22 = ((((min(var_0, 12525))) ? var_9 : (!113)));
    var_23 = 5551528240714061947;
    var_24 |= 225;
    #pragma endscop
}
