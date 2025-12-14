/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124489
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_20 += var_9;
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) (unsigned char)164))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) min((arr_1 [i_0]), (var_16)))) : (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_21 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_2 [(unsigned char)0])) : (((((/* implicit */int) arr_4 [i_2])) * (((/* implicit */int) arr_8 [i_1] [i_1])))))), ((-(((/* implicit */int) ((unsigned char) arr_4 [i_1])))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
            {
                arr_11 [(unsigned char)17] [i_3] [i_3] [i_3] = arr_6 [i_1 - 1] [(unsigned char)8] [(unsigned char)8];
                arr_12 [i_1] [(unsigned char)2] [i_2] [(unsigned char)12] |= min((arr_6 [i_1] [(unsigned char)5] [i_1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned char)14])) % (((/* implicit */int) arr_8 [i_1] [i_3]))))) && (((/* implicit */_Bool) var_2))))));
            }
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
            {
                var_22 *= arr_0 [(unsigned char)14];
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) var_15)))))));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) arr_8 [i_1 + 1] [i_2]))));
            }
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) arr_0 [i_5]))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) (unsigned char)62)) | (((/* implicit */int) arr_1 [i_5])))))))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                var_26 ^= var_3;
                var_27 = ((/* implicit */unsigned char) max((var_27), (arr_13 [i_1] [i_5] [i_5] [i_6])));
            }
        }
        var_28 *= arr_2 [i_1 - 1];
        var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned char) ((unsigned char) var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 + 1])))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 1; i_8 < 16; i_8 += 1) 
        {
            arr_26 [i_7] [i_7] [i_8 - 1] = arr_15 [i_7] [i_7] [i_8];
            arr_27 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */int) arr_2 [(unsigned char)10])) : (((/* implicit */int) var_16)))))));
            /* LoopNest 3 */
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((unsigned char) arr_33 [i_7] [i_8] [i_8] [i_8 - 1] [i_11] [i_10] [i_7 - 1]))));
                            arr_35 [i_7] [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7] = ((unsigned char) var_18);
                            var_31 += var_3;
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            arr_38 [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_19)) | (((/* implicit */int) var_10)))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (unsigned char)46))))));
            var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_12] [(unsigned char)10] [(unsigned char)14])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255))));
        }
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_7])) | (((/* implicit */int) arr_0 [i_7]))));
    }
    for (unsigned char i_13 = 1; i_13 < 17; i_13 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_14 = 4; i_14 < 17; i_14 += 4) 
        {
            for (unsigned char i_15 = 2; i_15 < 17; i_15 += 3) 
            {
                {
                    arr_46 [i_13] [i_14] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_13 - 1])) * (((/* implicit */int) var_18)))))));
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_41 [(unsigned char)3])))))));
                }
            } 
        } 
        arr_47 [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) max((var_13), (arr_23 [i_13 + 1] [(unsigned char)10])))) ? (((/* implicit */int) max(((unsigned char)132), (var_11)))) : (((((/* implicit */_Bool) arr_2 [i_13 - 1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_28 [i_13 - 1] [(unsigned char)10] [i_13])))))) : (((((/* implicit */_Bool) ((unsigned char) (unsigned char)36))) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_6)))))))));
        var_35 |= ((unsigned char) ((((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) var_4)))) / (((((/* implicit */_Bool) arr_45 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_16 [i_13] [(unsigned char)10] [i_13 + 1])) : (((/* implicit */int) arr_41 [i_13]))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_16 = 1; i_16 < 15; i_16 += 3) 
    {
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_16 + 3] [i_16] [i_16] [i_16]))))) ? ((~(((/* implicit */int) (unsigned char)2)))) : ((+(((/* implicit */int) arr_1 [i_16]))))))) ? (min((((((/* implicit */_Bool) arr_7 [i_16] [i_16] [(unsigned char)4])) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned char)250)))), (((/* implicit */int) (unsigned char)201)))) : (((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (unsigned char)252)) - (241)))))));
        arr_50 [(unsigned char)16] &= arr_49 [i_16 - 1];
    }
    /* vectorizable */
    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
    {
        var_37 |= arr_52 [i_17];
        var_38 = ((unsigned char) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_53 [i_17]))));
    }
    /* vectorizable */
    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
    {
        arr_57 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_51 [(unsigned char)0])))) : (((/* implicit */int) var_9))));
        var_39 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) var_14)))) + (2147483647))) << (((((/* implicit */int) arr_53 [i_18])) - (98)))));
        var_40 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)201))))));
        /* LoopNest 3 */
        for (unsigned char i_19 = 3; i_19 < 22; i_19 += 4) 
        {
            for (unsigned char i_20 = 1; i_20 < 22; i_20 += 4) 
            {
                for (unsigned char i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_22 = 1; i_22 < 21; i_22 += 4) 
                        {
                            var_41 += ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_61 [(unsigned char)20] [i_18] [i_20])) << (((((/* implicit */int) var_7)) - (138)))))));
                            var_42 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_60 [i_18] [i_18] [i_20 + 1])) >> (((((/* implicit */int) arr_60 [i_18] [i_19 - 3] [i_20 - 1])) - (54)))));
                            arr_69 [i_20] [i_20 - 1] [(unsigned char)20] [i_20] [i_20 + 2] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_20 - 1] [(unsigned char)8] [i_22 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_64 [i_18] [i_18] [i_20 - 1] [i_19 + 1] [i_18] [i_18]))));
                            var_43 += (unsigned char)62;
                            arr_70 [i_20] [(unsigned char)21] = var_8;
                        }
                        arr_71 [i_20] [i_19] [i_20] [i_21] [i_20] = (unsigned char)21;
                    }
                } 
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned char) (+(((((((/* implicit */int) var_12)) + (((/* implicit */int) var_4)))) / (((((/* implicit */int) var_10)) << (((/* implicit */int) var_11))))))));
    var_45 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
}
