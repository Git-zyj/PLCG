/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_11 [i_2] = 65535;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_19 = min((arr_12 [i_0] [i_0] [11] [i_0]), (min(1, (((arr_0 [i_1] [i_1]) ? var_16 : 72)))));
                        var_20 = (max(var_20, (arr_6 [i_3])));
                        var_21 = (arr_3 [i_0] [5]);
                        var_22 |= 25847;
                    }
                }

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_23 = (((((arr_8 [i_0] [i_4] [i_0]) ? (arr_12 [i_1 + 1] [i_0] [i_0] [i_0]) : (arr_0 [i_1 - 2] [i_1 - 2])))) ? (var_11 * -2066) : ((4294901767 ? 65528 : 16874)));
                    var_24 = 4294901768;
                    var_25 = (min((((4294901781 ? (arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1])))), ((var_11 ? (arr_8 [i_1 + 1] [i_1] [i_1 - 2]) : var_10))));
                    var_26 ^= (arr_8 [i_0] [i_4] [i_0]);
                    arr_17 [i_0] [i_0] [i_0] = arr_2 [i_1];
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_27 |= (((((((arr_0 [i_5] [i_0]) ? 166 : (arr_18 [11] [8] [i_5])))) ? (4294901781 != -1064648873) : (arr_3 [i_1 + 1] [i_1 - 2]))));
                    arr_20 [i_0] [i_0] [i_5] = ((var_0 ? (min((min(var_10, (arr_1 [8]))), (((-(arr_13 [i_0] [i_0] [i_1] [i_1])))))) : 4294901768));
                    var_28 = var_3;
                    var_29 -= (((((13559 ? var_12 : (arr_4 [i_0] [i_1 - 1] [i_1 - 1])))) ? (((arr_15 [i_0] [1] [i_1 - 1]) ? ((-(arr_15 [i_5] [i_1] [i_0]))) : (((-(arr_14 [i_0] [i_1] [9] [i_5])))))) : (~65024)));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_29 [10] [i_6] [8] [i_0] [i_0] = var_6;
                        var_30 = -241;
                        arr_30 [i_0] [i_1 - 2] [i_0] [i_1 - 2] [i_7] [5] = (arr_25 [3] [3] [i_7]);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_31 = ((((16 >= ((max(20545, var_0))))) ? ((var_11 ? (arr_24 [i_0] [i_9] [9]) : (arr_4 [i_0] [i_1] [i_1]))) : (min((arr_13 [9] [9] [i_8] [i_1 - 2]), (((0 >= (arr_22 [i_0] [i_6] [i_8] [i_9]))))))));
                                var_32 = ((((arr_12 [1] [i_1 - 1] [i_1] [i_1]) ? (arr_12 [i_1] [i_1 - 1] [i_1] [i_1]) : 192)));
                            }
                        }
                    }
                }
                var_33 = var_4;
            }
        }
    }
    var_34 = var_6;
    var_35 -= ((1 && (max((!718555148), (var_7 <= var_16)))));
    var_36 = var_10;
    #pragma endscop
}
