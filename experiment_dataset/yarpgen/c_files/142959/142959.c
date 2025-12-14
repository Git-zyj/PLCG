/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0]) ? (arr_1 [i_0]) : ((36 ? 24 : -19))));
        var_19 += -14839;
        var_20 += (((var_4 ? var_2 : (arr_0 [i_0]))));
        arr_2 [i_0] = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 &= ((4539628424389459968 ? (arr_3 [i_1] [i_1]) : 14839));
        arr_5 [i_1] = -var_12;
        arr_6 [i_1] = (((arr_1 [i_1]) & ((var_5 ? -8781 : 11123325824864643259))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        var_22 += var_6;
        var_23 += ((((-8781 ? 50696 : -1)) / (arr_3 [i_2 + 1] [i_2])));
        arr_10 [i_2] = (((arr_9 [i_2 + 3]) & 18142347116738833932));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_24 = var_5;
                    var_25 = ((1 ? 231 : -9));
                    arr_17 [i_2] [i_3 - 1] [i_3] = var_10;
                    var_26 += (var_6 ? var_0 : 57735);
                }
            }
        }
        var_27 = (((arr_13 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2]) % 3108360289));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        var_28 = (32767 > -118);
        var_29 ^= (min((((249 != (arr_1 [i_5 + 2])))), (((arr_1 [i_5 + 1]) ? (arr_1 [i_5 + 1]) : var_5))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_26 [i_7] [i_7] [i_6] [i_5] = (arr_1 [i_5 + 1]);
                    arr_27 [i_5] [i_6] [i_7] [i_6] |= ((((!(((-(arr_25 [i_5])))))) ? (min(0, 7323418248844908357)) : 1));
                    var_30 = 7;
                }
            }
        }
    }
    var_31 = -var_7;
    #pragma endscop
}
