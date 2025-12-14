/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187180
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
    var_13 = var_1;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 &= var_3;
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? ((+(((/* implicit */int) (signed char)-18)))) : (((((/* implicit */int) arr_7 [(signed char)13] [i_0])) * (((/* implicit */int) (signed char)125))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */int) arr_2 [i_3 - 2])) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) (signed char)-36))));
                        var_15 = arr_9 [i_0] [i_1 - 2] [i_2] [i_3];
                        arr_13 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_1 - 2] [i_1 + 3])) ? (((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_1 - 2] [i_1 + 2])))), (((/* implicit */int) ((signed char) max((arr_3 [i_0]), (var_9)))))));
                    }
                    for (signed char i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)116)))) % ((((((~(((/* implicit */int) (signed char)17)))) + (2147483647))) >> (((((/* implicit */int) (signed char)-18)) + (46)))))));
                        var_17 += arr_8 [(signed char)8] [(signed char)8] [i_2] [i_2] [i_2] [i_2];
                        arr_16 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((arr_3 [i_0]), ((signed char)79)))) : (((/* implicit */int) min((var_4), ((signed char)-83))))))) ? ((~(((/* implicit */int) arr_10 [i_0] [i_4])))) : (((((((/* implicit */int) (signed char)122)) & (((/* implicit */int) (signed char)17)))) & ((~(((/* implicit */int) arr_7 [i_0] [i_0]))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)120), ((signed char)17))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) ^ (((/* implicit */int) max((var_4), ((signed char)114)))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_19 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [(signed char)8] [i_1 - 1] [(signed char)16] [i_1 - 1]))));
                            arr_21 [(signed char)2] [i_5] [i_2] [i_0] [(signed char)2] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)5))));
                            arr_22 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 21; i_7 += 1) 
                        {
                            var_20 = var_7;
                            var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_0] [i_5] [i_2] [i_0] [i_7 + 1] [(signed char)11])) : (((/* implicit */int) arr_4 [(signed char)22]))));
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_26 [i_0] [i_0] [(signed char)1] [i_0] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [i_5] [i_7])))))));
                            var_23 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_5))))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 4; i_8 < 23; i_8 += 1) 
                        {
                            var_24 &= var_9;
                            arr_30 [i_8] [i_8] [i_0] = arr_26 [i_0] [i_1] [i_2] [(signed char)4] [i_8];
                        }
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (min((((((/* implicit */int) (signed char)0)) + (((/* implicit */int) var_9)))), (((/* implicit */int) min((var_6), ((signed char)55)))))) : ((-(((/* implicit */int) (signed char)17))))));
                    }
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) min((max(((+(((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)52)))))));
                        var_27 = ((/* implicit */signed char) max((min(((~(((/* implicit */int) arr_15 [i_0] [i_1 + 3] [i_2] [i_9] [i_0])))), ((-(((/* implicit */int) arr_24 [i_9] [i_0])))))), (((/* implicit */int) arr_27 [i_0] [i_1 + 3] [(signed char)13] [(signed char)21] [i_9] [i_9] [i_9]))));
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-45)))), (((/* implicit */int) (signed char)86)))), (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) max(((signed char)99), (var_8)))) : (((/* implicit */int) max((arr_15 [i_0] [i_1 - 2] [i_2] [i_9] [i_10]), (arr_20 [i_10] [i_2] [i_0] [i_2] [i_0] [i_0] [i_0]))))))));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)122)) & (((/* implicit */int) (signed char)-88))));
                            var_29 |= var_2;
                            arr_37 [i_0] [i_9] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [(signed char)7] [i_9] [i_10]))))) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */int) arr_33 [i_0] [i_1 + 3] [i_2] [i_9] [i_10] [i_2])) | (((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_2] [i_9] [i_10]))))));
                        }
                        for (signed char i_11 = 1; i_11 < 23; i_11 += 1) 
                        {
                            arr_40 [i_0] [i_0] [i_1] [i_2] [i_0] [i_11 - 1] [i_11] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) max(((signed char)101), (var_7))))))));
                            arr_41 [i_9] [(signed char)10] |= arr_7 [i_0] [i_9];
                            var_30 &= ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_11)))));
                        }
                    }
                    var_31 += (signed char)78;
                    /* LoopSeq 2 */
                    for (signed char i_12 = 4; i_12 < 22; i_12 += 1) 
                    {
                        var_32 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((signed char) arr_20 [(signed char)12] [i_1] [i_1] [i_1] [(signed char)8] [i_1 - 1] [i_12 + 1]))) : (((/* implicit */int) arr_0 [(signed char)0]))));
                        var_33 = ((/* implicit */signed char) max((var_33), (arr_18 [(signed char)18] [(signed char)18] [i_12 - 4])));
                    }
                    for (signed char i_13 = 2; i_13 < 20; i_13 += 3) 
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [(signed char)22] [i_0])) || (((/* implicit */_Bool) arr_43 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) var_11)))))))) / (max((((/* implicit */int) (signed char)86)), ((~(((/* implicit */int) var_6))))))));
                        arr_48 [i_0] = (signed char)-19;
                        var_35 *= arr_46 [(signed char)8];
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            arr_51 [i_0] [i_0] [(signed char)23] [i_0] [(signed char)0] = ((/* implicit */signed char) ((max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))) >= (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) / (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))))));
                            arr_52 [(signed char)20] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(signed char)0] [(signed char)0] [i_13 + 2] [(signed char)2] [(signed char)10] [i_13 - 1]))))), (((((/* implicit */_Bool) arr_24 [i_1 - 2] [(signed char)10])) ? (((/* implicit */int) arr_17 [(signed char)4] [(signed char)4] [i_13 - 2] [(signed char)6] [i_13 - 2] [(signed char)4])) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_13 + 1] [(signed char)14] [i_1] [i_13]))))));
                            var_36 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))) == (((/* implicit */int) var_8)))) ? (max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) (signed char)-83)))) : (((/* implicit */int) min((arr_15 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_14]), ((signed char)-93))))));
                            arr_53 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) max((min((arr_33 [i_0] [i_1 + 2] [i_0] [(signed char)7] [i_0] [i_14]), (var_10))), (min((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)4]), ((signed char)-122))))))));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) max((min((arr_42 [i_0] [i_1]), (arr_49 [i_0] [i_2] [i_0] [(signed char)7]))), (min((var_12), (var_3)))))) : ((~(((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
                        }
                        for (signed char i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            var_38 = arr_25 [i_0] [i_0] [i_0] [(signed char)2];
                            var_39 = max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) var_0)))))))), (max(((signed char)110), ((signed char)-18))));
                            var_40 = arr_18 [(signed char)14] [i_1 - 2] [i_13 + 3];
                        }
                    }
                }
            } 
        } 
    }
}
