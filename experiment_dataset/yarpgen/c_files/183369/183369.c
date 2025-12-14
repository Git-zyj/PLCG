/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (65516 && 17592186044415);

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (min((max(-536870912, ((-66 ? 1 : 0)))), ((((min(17592186044416, 44))) ? (~211) : 112742992))));
        var_17 = (max(var_17, 0));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_18 *= ((((37773 ? (arr_3 [i_2]) : 0)) <= (-112 - 212)));
            arr_7 [i_2] = var_3;
        }
        var_19 = (((arr_6 [7] [i_1]) ? (arr_6 [6] [6]) : (((arr_4 [i_1]) ? (arr_0 [i_1]) : (arr_5 [i_1] [9])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_20 = ((2431010856 ? 18446726481523507209 : 3518873680));
                    var_21 = (min(var_21, ((((arr_0 [i_1]) / (arr_1 [i_1]))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_16 [i_5] = (((((111935632409404702 ? 3518873666 : var_15))) < (arr_12 [i_5])));
        var_22 += (max((((((((arr_15 [i_5]) | 60))) ? (((arr_15 [i_5]) << (((arr_14 [i_5]) - 83)))) : 1863956439))), (min(((-50 ? 35 : (arr_12 [i_5]))), var_5))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_19 [i_6] [i_6] = ((((var_0 ? (min(0, 3254951398)) : (arr_14 [i_6]))) | ((min(var_13, (arr_14 [i_6]))))));
        var_23 = (min(var_23, 1));
        arr_20 [i_6] [i_6] = 0;
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = ((-(((((arr_21 [i_7] [i_7]) ? 3516581147 : (arr_22 [i_7 + 2] [i_7]))) ^ ((0 ? -1 : 2431010829))))));
        arr_25 [2] [i_7] = (((((!-112742999) ? (arr_23 [i_7]) : 4294967289)) == (((arr_23 [i_7 + 4]) ? (arr_23 [i_7 + 4]) : (arr_23 [i_7 + 2])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    arr_31 [i_7] [i_8] [i_9] [i_7] = ((((((max(180, 0))) != 1)) ? (2431010865 * 120) : ((((min((arr_21 [i_9 - 1] [i_8]), (arr_29 [i_9] [i_9] [i_9] [i_9]))))))));
                    var_24 = (((((((arr_29 [i_7] [i_8] [i_8] [i_7 - 1]) < (arr_28 [i_7 + 2] [i_8] [i_9 + 2]))))) * (arr_29 [i_7] [i_7 - 1] [i_7] [i_7 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
