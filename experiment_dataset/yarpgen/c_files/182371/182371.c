/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [6] [i_1] = ((((((((arr_1 [i_0] [10]) << (((arr_7 [i_0]) - 3226875696)))) & (arr_4 [i_1])))) ? (((min((arr_0 [i_0]), (arr_3 [i_0] [i_1] [9]))) + (arr_3 [6] [3] [i_2]))) : (min((arr_3 [i_2] [i_2] [i_2]), (((arr_3 [i_0] [i_1] [i_2]) - 0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 |= (((min(((((arr_2 [8]) || (arr_0 [i_0])))), (min((arr_1 [5] [i_1]), -2147483646)))) ^ (((8 || (arr_8 [i_3 + 1]))))));
                                var_15 |= (arr_2 [i_0]);
                                var_16 = (min(var_16, (min(((min(18446744073709551605, -1))), (arr_13 [i_4])))));
                            }
                        }
                    }
                    arr_14 [i_0] = (((18446744073709551605 + 8143208777155520953) ? 5195 : (65525 - 2147483634)));
                    arr_15 [i_0] [i_1] [i_0] [i_0] = (min((379045037 & 55980), (((arr_0 [i_2]) ? (arr_4 [i_0]) : ((min((arr_12 [i_0] [i_0] [i_1] [i_0] [4]), (arr_6 [i_1] [0]))))))));
                    var_17 ^= ((((251 == 7) < (min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]), (arr_5 [i_1] [i_1]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_26 [i_6] = 7194;
                            var_18 = (((min(-33, (((arr_20 [i_5] [i_6]) <= 7194))))) >> (((((max((arr_16 [i_5 + 2]), 65521))) || ((min(15637, (arr_21 [i_5]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_19 |= ((((min((arr_21 [i_9]), (arr_25 [i_5] [i_6 - 2] [i_6 - 2] [i_9] [i_10] [i_10])))) & (((min((arr_18 [i_9]), (arr_22 [2] [i_6] [i_6 + 3])))))));
                            arr_33 [i_5] [i_10] [i_9] = ((((min((arr_29 [i_10] [i_10] [i_10]), (arr_16 [i_10])))) ? (min(-23, (arr_29 [i_9 - 1] [i_10] [i_5]))) : (min(857007708, -17138))));
                            arr_34 [i_5] [i_10] = (max((((((4294967283 ? (arr_31 [i_10] [20] [i_6] [i_10]) : 7)) != (((arr_28 [i_5] [i_6] [i_9]) ? (arr_29 [i_5] [i_10] [i_5]) : (arr_19 [i_5] [i_5])))))), (max((arr_16 [i_6 + 3]), (min(1551184136485413809, (arr_27 [15] [i_6] [i_9 - 1])))))));
                        }
                    }
                }
                arr_35 [6] [i_5 + 1] = (((min(-2147483638, 3))));
            }
        }
    }
    var_20 = (var_12 ? (min(3, 11669515018430490714)) : (((((min(1131322475, 27811))) ? (27689 >= var_6) : ((var_8 ? var_0 : 5161958114162861130))))));
    #pragma endscop
}
