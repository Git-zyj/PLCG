/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106619
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] [(unsigned char)14] [i_1 + 1] &= arr_0 [i_0];
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) arr_5 [(unsigned char)4]))))))))));
                var_18 = var_0;
                /* LoopSeq 4 */
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_3 + 2])) % (((/* implicit */int) arr_0 [i_1 - 2])))))));
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_3 + 3] [i_1 + 1] [i_2 + 2]))));
                }
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    arr_14 [i_0] = arr_6 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 + 1];
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)105)) != (((/* implicit */int) arr_5 [i_2 + 1]))));
                        arr_18 [i_0] [(unsigned char)3] [i_2] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)168)) * (((/* implicit */int) (unsigned char)92))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_22 |= var_3;
                        arr_22 [i_2 + 2] [i_1] [(unsigned char)13] = arr_10 [i_2 - 1] [i_1 - 3] [i_1 + 1] [i_1 + 1] [i_1];
                        arr_23 [i_0] [i_1] [i_2 - 1] [i_4] [i_4] [i_6] = var_2;
                    }
                }
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    var_23 += (unsigned char)124;
                    arr_26 [i_0] [i_1] [i_2] [i_1] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1 + 1])) == (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_10)))))));
                    var_24 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)102)) + (((/* implicit */int) (unsigned char)154))));
                    arr_27 [i_0] [i_1 - 2] [i_2 + 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_1] [i_1 + 1] [i_1 - 3] [i_1] [i_1 - 1])) | (((/* implicit */int) (unsigned char)74))));
                }
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */int) (unsigned char)124)) : (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_1] [(unsigned char)0])) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) arr_19 [i_8] [(unsigned char)9] [i_1 + 1] [i_2 + 2] [i_1 + 1] [i_0])))))))));
                    arr_31 [i_0] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_1 - 1] [(unsigned char)7] [i_2 + 2] [i_0])) ? (((/* implicit */int) arr_16 [i_1 - 2] [i_1] [(unsigned char)10] [i_2 - 1] [i_1])) : (((/* implicit */int) (unsigned char)121))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_9] [i_8] [i_1])) && (((/* implicit */_Bool) arr_0 [i_1 + 1]))));
                        var_27 = arr_33 [i_1 + 1] [i_1] [i_2 + 1] [i_8] [(unsigned char)12] [(unsigned char)4] [(unsigned char)10];
                        var_28 ^= arr_12 [i_0] [i_0] [i_9];
                        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (unsigned char)152)))) + (((((/* implicit */int) (unsigned char)130)) - (((/* implicit */int) arr_32 [i_0] [i_1] [i_2] [i_8]))))));
                    }
                    var_30 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned char)130))));
                    arr_34 [(unsigned char)14] [i_8] [i_8] = (unsigned char)133;
                }
                arr_35 [i_0] [i_0] [i_0] [(unsigned char)0] = arr_33 [i_0] [i_1 - 2] [i_2 - 1] [i_2 + 1] [i_2] [(unsigned char)2] [i_1];
            }
        }
        for (unsigned char i_10 = 3; i_10 < 16; i_10 += 2) /* same iter space */
        {
            arr_40 [i_0] [i_0] [i_0] = arr_21 [i_0] [i_10] [i_0] [i_10] [i_10] [i_10];
            var_31 *= (unsigned char)137;
            var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_10] [i_0])) ? (((/* implicit */int) arr_36 [i_10])) : (((/* implicit */int) (unsigned char)109))))) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_10 + 1] [i_10])) : (((((/* implicit */int) (unsigned char)181)) * (((/* implicit */int) (unsigned char)75))))));
        }
        for (unsigned char i_11 = 3; i_11 < 16; i_11 += 2) /* same iter space */
        {
            arr_43 [(unsigned char)8] [(unsigned char)8] [i_11] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (unsigned char)141))))));
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)111)))))));
                            var_34 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) arr_24 [i_0] [i_11] [(unsigned char)0])) : (((/* implicit */int) (unsigned char)132))))));
                            arr_51 [i_0] [i_0] [i_0] [i_0] = ((unsigned char) (unsigned char)104);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_15 = 1; i_15 < 15; i_15 += 4) 
                {
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)142)) | (((/* implicit */int) (unsigned char)153))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_45 [i_0])) : (((/* implicit */int) arr_50 [(unsigned char)12] [i_0] [i_12] [i_15] [i_11 - 1] [(unsigned char)10])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)151)) <= (((/* implicit */int) (unsigned char)143))))))))));
                    arr_54 [i_15] [i_15] = var_2;
                    arr_55 [i_0] [i_0] [i_15] [i_15] [i_0] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_25 [i_0] [i_11])) > (((/* implicit */int) (unsigned char)172)))) ? (((/* implicit */int) (unsigned char)134)) : (((((/* implicit */int) arr_11 [i_0] [i_12] [i_12] [i_15 - 1])) ^ (((/* implicit */int) (unsigned char)149))))));
                    arr_56 [i_0] [i_11] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned char)124))));
                }
            }
        }
        for (unsigned char i_16 = 3; i_16 < 16; i_16 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_17 = 0; i_17 < 17; i_17 += 4) 
            {
                arr_62 [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_16 - 2] [i_16 - 3] [i_16 - 1])) ? (((/* implicit */int) arr_3 [i_16 - 3] [i_16 - 1] [i_16 - 2])) : (((/* implicit */int) arr_3 [i_16 + 1] [i_16 + 1] [i_16 + 1]))));
                arr_63 [i_0] [i_0] |= ((unsigned char) arr_37 [i_16 - 3]);
            }
            arr_64 [(unsigned char)9] [i_16 + 1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_0] [i_16 - 2] [(unsigned char)11] [i_16 - 3])) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_16 - 3])) : (((/* implicit */int) arr_49 [i_16] [i_16] [i_16] [i_16 - 3]))));
            /* LoopNest 2 */
            for (unsigned char i_18 = 0; i_18 < 17; i_18 += 2) 
            {
                for (unsigned char i_19 = 0; i_19 < 17; i_19 += 4) 
                {
                    {
                        var_36 = ((/* implicit */unsigned char) max((var_36), ((unsigned char)163)));
                        var_37 *= arr_52 [i_0] [i_0] [i_18] [i_19];
                        /* LoopSeq 2 */
                        for (unsigned char i_20 = 0; i_20 < 17; i_20 += 2) 
                        {
                            var_38 += var_1;
                            var_39 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_11 [i_0] [i_16] [i_19] [i_19])) | (((/* implicit */int) (unsigned char)130)))) + (((/* implicit */int) (unsigned char)129))));
                            var_40 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_30 [i_0] [i_16 + 1] [i_18] [i_16 + 1]))));
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_61 [i_20] [i_16 - 3])) <= (((/* implicit */int) arr_61 [i_0] [i_16 - 3]))));
                            var_42 += var_3;
                        }
                        for (unsigned char i_21 = 3; i_21 < 16; i_21 += 4) 
                        {
                            var_43 = (unsigned char)162;
                            var_44 &= (unsigned char)117;
                            var_45 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (unsigned char)137)))) + (((/* implicit */int) arr_41 [i_21 - 3] [i_21 - 1] [i_16 + 1]))));
                            var_46 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_18] [(unsigned char)14] [i_21 - 3] [i_0] [i_18] [i_18])) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) arr_41 [i_21 + 1] [i_16] [i_18]))))) ? (((((/* implicit */int) arr_66 [i_0] [i_0] [i_18])) / (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_60 [i_0] [i_21 - 3] [i_16 - 2]))));
                        }
                        var_47 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)115))));
                    }
                } 
            } 
        }
    }
    var_48 |= ((/* implicit */unsigned char) min((((/* implicit */int) min((var_14), (var_4)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_8)) | (((/* implicit */int) var_7)))) : (((/* implicit */int) min(((unsigned char)136), ((unsigned char)133))))))));
}
