/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_2] = ((~(arr_5 [17] [i_2] [i_0] [i_0])));
                    var_14 = ((!(~1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_2] = (((-(arr_3 [i_4]))));
                                var_15 &= (+-1);
                                var_16 = (max(var_16, ((min(((!(arr_4 [i_0] [i_1] [i_2] [i_3]))), ((!(7873091107541962582 != 105))))))));
                                var_17 = 536870911;
                                var_18 = (min(var_18, (((~((~(~1))))))));
                            }
                        }
                    }
                    var_19 = (max(var_19, 13));
                }
            }
        }
    }
    var_20 = var_3;

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_21 = (min(var_21, (arr_13 [i_5])));
        arr_15 [0] |= (max(2, (arr_14 [i_5])));
        var_22 = ((((var_12 * (((arr_13 [i_5]) * (arr_12 [i_5]))))) * 1));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_19 [i_6] = ((((((max(-131625359, (arr_18 [i_6])))) ? 5549130925799788498 : (arr_0 [i_6]))) * -1802821151));
        arr_20 [i_6] [i_6] = (arr_7 [i_6] [i_6] [i_6]);
        var_23 = (arr_4 [16] [i_6] [i_6] [i_6]);
    }
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        arr_23 [i_7] = ((1 != ((281474976710655 ? -483342294 : (max((arr_21 [i_7]), 1089685994))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_24 = (min(var_24, (arr_13 [i_7])));
                    arr_30 [i_9] [i_9] [i_7] [i_7] = (max(((((arr_26 [i_7 + 2]) ? (arr_28 [i_9] [i_9] [i_7]) : (arr_26 [i_7 + 3])))), ((-2 ? 9890004057081236556 : 8))));
                    arr_31 [i_7] = ((((((arr_14 [i_7 + 3]) * (max(281474976710652, var_10))))) ? 70521209 : 144115188075855871));
                }
            }
        }
        var_25 = (min(var_25, ((min((max((!-1802821143), (~3679203227))), ((((arr_28 [i_7 - 1] [i_7 - 3] [4]) != 9))))))));
    }
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        var_26 = ((!((min((arr_14 [i_10 + 1]), (arr_14 [i_10 + 1]))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {
                    var_27 -= ((max((max(4528859614256172649, -32765), (arr_36 [8] [i_10 - 1])))));
                    arr_40 [i_12] [i_10] [i_12] = (max(((((((arr_38 [i_10]) ? 0 : (arr_22 [i_10 - 1])))) * 17119837611666610648)), (((max(1326906462042940968, 1802821147))))));
                    arr_41 [i_10] [13] [i_12] [i_12] = (min((((((-5748 ? (arr_28 [i_11] [i_11] [i_10]) : (arr_27 [i_10] [i_11] [i_12]))) / ((-281474976710652 ? 255 : (arr_2 [i_10])))))), (((arr_4 [i_12] [i_12] [i_11] [i_10 + 1]) * (arr_25 [i_10])))));
                }
            }
        }
        var_28 = (((255 / (arr_33 [i_10] [i_10 - 1]))));
    }
    #pragma endscop
}
