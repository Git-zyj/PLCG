/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (max(var_19, ((((((arr_1 [i_0]) >> (((arr_0 [i_0]) + 79)))) % (~var_13))))));
        var_20 -= ((1315579753 << (129 - 122)));
        var_21 = (((((((max(var_7, (arr_0 [i_0])))) < -var_10))) >> (var_1 - 1372086073)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    var_22 = (((arr_2 [i_2 - 2]) ? (((arr_2 [i_2 - 1]) / (arr_2 [i_2 - 2]))) : var_2));
                    var_23 += ((!((((((arr_5 [i_3 + 1] [i_2 - 1]) ? (arr_9 [i_3] [i_1] [i_3 - 1] [i_2]) : (arr_1 [i_1])))) && (arr_6 [i_1])))));
                    var_24 *= 25;
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_13 [i_1] = (arr_5 [i_1] [i_4]);
            arr_14 [i_1] [i_1] = var_5;
            arr_15 [i_1] [i_1] [i_4] = (((arr_6 [i_1]) <= var_1));
            arr_16 [i_4] [i_1] [i_1] = (arr_2 [i_4]);
            var_25 = (min(var_25, (((249 ? -39 : 249)))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_20 [i_5] = (((min((arr_19 [i_1]), (arr_10 [i_5]))) <= (arr_19 [i_1])));
            var_26 = (min(var_26, ((((~(arr_19 [i_1]))) == ((((arr_9 [i_5] [i_5] [i_5] [i_1]) >= (arr_19 [i_1]))))))));
            arr_21 [i_1] [i_5] [i_5] = (118 * 15865754717964254062);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_27 = (((~240) & (29 < 22335)));
                        arr_28 [i_7] [i_6] = ((1 ? 0 : 53065));
                        arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = (!4294967274);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    arr_37 [i_8] [i_1] = (((arr_8 [i_1] [i_8] [i_9]) & (((-(arr_10 [i_8]))))));
                    arr_38 [i_1] [i_8] [i_9] = ((((-(min((arr_4 [i_8]), (arr_18 [i_9] [i_8] [i_1]))))) + (arr_31 [i_9] [i_8] [i_1])));
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        var_28 = ((var_1 > (((4294967279 || (-2147483647 - 1))))));
        arr_43 [i_10 + 1] = (arr_10 [i_10 - 1]);
        var_29 = (((arr_36 [i_10 + 2] [i_10 + 1]) - ((~(arr_36 [i_10 + 1] [i_10 + 1])))));
    }
    for (int i_11 = 1; i_11 < 24;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                {
                    var_30 |= (arr_46 [i_12] [i_13]);
                    arr_51 [i_12] [i_12] [i_12] [i_12] = var_2;
                    arr_52 [i_13] [i_12] [i_11 - 1] = (((((~(arr_50 [i_11])))) ? (max(0, ((~(-2147483647 - 1))))) : ((~(arr_46 [i_11 + 1] [i_12 - 2])))));
                }
            }
        }
        var_31 = (arr_44 [i_11 + 1]);
    }
    var_32 *= (((((var_0 > var_1) * var_2)) < var_4));
    #pragma endscop
}
