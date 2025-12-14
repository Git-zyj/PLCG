/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min(3610581780, 62421)))));
    var_18 -= ((~((((6213085643155311633 ? 1 : var_8)) ^ var_0))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= (((((arr_1 [i_0] [0]) ? (((arr_1 [i_0] [i_0]) ? 15249 : 511)) : 6440)) - ((-var_5 ? ((((arr_0 [i_0]) >= 2302852586665621736))) : ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
        var_19 = (((((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0])))) * (2147483647 < var_9));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (-((28992 ? (min((arr_6 [i_1]), (arr_4 [i_1] [7]))) : 1)));
        var_20 = ((((((arr_0 [i_1]) ? var_1 : (arr_0 [i_1])))) ? (((arr_0 [i_1]) / (arr_0 [i_1]))) : ((-(arr_0 [i_1])))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_21 = (1 || (((11691 ? 1 : 109))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_22 ^= ((arr_5 [i_1]) >= (arr_5 [i_4 + 2]));
                            var_23 = (-(arr_8 [i_2 - 1] [i_4 - 1]));
                            var_24 = ((-(arr_15 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                        }
                    }
                }
                var_25 = (arr_14 [i_3] [i_2 - 1] [i_1]);
            }

            /* vectorizable */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                arr_20 [i_1] [i_2] = (((arr_14 [i_6 + 3] [i_6] [i_6]) ? var_13 : (arr_14 [i_1] [i_2 - 1] [i_6 + 3])));
                var_26 = (min(var_26, (((((127 ? 2302852586665621738 : 22671))) | 18446744073709551607))));
            }
            var_27 = (arr_9 [i_1] [i_2 - 1] [i_2]);
            var_28 = (((arr_15 [i_1] [i_2] [1] [i_1] [i_1]) ? ((var_6 + (arr_14 [i_2 - 1] [i_2 - 1] [13]))) : ((((arr_19 [i_1] [i_1] [i_2 - 1]) >= (arr_19 [i_2 - 1] [i_1] [i_1]))))));
        }
        arr_21 [i_1] [i_1] = -1;
        var_29 = ((((124 / (arr_17 [i_1] [11]))) - (arr_17 [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_30 = -var_6;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_30 [i_7 + 2] [i_8] [13] [i_7] [i_10] = ((max(var_7, ((4294967295 % (-2147483647 - 1))))));
                            var_31 = ((((((arr_6 [i_9]) ? ((((arr_25 [i_10 - 2] [i_8] [i_7]) ? var_16 : 1))) : (max((arr_24 [1] [i_7] [1]), 12))))) ? ((((((arr_12 [i_9] [i_8] [1]) - (arr_15 [i_7] [i_7] [i_9] [i_7] [i_8])))) & (((arr_1 [i_7] [1]) ? -7926177734774377077 : var_5)))) : (((min(61, (arr_24 [i_7] [i_7] [i_7])))))));
                            var_32 = (arr_24 [i_10 - 1] [i_7] [i_7]);
                            var_33 = (arr_10 [i_10 + 1] [2] [i_7 - 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
