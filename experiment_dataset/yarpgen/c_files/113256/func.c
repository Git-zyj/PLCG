/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113256
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */short) var_15);
    var_21 = min((((var_1) & (((/* implicit */int) ((signed char) var_14))))), (((/* implicit */int) var_9)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */int) var_12);
                            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_15)))));
                            var_23 |= ((/* implicit */short) ((int) max(((!(((/* implicit */_Bool) (signed char)125)))), ((!(((/* implicit */_Bool) var_8)))))));
                            arr_12 [i_3 + 2] [i_2] [3] = ((/* implicit */int) arr_10 [i_0] [i_0]);
                            arr_13 [i_0] [i_0] [i_0] [i_0] = (signed char)-84;
                        }
                    } 
                } 
                arr_14 [i_0] = (signed char)101;
                /* LoopSeq 2 */
                for (short i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    arr_18 [i_4] [i_4] = ((int) (~(((/* implicit */int) (signed char)-112))));
                    /* LoopSeq 2 */
                    for (short i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        arr_22 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] = max((max((((int) var_8)), (var_11))), (((/* implicit */int) ((signed char) max((arr_10 [i_0] [i_0]), (var_17))))));
                        var_24 += ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_0])) >= (var_16)));
                        var_25 = (-(var_15));
                    }
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        arr_27 [i_1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((int) arr_2 [i_4 + 2] [i_4 - 1] [i_0]))));
                        var_26 ^= ((/* implicit */short) arr_25 [i_0] [i_1] [(short)0] [i_6]);
                        arr_28 [i_4] [i_1] [i_1] [i_1] [i_4] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    }
                    arr_29 [(signed char)0] [i_4] [(short)0] = ((/* implicit */short) arr_24 [i_4]);
                }
                for (signed char i_7 = 3; i_7 < 12; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((short) (-(((((/* implicit */_Bool) (signed char)-84)) ? (var_0) : (((/* implicit */int) (signed char)47))))))))));
                                var_28 = (-(((/* implicit */int) var_3)));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */int) var_10);
                    arr_39 [i_7] = ((/* implicit */signed char) ((short) (signed char)(-127 - 1)));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_11 = 4; i_11 < 10; i_11 += 3) 
                        {
                            arr_46 [i_11] [(signed char)3] [i_11] [i_10] [i_1] [(short)8] = (short)-17943;
                            arr_47 [i_11] [i_1] [i_7] [i_10] [i_11] = ((/* implicit */short) (signed char)49);
                            var_30 = ((/* implicit */int) var_12);
                        }
                        /* vectorizable */
                        for (signed char i_12 = 1; i_12 < 11; i_12 += 1) 
                        {
                            arr_50 [i_0] [i_1] [i_7] [i_7] [i_12 + 1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) arr_1 [i_7 + 1])) : (((((/* implicit */int) (signed char)49)) + (((/* implicit */int) (signed char)-75)))));
                            arr_51 [i_10] [i_12] = ((/* implicit */short) ((signed char) arr_49 [i_7 - 3] [i_12] [i_12 + 1] [i_12 - 1] [i_12 + 2]));
                        }
                        arr_52 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_7 + 1] [i_7 - 3] [i_7 - 1] [i_1]))));
                    }
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 1) /* same iter space */
                    {
                        arr_55 [i_0] [i_0] [i_13] [i_13] [i_13] [i_0] = ((/* implicit */short) var_14);
                        arr_56 [i_0] [i_0] [i_1] [i_13] [i_0] [i_13] = ((/* implicit */short) min((var_0), (((((/* implicit */_Bool) max((arr_4 [i_7 - 1]), (((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) (signed char)-85)))) : (((((/* implicit */int) (signed char)101)) / (((/* implicit */int) arr_0 [i_0]))))))));
                        arr_57 [i_0] [11] [i_13] [i_13] = (-(((/* implicit */int) arr_37 [i_0] [6] [6] [i_0] [i_13])));
                        arr_58 [i_13] [i_1] [i_1] [(short)2] [i_1] [i_1] = ((/* implicit */signed char) ((-1936326238) / (1464712025)));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        {
                            arr_66 [i_15] [i_1] [i_14] [i_1] = max(((-(arr_25 [i_1] [i_1] [i_1] [i_15]))), (var_2));
                            var_31 = ((/* implicit */int) ((((/* implicit */int) ((short) arr_48 [i_0] [i_0] [i_1] [(signed char)10] [i_14] [i_15]))) != (((/* implicit */int) (signed char)-1))));
                            var_32 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 377020350))))));
                            var_33 = max((var_4), (var_16));
                            var_34 = arr_21 [i_0] [i_1] [i_14] [i_0] [i_1];
                        }
                    } 
                } 
            }
        } 
    } 
}
