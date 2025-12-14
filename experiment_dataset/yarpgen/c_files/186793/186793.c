/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((-(min(var_2, ((-(arr_5 [i_0] [i_0] [4])))))));
                        arr_12 [i_1] [i_0] [i_2] [i_3] [i_0 - 1] [10] = var_7;
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_14 = (max(var_14, ((min(var_6, (arr_3 [i_0 - 1] [i_2 - 2] [i_2 - 2]))))));
                        var_15 ^= ((((((((var_3 ? -2716730757380742251 : (arr_8 [i_0] [0] [i_0] [i_4])))) ? (var_7 + var_8) : -707753413))) ? (arr_15 [i_1] [i_1]) : (((var_5 ? var_10 : (max(707753413, var_13)))))));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_16 = (((!var_8) << 0));
                            var_17 = (max(var_17, (((min(707753389, 707753396))))));
                            var_18 *= (-var_11 / -31);
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_19 = (max(var_19, (((!(arr_13 [i_6] [i_0 - 1] [i_6]))))));
                            var_20 = (((((~(min((arr_14 [i_1]), -3))))) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((((var_8 > (arr_20 [i_0 - 1] [8] [4] [i_2 + 2] [i_4] [i_6] [i_6])))) << (((arr_19 [i_2 - 3] [i_0] [i_2 + 2] [i_2] [i_2]) + 1512994306))))));
                            arr_22 [i_4] [8] [i_1] [i_4] [i_4] [i_2 + 1] |= (((((3587213859 ? 3258051647 : 57))) ? ((((((!(arr_17 [i_4] [i_1] [i_4] [i_4] [0]))) && var_10)))) : (max((707753438 * var_13), var_1))));
                            var_21 = ((~(max(14502253870684261996, 3587213882))));
                        }
                        var_22 = ((-(((arr_8 [i_1] [i_0] [i_1] [i_4]) / (max(170, 707753446))))));
                        arr_23 [i_0] [i_1] [i_1] [i_0] [i_4] = ((((!(arr_15 [i_0 - 1] [i_0 - 1]))) ? (min(65526, (arr_15 [i_0 - 1] [i_0 - 1]))) : (min((arr_15 [i_0 - 1] [i_0 - 1]), (arr_15 [i_0 - 1] [i_0 - 1])))));
                    }
                    arr_24 [i_0] [i_1] [i_0] = (max((max((arr_16 [i_0 - 1] [5] [i_0] [i_2]), (~var_8))), (((!(~86))))));
                    arr_25 [i_0 - 1] [i_0] [i_2 - 2] = 2;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_23 = ((-(arr_27 [i_7])));
        arr_29 [i_7] [i_7] = var_12;
        arr_30 [i_7] = var_4;
        var_24 = (((arr_26 [i_7]) ? var_13 : -3479243458));
    }
    var_25 = (max(((var_8 ? (((3587213862 ? var_1 : 30))) : (15954887381962837227 / var_5))), (min((!171270879), var_8))));
    #pragma endscop
}
