/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 |= (max((max((arr_2 [i_0]), (arr_0 [i_0]))), (((arr_2 [i_0]) * (arr_0 [i_1])))));
                arr_4 [i_1] = ((((!(arr_2 [i_1])))) >> (((max((arr_3 [i_1]), 4865733326368797615)) - 4865733326368797584)));
            }
        }
    }

    for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_20 = (min(var_20, (((((arr_8 [i_2]) ? 13581010747340753993 : var_14)) - (~-26646)))));
                var_21 |= (((arr_5 [i_2 + 3]) == (arr_6 [i_2 + 3])));
                var_22 = (min(var_22, (((16352 <= (arr_7 [i_2 + 2]))))));
            }
            arr_12 [i_3] [i_3] [i_2] = ((((((var_7 % (arr_7 [i_2]))))) ? (max((arr_8 [i_2 + 1]), (arr_8 [i_2 - 2]))) : (!var_17)));
        }
        arr_13 [i_2 + 1] = (max((((!(arr_9 [i_2 + 1] [i_2 + 3])))), ((((max((arr_1 [i_2] [i_2]), 13581010747340753993))) ? -var_17 : (~13581010747340753993)))));
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_23 = (min(var_23, (((-13581010747340754001 ? ((~(arr_7 [i_5 + 3]))) : ((~(arr_7 [i_5 + 2]))))))));
                        arr_25 [i_8] [i_8] [i_7] [i_8] [i_8] = ((~(min((min(var_8, 13581010747340754001)), (arr_21 [i_5])))));

                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            var_24 ^= (((-582778636 || 218) > (((!(((~(arr_22 [i_5] [i_5] [i_7] [i_9] [i_5] [i_9])))))))));
                            var_25 ^= ((~((~(max((arr_26 [i_5 + 2] [i_5 + 2] [12] [i_5 + 2] [i_5] [i_5] [i_9]), var_13))))));
                        }
                    }
                }
            }
        }
        var_26 *= 4865733326368797622;
        var_27 += (((arr_20 [i_5] [12] [i_5 + 2]) ? (max((arr_1 [i_5] [i_5]), 13581010747340753971)) : (((-(arr_5 [i_5 + 2]))))));
        var_28 = (min(var_28, (((!((min(13340339499240825604, (((~(arr_16 [i_5]))))))))))));
    }
    for (int i_10 = 2; i_10 < 24;i_10 += 1)
    {
        arr_32 [8] = ((((((arr_31 [i_10 - 2] [i_10 - 1]) - (arr_31 [i_10 + 1] [i_10 - 1])))) ? (((arr_28 [i_10 + 1]) ? 13581010747340753971 : (arr_31 [i_10 - 1] [i_10 - 1]))) : -4865733326368797645));
        var_29 = (max(var_29, (13581010747340753994 / var_4)));
    }
    var_30 = (max(var_30, (!4865733326368797615)));
    var_31 = (min(var_31, (((var_10 ? (((max((13581010747340753982 || 11153621919313061999), (13581010747340753993 || var_5))))) : ((((max(32767, var_10))) ? -4865733326368797615 : var_14)))))));
    #pragma endscop
}
