/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 &= ((~(((arr_0 [i_0]) >> 21))));
                    var_15 = ((var_12 != (arr_6 [i_2] [i_2] [1] [1])));
                    var_16 = (max((min((arr_3 [i_0]), var_0)), (arr_1 [i_0])));
                }
            }
        }
        var_17 = (var_2 / 3499069429);
        var_18 = (((min((arr_0 [i_0]), ((20 ? var_5 : var_6))))) ? var_4 : ((((max(var_10, var_12))) ? (((arr_2 [i_0]) / var_3)) : ((var_1 ? var_10 : var_0)))));
        var_19 = (arr_1 [i_0]);
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_9 [i_3] = arr_3 [i_3];
        var_20 -= ((4294967276 ? (arr_3 [i_3]) : (((-(((arr_2 [i_3]) ? 8 : 65535)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_21 = ((3584 ? (((!(arr_3 [i_3])))) : (((-8367684685192641575 <= (arr_7 [i_3]))))));
                    var_22 = (max((((((var_2 ? 2401385475 : (arr_0 [1])))) ? -8393 : (arr_14 [i_4] [i_4] [i_3]))), (((-8749697291974982126 == var_13) % -1215085))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_23 = ((((max((arr_24 [i_6] [i_7] [i_8]), 3659837665))) ? ((max((arr_24 [i_6] [i_6] [i_6]), (arr_22 [8] [i_7] [i_8])))) : ((((arr_22 [i_8] [8] [i_6]) || (arr_24 [i_6] [i_7] [i_8]))))));
                    var_24 = ((~((2147483647 ? (arr_23 [i_8] [i_7] [i_6]) : (max((arr_3 [i_6]), var_1))))));
                    var_25 = var_2;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_26 = ((~(((arr_6 [i_9] [i_9] [i_9] [i_11]) ? (min(-2147483647, (arr_14 [i_9] [i_10] [i_11]))) : ((576460752303422464 ? 53546 : -413984925))))));
                    var_27 = (max(((var_4 ? (((1 / (arr_30 [i_11])))) : (((arr_3 [i_9]) ? var_12 : var_5)))), ((((arr_22 [i_9] [i_9] [i_9]) ? (arr_27 [i_9] [i_10] [i_10]) : ((-(arr_6 [i_9] [i_9] [i_9] [i_11]))))))));
                }
            }
        }
    }
    #pragma endscop
}
