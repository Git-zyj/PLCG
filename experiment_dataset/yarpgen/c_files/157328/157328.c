/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = ((((((3137188907 + 776957578774128309) ? -653 : 2016))) ? (((((var_3 ? var_4 : var_3))) ? 8252544116890988966 : var_6)) : ((((min(var_7, 4172221901839743292)))))));
    var_19 = (min(var_19, ((max(var_6, (max((min(var_2, 776957578774128296)), (var_6 - var_3))))))));
    var_20 = (min(var_20, var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((60292 ? var_5 : (arr_0 [i_0] [i_0])));
        var_21 = 1;
        arr_5 [i_0] [i_0] = ((-((776957578774128309 ? (arr_2 [i_0]) : var_1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = (-776957578774128284 / 1);
        var_23 = 653;
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        var_24 = ((-(16062442886082671463 - var_8)));
        var_25 = ((((((arr_9 [i_2]) == var_10))) >> (((((arr_12 [i_2]) - 13357)) - 4280552375))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_24 [i_2] [i_2 + 2] [i_5] [i_2] [i_2] = (arr_22 [i_2] [i_3] [i_4] [i_5] [i_6]);
                                var_26 = ((((((arr_9 [i_6 - 3]) ? 82 : 64888))) ? (776957578774128296 & 0) : (arr_14 [i_2] [i_2 - 3])));
                                var_27 = (max(var_27, ((((arr_18 [i_2 - 1] [i_2 + 2] [i_2 + 1]) ? (((arr_17 [16] [i_6]) ? 1 : (arr_14 [i_2] [14]))) : (((1 << (((arr_15 [i_2] [i_2]) - 2984338377))))))))));
                            }
                        }
                    }
                    var_28 = arr_22 [i_2] [i_2] [i_2 - 2] [i_3] [i_3 + 2];
                    var_29 = ((1621083671 | (arr_10 [i_2 - 1])));
                    var_30 = (min(var_30, (arr_15 [i_2] [i_2 + 2])));
                    var_31 = ((arr_17 [i_4] [i_4]) ? (~2495951353) : 117);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_32 -= (max((arr_25 [i_7]), ((((arr_25 [i_7]) ? (arr_25 [i_7]) : -117)))));
        var_33 = (min(((var_8 ? (arr_25 [i_7]) : var_16)), (arr_25 [14])));
        arr_27 [1] = (((((var_2 - (arr_25 [i_7])))) != 7947174230002714291));
        var_34 = (((((1 != ((-(arr_25 [i_7])))))) - (((!1) ? ((max((arr_26 [i_7]), (arr_25 [i_7])))) : (arr_26 [i_7])))));
    }
    #pragma endscop
}
