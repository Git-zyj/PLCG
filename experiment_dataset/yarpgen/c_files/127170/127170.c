/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            var_17 = (max((((arr_3 [i_1]) & (((var_9 ? var_16 : var_2))))), ((((max(var_4, (arr_4 [i_0])))) ? var_14 : (~var_10)))));
            arr_6 [8] |= ((!(arr_1 [i_1])));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_18 = ((((((var_2 ? var_7 : var_12) > (arr_8 [i_2] [i_0]))))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    {
                        var_19 = (min((((((1 ? (arr_15 [i_0] [12]) : 4294967295))) ? (((arr_9 [i_2] [i_2]) ^ 0)) : 7)), (((((((arr_2 [7]) ? (arr_0 [i_0]) : (arr_15 [i_0] [i_0])))) ? ((max((arr_4 [4]), (arr_4 [i_3 + 1])))) : (!7))))));
                        arr_16 [i_0] [17] [i_3] [i_2] = (arr_2 [i_2]);
                        var_20 = ((142 <= (((arr_3 [i_4 - 1]) ? (((arr_13 [23] [23] [1] [1]) / (arr_8 [i_0] [i_2]))) : (((arr_10 [i_0] [i_0] [i_3] [i_4]) ? (arr_14 [i_0] [i_2] [i_2] [i_4]) : (arr_10 [i_0] [i_2] [i_0] [3])))))));
                    }
                }
            }
            var_21 = ((((((arr_13 [i_0] [i_0] [22] [i_2]) + (arr_4 [i_0])))) || ((((((var_13 ? var_3 : var_10))) ? (((arr_7 [16]) & 3012211853907068376)) : ((((var_9 >= (arr_14 [i_0] [i_0] [i_2] [i_0]))))))))));
        }
        var_22 *= (((max((((var_5 ? var_0 : (arr_12 [i_0] [i_0])))), ((-(arr_15 [i_0] [i_0]))))) != ((((~-1) ? (!var_0) : (arr_8 [i_0] [11]))))));
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        arr_19 [i_5] = (((((26 <= 7) + 142)) | 116));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_23 = (min((~-1501469500), ((((var_0 & (arr_13 [i_5] [i_6] [i_7] [i_8])))))));
                        arr_27 [i_5] [i_8] &= var_5;

                        for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_24 = var_13;
                            arr_30 [i_6] = ((7 ? -5148140526676500136 : 3012211853907068354));
                            arr_31 [i_5] [i_6] [i_8] [i_8] [i_9 + 2] &= ((!((((((arr_11 [i_8] [i_8]) ? (arr_28 [i_8]) : 61842)) + (arr_10 [i_5 + 4] [i_5 + 4] [i_5 + 4] [i_5 + 4]))))));
                        }
                        for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_25 *= (min(((var_3 & (arr_2 [i_6]))), (arr_28 [i_8])));
                            arr_34 [i_5] [i_6] [i_6] [i_7] [i_8] [i_10 + 2] = (min(((!(((var_1 ? var_5 : var_14))))), ((var_3 == ((var_12 ? var_10 : var_15))))));
                            var_26 *= (arr_33 [i_7] [i_5] [i_8] [i_5 + 4] [i_5]);
                            arr_35 [i_5 + 2] [i_6] [i_7 - 2] [i_7 - 2] [i_6] [i_10 - 1] = ((2339 ? 79 : 1));
                        }
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        var_27 *= (min((((((124 ? 3012211853907068354 : (arr_24 [i_5] [i_6] [i_6] [9] [i_6] [9])))) ? ((var_1 ? 0 : var_3)) : var_5)), (((var_3 == (min(var_4, var_10)))))));
                        arr_40 [i_6] = ((((((min(var_2, 28498))) || (((131 ? 65529 : var_14))))) ? ((((((min(var_12, var_5))) && (arr_0 [i_5]))))) : -var_0));
                        arr_41 [i_6] [i_6] [8] [i_6] = (arr_26 [i_5] [i_5] [i_7 + 2] [1]);
                        var_28 = (min(var_28, ((((((((((arr_23 [6] [i_6] [7] [i_11]) / var_16))) ? (arr_33 [i_5] [i_6] [i_11] [i_7] [i_11]) : (min(var_7, 1))))) || (((-(((arr_29 [i_5 + 1] [i_11] [i_5 + 1]) ? (arr_25 [i_5 + 4] [1] [i_11]) : var_2))))))))));
                    }
                    var_29 *= ((5148140526676500130 ? (arr_25 [i_5] [i_6] [10]) : (min((((var_15 < (arr_26 [i_7] [i_6] [i_5] [i_5])))), ((var_6 ? 10 : var_8))))));
                }
            }
        }
        arr_42 [i_5] = (arr_37 [i_5] [12] [i_5] [1]);
    }
    var_30 *= (min((((~var_1) - ((var_10 >> (4130751377 - 4130751323))))), var_2));
    #pragma endscop
}
