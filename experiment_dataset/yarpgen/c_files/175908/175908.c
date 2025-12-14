/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (arr_2 [i_0] [i_0]);
        var_19 = (((arr_1 [i_0] [i_0]) % (var_16 ^ var_6)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] [i_0] [i_1] [i_0] [i_0] = ((((arr_4 [i_1] [i_2] [i_3]) ? var_13 : -102)));
                                var_20 = arr_10 [i_0] [i_1] [i_2] [i_3] [i_4];
                                var_21 = ((18259 ? (arr_6 [i_0] [i_1]) : (~-3498)));
                            }
                        }
                    }
                    var_22 = -15097625244149154762;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [9] [i_1] [i_2] [i_5] [i_6] [i_6] = (arr_1 [i_0] [0]);
                                var_23 = (arr_7 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0]);
                            }
                        }
                    }
                    var_24 = (((((((arr_8 [i_0] [i_2]) != 65522)))) + (arr_3 [i_0])));
                    arr_19 [i_0] [i_1] [i_1] [i_2] = ((1 * (arr_6 [i_1] [i_1])));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_23 [i_7] = ((((min(-var_14, (min((arr_22 [i_7] [i_7]), var_17))))) ? (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_21 [i_7] [i_7])));
        arr_24 [10] [i_7] = (((arr_2 [i_7] [i_7]) - ((-(arr_22 [i_7] [11])))));
    }
    for (int i_8 = 2; i_8 < 8;i_8 += 1)
    {
        var_25 = (((180 >> (205 - 177))));
        var_26 = arr_25 [i_8] [4];
        var_27 &= ((-62 / ((-72 ? (arr_15 [i_8] [12] [i_8 + 2] [i_8] [15]) : ((max(var_8, (arr_0 [i_8]))))))));
        var_28 = ((((min((var_16 != 205), (((arr_2 [i_8] [i_8 + 1]) ? 7489 : 7822127978176984730))))) ? (var_7 + -62) : 32757));
        var_29 = (max((((((((arr_9 [i_8]) ? (arr_13 [i_8 - 1] [i_8] [i_8] [i_8] [i_8]) : 1))) ? (arr_10 [i_8] [i_8 + 1] [i_8] [i_8 - 2] [i_8 + 1]) : var_14))), (min(((min((arr_22 [i_8] [i_8]), var_2))), (min(0, 5407561923756161564))))));
    }
    var_30 = ((~((max((-15 <= -7822127978176984731), var_16)))));
    var_31 = ((960858678 ? (((!((max(var_8, var_5)))))) : 103));
    #pragma endscop
}
