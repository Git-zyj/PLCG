/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 += 226264532;
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((((arr_10 [i_0] [i_4] [i_3] [i_4] [i_1] [i_0] [i_0]) & (arr_3 [i_3] [i_1] [i_0]))));
                                arr_12 [i_4] = (min((((436216077 ? 183 : 255))), (max((arr_10 [i_2] [1] [i_2] [i_4] [i_4 + 1] [1] [i_1]), 104))));
                                var_20 = (max(var_20, (((max(((979205900560118425 ? var_16 : 436216100)), -2123988810))))));
                            }
                        }
                    }
                    arr_13 [i_0] = var_0;
                    var_21 = arr_4 [i_2];
                    var_22 += ((((((var_7 + 2123988806) ? 2170978486 : (((min(var_3, var_12))))))) ? (min((min(16983, (arr_1 [i_0] [i_1]))), (arr_1 [i_2] [i_2]))) : ((((~(arr_2 [i_2] [i_1])))))));

                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        arr_16 [19] [i_0] = 8;
                        arr_17 [i_0] [18] [i_5] = ((min((arr_2 [i_2] [i_2]), (max(var_7, (arr_2 [i_2] [i_1]))))));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_23 = -32115;
                            var_24 = ((~(arr_8 [i_6] [i_2])));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_26 [i_2] [i_2] [i_0] [i_0] = (((min((var_13 <= 14), (arr_23 [i_8] [i_6] [i_1] [i_1] [i_0]))) == 82580490));
                            var_25 = (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6] [i_1]);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_1] [i_6] [i_9] = 2;
                            var_26 = ((-18194 ? var_16 : 54));
                            arr_31 [i_0] [i_6] = (var_1 ? (!18) : (((arr_14 [i_6] [i_6] [i_6] [i_6]) ? 1 : 32704)));
                            arr_32 [i_0] [i_0] [i_0] = 1;
                        }
                        var_27 = ((((min((min(var_4, (arr_14 [i_1] [i_0] [i_0] [i_6]))), 32692))) ? (min((max((arr_5 [i_0] [i_1] [i_1] [4]), 4)), (arr_27 [i_0] [i_1] [i_1] [i_0] [i_2] [i_6] [i_1]))) : (((min(436216109, var_12))))));
                        arr_33 [i_0] [5] [i_2] [i_1] [i_1] [i_0] = ((var_17 ? (((min(-18195, 41)))) : (arr_23 [i_0] [i_1] [i_2] [i_2] [i_6])));
                        var_28 &= var_13;
                        var_29 = ((((min((arr_3 [13] [i_2] [8]), (arr_4 [i_1])))) ? (((arr_25 [i_6] [i_2] [i_1] [i_0] [i_0]) ? var_8 : (arr_3 [i_1] [i_2] [5]))) : (((arr_3 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_1] [i_1]) : 200))));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        var_30 += (arr_14 [i_0] [i_10] [i_0] [7]);
                        var_31 = (min(var_31, ((((var_12 ? var_2 : (arr_28 [i_0] [5] [i_0] [i_0] [i_0])))))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_38 [i_11] = (min((((!(((var_7 ? 91 : (arr_29 [i_11] [i_2] [i_2] [i_0] [i_1] [i_0]))))))), (min((min((arr_7 [i_11] [i_11] [i_11] [2]), 17467538173149433188)), (((32767 ? (arr_10 [i_2] [i_11] [i_2] [i_1] [i_2] [i_0] [i_2]) : 0)))))));
                        arr_39 [7] [i_1] [i_2] [i_11] = arr_1 [i_1] [13];
                        arr_40 [1] [i_0] = (min((arr_15 [i_0] [i_0]), ((((max(4150796540, (arr_23 [i_0] [i_0] [i_1] [i_2] [i_11])))) ? ((var_6 << (var_16 - 423790230))) : ((min((arr_0 [1]), (arr_14 [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                }
            }
        }
    }
    var_32 = var_8;
    var_33 = ((2170978477 || (~var_9)));
    var_34 = var_13;
    #pragma endscop
}
