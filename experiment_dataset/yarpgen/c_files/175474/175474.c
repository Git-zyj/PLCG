/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 ^= ((((((!206) ? (arr_3 [i_0] [i_1 - 1] [i_1 - 1]) : (arr_4 [i_2 - 1] [i_1] [1] [i_0])))) ? (((((arr_1 [i_0 + 1] [4]) + 2147483647)) >> (((arr_1 [i_0 + 3] [18]) + 40)))) : -1));
                    var_15 |= ((247 ? (arr_6 [i_0]) : (arr_2 [i_1] [i_2 + 1])));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] = (((((~(arr_5 [i_3] [i_3] [i_3] [i_3])))) ? ((((((arr_8 [i_3] [i_3]) ? 253 : (arr_9 [i_3] [i_3])))) ? 252 : (min((arr_3 [i_3] [21] [i_3]), var_7)))) : ((((((max(134, 3))) >= ((max((arr_8 [i_3] [i_3]), -31659)))))))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_16 += min(6185804262939194251, (((min((arr_13 [i_5]), -32760)))));

                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        var_17 = (min(((-((((arr_10 [i_4]) >= (arr_19 [i_6 - 3] [i_5] [2] [i_3])))))), (((!((!(arr_14 [i_3] [i_3] [i_3] [i_3]))))))));
                        var_18 = (((arr_5 [i_3] [i_4] [i_5] [i_6]) ? (arr_1 [i_3] [i_4]) : 247));
                    }
                    arr_20 [i_3] [i_3] [i_5] = ((max(1, (1 << 1))));
                }
            }
        }
        var_19 ^= max(((var_10 ? (((-230244968824141777 ? 3047744045770982624 : 163))) : (((arr_8 [7] [i_3]) ? var_7 : 1)))), 54);
    }

    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_20 = (max(var_20, (((((min((((-(arr_22 [i_7 + 3])))), (arr_21 [i_7])))) ? (((!-1) ? ((166 ? (arr_22 [3]) : (arr_21 [4]))) : 230244968824141785)) : ((~(arr_21 [1]))))))));
        var_21 = (max(var_21, ((max(((((arr_22 [i_7 + 1]) / (arr_22 [i_7 - 1])))), ((var_10 ? (arr_22 [i_7 + 1]) : 9290677198038562417)))))));
    }
    for (int i_8 = 3; i_8 < 12;i_8 += 1)
    {
        var_22 *= (!var_6);
        arr_27 [i_8 - 2] = (arr_21 [i_8 + 1]);

        for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
        {
            arr_30 [i_8] = min(9223372036854775805, (((arr_28 [i_8] [9]) ? -8596873592707247949 : (((arr_22 [1]) ^ -8596873592707247953)))));
            var_23 ^= 127;
            var_24 = (min(var_24, ((((((max(2915521512273456983, (arr_28 [i_8 + 1] [i_8 + 1]))) ^ ((((arr_5 [9] [i_9] [i_9] [i_9 - 1]) ? 17571 : var_1)))))) ? (((((((arr_22 [1]) == (arr_1 [i_9] [i_9])))) - (arr_0 [i_8 - 2])))) : ((var_5 ? var_6 : (min(var_1, var_7))))))));
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 12;i_10 += 1) /* same iter space */
        {
            var_25 = (min(var_25, 31976));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        var_26 ^= (~(arr_4 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_12]));
                        arr_40 [i_8 - 2] [i_10 + 1] = var_5;
                        var_27 |= ((223 | (arr_5 [i_8 - 1] [i_11 - 1] [i_11] [i_10 + 1])));
                        arr_41 [5] [10] [i_12] = var_10;
                    }
                }
            }
        }
        for (int i_13 = 2; i_13 < 12;i_13 += 1) /* same iter space */
        {
            var_28 += 4379;
            arr_44 [i_8] |= (70 >= -116);
            arr_45 [i_13] [i_13] [i_13] = var_11;
        }
        var_29 = (max((((arr_5 [i_8 - 3] [i_8 - 3] [i_8 - 2] [i_8 - 2]) & 1)), (arr_5 [i_8 + 1] [i_8 + 1] [i_8 - 3] [i_8 - 3])));
    }
    #pragma endscop
}
