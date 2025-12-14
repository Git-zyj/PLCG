/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_15 ? 0 : 2))) ^ ((var_5 ? var_11 : var_8)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (max(224, 0));
        var_17 -= 1;
        var_18 = ((var_12 || (((arr_1 [i_0]) && ((min(-5176181078334859073, (arr_1 [16]))))))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] &= (min(((max(107, (3 * -64)))), (var_6 / -92)));
        arr_7 [i_1] [i_1] = ((((((var_7 < var_2) ^ (~var_5)))) ? (((arr_4 [i_1 + 1] [i_1]) ? 125 : (((arr_3 [i_1] [i_1]) ? var_14 : 59723)))) : (((arr_4 [i_1] [i_1 + 2]) ? (arr_4 [i_1] [i_1 + 2]) : var_10))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_5] [i_5] = (((((~((-125 ^ (arr_14 [i_2] [i_3] [i_3])))))) ? (((arr_14 [i_4] [i_4] [i_4 - 2]) ? 0 : var_12)) : (((7 ? var_5 : ((40 ? 3756496626 : 0)))))));
                        var_19 *= ((((((-9 < (arr_4 [i_5] [i_3]))))) && ((((arr_15 [i_2] [i_5] [i_3] [i_5 - 2]) ? var_2 : (arr_16 [i_3] [i_3] [12] [i_5 - 2] [i_2] [6]))))));
                    }
                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        arr_21 [i_4] = ((arr_1 [i_2]) ? (((((var_11 ? -56 : var_8)) == var_3))) : ((max(((min(-92, var_1))), (arr_12 [i_6 + 1] [i_3] [i_4] [i_6])))));
                        var_20 = ((((((arr_4 [i_2] [i_4]) + ((min(0, 46973)))))) ? ((((!(!-88))))) : (((max(32, var_13)) + (((arr_5 [17]) ? var_11 : var_14))))));
                        var_21 = (((((38 >> (33045 - 33040)))) ? var_11 : ((~(arr_8 [i_3] [i_4 - 2])))));
                    }
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        var_22 &= (((((arr_11 [i_2]) ? (arr_17 [i_7 + 2] [i_3] [i_4] [i_4 - 3]) : ((22 ? var_5 : var_5))))) != ((((min(-92, (arr_3 [i_3] [14])))) ? var_4 : var_8)));
                        var_23 = (max(var_23, ((((((arr_16 [i_3] [i_3] [i_4] [i_4 - 2] [i_4 + 2] [i_4]) && (arr_13 [i_2] [i_2] [i_7]))) ? ((((((-92 ? 8589934464 : 0))) ? ((var_5 << (arr_16 [i_2] [i_2] [i_4] [i_7] [i_4] [i_4]))) : (!1830557632)))) : (min(((53 ? 509936292732180461 : 68)), ((((arr_1 [i_2]) ? 31 : 12488))))))))));
                    }
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_24 = (((!65532) ? ((((arr_22 [15] [i_3] [6] [i_4] [i_4] [0]) ? 12 : (arr_9 [i_4 + 2] [i_8 - 1])))) : ((+(((arr_19 [i_2] [i_2] [i_2] [i_2]) ? (arr_24 [i_8] [i_3] [i_4]) : var_9))))));
                        arr_27 [i_2] [i_2] [i_4] = (max((((((min(var_10, 59748))) < (arr_13 [i_2] [i_2] [i_2])))), (arr_23 [i_2] [i_2] [i_2] [i_3] [i_4] [i_8])));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_25 -= (arr_19 [i_4] [i_4] [i_4] [i_4]);
                                var_26 = (arr_14 [i_2] [i_9] [i_10]);
                            }
                        }
                    }
                    var_27 = ((!(((1 ? (arr_5 [i_4 - 3]) : (arr_5 [i_4 + 2]))))));
                    var_28 -= (((((~(((arr_17 [i_2] [i_3] [i_3] [i_3]) & (arr_32 [i_2] [i_2])))))) > (((arr_3 [i_2] [i_4 - 2]) << ((((var_13 ? var_14 : (arr_15 [i_2] [i_2] [i_2] [i_2]))) - 124))))));
                }
            }
        }
    }
    #pragma endscop
}
