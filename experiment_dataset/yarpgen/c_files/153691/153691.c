/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_16 ? (((~(var_14 ^ var_0)))) : var_19));
    var_21 = var_18;
    var_22 = (((((-var_6 + (!255)))) ? (!var_8) : (((var_4 - 38371) - var_8))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [10] [11] [i_2] = (224 ^ var_13);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_23 = (((var_15 + 9223372036854775807) >> (var_0 - 82)));
                                arr_14 [i_4] [0] [i_3] [i_2] [i_1] [i_0] = ((!(arr_8 [i_1 + 1] [21])));
                            }
                        }
                    }
                    var_24 = ((!(arr_3 [i_1 - 1])));
                    arr_15 [12] [i_1] [i_2] [19] = (((arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]) | (arr_12 [i_0] [i_0] [i_0] [i_1] [7] [i_1])));
                    var_25 = ((!(~var_18)));
                }
            }
        }
        var_26 = (101 <= -101);

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_27 = ((-((255 ^ (arr_2 [i_5])))));
                            arr_29 [i_0] [1] [i_6] [i_7] [i_8] [i_7] [14] = ((!((!(arr_25 [i_8] [1] [i_6] [i_5] [i_0] [i_0])))));
                            var_28 &= ((-(511 < var_17)));
                            arr_30 [i_0] [i_5] [8] [19] [i_7] [i_8] = ((!var_19) * 47869418);
                        }
                    }
                }
            }
            var_29 = ((arr_2 [i_5]) | var_2);
            var_30 = ((83 << (((arr_13 [i_0] [i_0] [i_0] [i_5] [i_5] [i_0]) - 236))));
            var_31 = ((!(arr_12 [i_5] [i_5] [i_0] [i_0] [23] [i_0])));
        }
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            arr_33 [i_0] [i_9] = ((var_5 << (((arr_27 [i_0] [i_0] [i_9 + 2] [i_9 + 2] [i_9 + 1]) + 1255))));
            var_32 ^= ((var_6 ? var_16 : var_19));
            var_33 = (!(arr_21 [i_9 + 2] [24] [i_9 - 1] [i_9]));
            var_34 *= (((arr_18 [i_9 - 1]) ? (arr_18 [i_9 + 1]) : 72057594029539328));
        }
        var_35 = (var_3 != 101);
        arr_34 [i_0] = ((-((101 ? (arr_23 [19] [i_0] [i_0] [22] [i_0] [i_0]) : (arr_4 [i_0])))));
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_36 = ((-(511 * var_14)));
        arr_37 [i_10] &= ((((((-2896 >= (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]))))) > (((((31191 ^ (arr_35 [16])))) * -var_7))));
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_37 += ((-2459347970 + (arr_32 [i_11] [i_11])));
        arr_40 [i_11] [i_11] = -var_8;
        var_38 = ((-(!var_17)));
    }
    #pragma endscop
}
