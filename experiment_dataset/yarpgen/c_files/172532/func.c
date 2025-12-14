/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172532
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
    var_19 -= (unsigned char)21;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_12 [(unsigned char)0] [i_1] [i_2 - 1] [(unsigned char)14] [i_2 + 2]), (arr_12 [i_0] [(unsigned char)21] [(unsigned char)6] [i_3] [i_2 - 2])))) | (((((/* implicit */int) arr_8 [i_0 - 1] [i_2 + 2])) | (((/* implicit */int) (unsigned char)21))))));
                                var_21 = var_7;
                                var_22 = ((/* implicit */unsigned char) max((var_22), ((unsigned char)238)));
                                var_23 = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) var_14))))))));
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned char)21)) << (((((/* implicit */int) (unsigned char)230)) - (207))))), (((/* implicit */int) max((var_0), ((unsigned char)235))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_16)) | (((/* implicit */int) arr_12 [i_0 - 1] [i_2 - 2] [i_0 - 1] [i_0 - 1] [i_0 + 1])))) ^ ((~((~(((/* implicit */int) (unsigned char)49))))))));
                    arr_16 [i_2] [i_1] [i_0 - 3] = (unsigned char)167;
                    var_24 ^= (unsigned char)166;
                }
            } 
        } 
        arr_17 [(unsigned char)0] = arr_1 [i_0 - 2];
        var_25 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)144)), (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
    }
    for (unsigned char i_5 = 3; i_5 < 20; i_5 += 3) /* same iter space */
    {
        arr_21 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)155))))))));
        var_26 = ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5 + 2] [i_5])) && (((/* implicit */_Bool) min((arr_1 [i_5 - 3]), ((unsigned char)127))))));
        arr_22 [i_5] = min((min((arr_19 [i_5]), (arr_19 [i_5]))), (arr_19 [i_5]));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (unsigned char i_7 = 2; i_7 < 22; i_7 += 1) 
            {
                {
                    var_27 = ((unsigned char) ((unsigned char) arr_1 [i_5]));
                    var_28 = arr_27 [i_5] [i_6] [(unsigned char)3] [i_6];
                    var_29 = var_1;
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_30 = min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)17)) && (((/* implicit */_Bool) var_16))))), (((unsigned char) arr_32 [i_5] [i_6] [i_7] [i_8] [i_9])));
                                arr_33 [i_5] [(unsigned char)17] [i_8] [i_8] [(unsigned char)20] [(unsigned char)3] [i_5] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_32 [i_6] [i_6] [i_7 - 2] [i_8] [(unsigned char)17])) * (((/* implicit */int) arr_32 [i_6] [(unsigned char)22] [i_7 - 1] [(unsigned char)12] [i_8])))), (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned char)135))) == (((/* implicit */int) arr_29 [i_5] [i_8] [i_7 - 2] [i_6] [(unsigned char)10] [i_5])))))));
                                var_31 = ((/* implicit */unsigned char) min((((((/* implicit */int) ((((/* implicit */int) arr_9 [i_5] [(unsigned char)4] [(unsigned char)2] [i_8] [i_8])) >= (((/* implicit */int) arr_6 [i_5] [i_6]))))) < (((/* implicit */int) min(((unsigned char)221), ((unsigned char)23)))))), (((((/* implicit */_Bool) (unsigned char)134)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)7)) + (((/* implicit */int) var_6)))))))));
                                var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)165), ((unsigned char)71)))) < (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_6]))))));
                                var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_7 + 1] [i_6]))))) / (((((/* implicit */int) arr_27 [i_6] [i_6] [i_7 - 1] [i_8])) / (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_10 = 3; i_10 < 20; i_10 += 3) /* same iter space */
    {
        var_34 = arr_0 [i_10];
        /* LoopSeq 2 */
        for (unsigned char i_11 = 1; i_11 < 22; i_11 += 1) 
        {
            var_35 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)64)))));
            var_36 = (unsigned char)42;
            arr_39 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_0 [i_10 + 2]), ((unsigned char)133)))) < (((/* implicit */int) ((unsigned char) var_13)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 3; i_13 < 20; i_13 += 1) 
                {
                    for (unsigned char i_14 = 3; i_14 < 22; i_14 += 2) 
                    {
                        {
                            arr_47 [i_12] [i_10 - 3] [i_13] [i_10 - 3] [i_11 - 1] [i_11 - 1] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)186))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((unsigned char) ((((/* implicit */int) arr_12 [i_14 - 1] [i_13] [i_12] [i_11] [(unsigned char)13])) / (((/* implicit */int) arr_31 [i_14] [i_13 - 3] [i_12] [i_11] [i_10])))))));
                        }
                    } 
                } 
                arr_48 [i_12] [i_12] [(unsigned char)19] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_2)))) << (((((/* implicit */int) arr_31 [(unsigned char)12] [i_11 - 1] [i_11] [i_10 - 1] [i_10 - 1])) - (155)))));
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_31 [i_12] [i_12] [(unsigned char)19] [(unsigned char)19] [i_10])) | (((/* implicit */int) (unsigned char)12)))) < (((((/* implicit */int) (unsigned char)11)) << (((((/* implicit */int) (unsigned char)70)) - (65))))))))));
            }
            /* vectorizable */
            for (unsigned char i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                arr_51 [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_15])) + (((/* implicit */int) arr_19 [i_15]))));
                arr_52 [i_15] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_10 - 3])) % (((((/* implicit */int) arr_28 [i_15] [i_11] [i_10])) | (((/* implicit */int) (unsigned char)198))))));
            }
        }
        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_49 [i_10 + 2] [i_10 - 3] [i_10 - 2] [i_10])))));
            var_40 -= (unsigned char)189;
            /* LoopNest 3 */
            for (unsigned char i_17 = 0; i_17 < 23; i_17 += 2) 
            {
                for (unsigned char i_18 = 1; i_18 < 20; i_18 += 1) 
                {
                    for (unsigned char i_19 = 2; i_19 < 21; i_19 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned char) max((max((((/* implicit */int) (unsigned char)13)), (((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)40)))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
                            var_42 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) min(((unsigned char)167), ((unsigned char)27)))))));
                        }
                    } 
                } 
            } 
        }
    }
}
