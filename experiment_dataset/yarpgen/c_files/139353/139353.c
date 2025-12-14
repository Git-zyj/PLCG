/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (32766 == 4863524566570804393);
                    var_21 &= (min(((min((arr_6 [2] [14] [14] [2]), (min(var_19, (arr_3 [i_1] [i_1] [i_0])))))), (max((arr_3 [i_0 + 3] [i_0 + 3] [i_0 - 3]), var_11))));
                }
            }
        }
    }
    var_22 = var_4;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_4] [i_4] = (min((min((arr_10 [i_3]), var_14)), -var_13));
                var_23 &= (max(((-(~var_16))), (arr_12 [i_3 - 1] [i_3 - 2] [i_3 - 3])));
                var_24 = (((arr_8 [i_3]) ? (((((arr_10 [i_4]) | (arr_13 [i_3] [i_3 - 3]))))) : ((((var_16 % (arr_8 [i_3])))))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    {
                        var_25 = (arr_5 [i_6] [i_6 + 2] [i_7 - 3] [i_6]);
                        var_26 = 4863524566570804381;
                        var_27 = ((~(arr_12 [i_6 + 3] [i_7 + 1] [i_8 - 1])));
                        var_28 = (((!(arr_13 [6] [8]))) ? 17927141351472402985 : (!12672924458676375557));
                    }
                }
            }
            var_29 = -50329;
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_29 [i_5] |= (arr_10 [i_9]);
            var_30 = (!17307);
        }
        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            arr_38 [i_10] [i_10] [i_10] = (-var_1 ? (arr_17 [i_10] [i_10 - 2] [i_11 - 2]) : ((var_12 ? (arr_3 [i_5] [1] [i_5]) : 6)));
                            var_31 = 17112760320;
                            var_32 &= (5773819615033176039 ? 12672924458676375546 : 16030975072276488411);
                        }
                    }
                }
            }
            arr_39 [i_10] = arr_7 [i_10];
        }
        var_33 = 55845;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    var_34 = (min(var_34, -4863524566570804387));
                    var_35 *= ((arr_21 [i_5] [i_5] [i_5] [i_15]) ? (arr_33 [i_5] [i_5] [i_15]) : (arr_21 [i_15] [i_15] [5] [i_5]));
                    arr_44 [i_5] [i_5] |= var_11;
                    var_36 = var_16;
                }
            }
        }
        arr_45 [6] = (arr_21 [i_5] [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
