/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10631
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_1 [i_0]))));
        var_16 = ((/* implicit */unsigned char) arr_0 [(unsigned char)10]);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (signed char i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_9 [i_3 - 2] [i_2] [i_1] [i_0] = (signed char)0;
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)85)) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_3 [(unsigned char)11] [i_1] [(unsigned char)8])) : (((/* implicit */int) (signed char)-1)))) : (((((/* implicit */int) (unsigned char)148)) >> (((((/* implicit */int) arr_1 [i_4])) + (123)))))));
                            var_18 = arr_1 [i_4 + 3];
                            var_19 = ((/* implicit */unsigned char) (signed char)-1);
                        }
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) != (((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)85)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 10; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        arr_22 [i_7] [(signed char)1] [i_5] [i_0] &= arr_10 [i_6] [(unsigned char)6];
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) ((unsigned char) (unsigned char)59))) : (((/* implicit */int) (signed char)0)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            arr_27 [i_0] [i_7] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_8])) ? (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [(unsigned char)1] [(unsigned char)9] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (signed char)-1)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) arr_13 [i_0] [i_8]))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-93))));
                            arr_28 [(signed char)1] [i_5 + 1] [i_5] [(unsigned char)5] [(signed char)1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_5 + 2] [i_5 + 2])) ? (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)113)))) : (((/* implicit */int) ((unsigned char) arr_17 [i_7] [i_7] [(signed char)5])))));
                            arr_29 [(unsigned char)5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)8)) >> (((/* implicit */int) (unsigned char)16))));
                        }
                        var_23 += ((/* implicit */unsigned char) ((signed char) (signed char)-1));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_11 = 1; i_11 < 13; i_11 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)59)) & (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_40 [i_10] [i_10] [i_13]))))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) arr_34 [i_11] [i_10])) : ((~(((/* implicit */int) arr_41 [i_13] [(unsigned char)11] [i_13] [(unsigned char)13]))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) & (((/* implicit */int) (unsigned char)77))));
                            arr_45 [(unsigned char)1] [(unsigned char)1] = (unsigned char)255;
                        }
                        for (unsigned char i_14 = 3; i_14 < 13; i_14 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)196)) & (((/* implicit */int) (signed char)-1))));
                            var_28 = (signed char)57;
                        }
                        var_29 = ((/* implicit */signed char) (unsigned char)155);
                    }
                    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)208)) & (((/* implicit */int) (signed char)23)))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)-6))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)19))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) /* same iter space */
                    {
                        var_32 = (unsigned char)155;
                        var_33 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)253)) & (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (signed char)-52))))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (signed char i_18 = 0; i_18 < 14; i_18 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (unsigned char)255))) != (((/* implicit */int) var_2))));
                            arr_59 [i_9] [i_10] [i_18] [i_17] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-124)) >= (((/* implicit */int) (unsigned char)254))));
                            arr_60 [i_9] [i_9] [(signed char)9] [i_18] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_56 [(unsigned char)0] [(signed char)2] [i_10] [i_11 + 1] [i_17] [i_18])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)214))));
                        }
                        for (unsigned char i_19 = 1; i_19 < 12; i_19 += 4) /* same iter space */
                        {
                            var_35 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [(signed char)2] [i_10])) ? (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) arr_63 [i_9] [i_10] [i_10])) : (((/* implicit */int) arr_48 [(unsigned char)11] [(unsigned char)11])))) : (((/* implicit */int) ((signed char) (signed char)-112)))));
                            var_36 = (unsigned char)21;
                            arr_64 [i_19] = ((/* implicit */unsigned char) ((signed char) arr_55 [i_9]));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-81)) / (((/* implicit */int) (unsigned char)254))));
                            arr_65 [i_11 + 1] [i_11] [i_11 + 1] [i_19] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)62)) != (((/* implicit */int) (unsigned char)100))))) >> (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned char)243)))))));
                        }
                        for (unsigned char i_20 = 1; i_20 < 12; i_20 += 4) /* same iter space */
                        {
                            arr_69 [i_11] [i_11] [i_20] [i_11] [i_11] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)220)) >> (((((/* implicit */int) (unsigned char)220)) - (200)))))));
                            var_38 = (signed char)-108;
                        }
                        for (unsigned char i_21 = 1; i_21 < 12; i_21 += 4) /* same iter space */
                        {
                            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (unsigned char)65))))) ? (((/* implicit */int) (unsigned char)123)) : (((((/* implicit */int) (unsigned char)22)) - (((/* implicit */int) arr_53 [i_21 + 1] [(signed char)0] [(unsigned char)6] [i_11] [i_10] [i_9]))))));
                            var_40 = (unsigned char)205;
                        }
                        var_41 = ((/* implicit */signed char) ((((/* implicit */int) arr_52 [(unsigned char)2] [i_11 - 1] [i_11] [i_11 - 1])) | (((/* implicit */int) (signed char)40))));
                        arr_72 [(signed char)3] [(signed char)5] [i_11 - 1] [i_17] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)234)))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_47 [(unsigned char)9] [(unsigned char)3] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) (signed char)78)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)4))))));
                    }
                    arr_73 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) arr_52 [i_9] [i_9] [i_9] [i_9]);
                    /* LoopSeq 2 */
                    for (unsigned char i_22 = 0; i_22 < 14; i_22 += 4) 
                    {
                        arr_76 [(signed char)1] [i_11 + 1] [i_11 - 1] [i_11] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (signed char)4)))));
                        var_42 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)207)) | (((/* implicit */int) arr_58 [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11] [i_11 + 1] [i_11 + 1]))));
                    }
                    for (signed char i_23 = 0; i_23 < 14; i_23 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_24 = 0; i_24 < 14; i_24 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned char) (signed char)126);
                            arr_81 [i_23] [(unsigned char)8] [i_11 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)254)) - (((/* implicit */int) (signed char)3))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_25 = 3; i_25 < 12; i_25 += 4) /* same iter space */
                        {
                            arr_86 [(signed char)13] [i_10] [(signed char)7] [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (unsigned char)101))))) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)11)) >= (((/* implicit */int) (unsigned char)255)))))));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)207))));
                            var_45 = var_5;
                        }
                        for (signed char i_26 = 3; i_26 < 12; i_26 += 4) /* same iter space */
                        {
                            arr_89 [i_26 + 2] [i_23] [i_9] [i_11] [i_23] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (unsigned char)17))) / (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (unsigned char)236))))));
                            var_46 = ((/* implicit */signed char) (-(((/* implicit */int) arr_44 [i_9] [(unsigned char)8] [i_11] [(signed char)4]))));
                        }
                        arr_90 [i_11] [i_23] [i_11] [i_11 - 1] = (signed char)0;
                    }
                }
                for (unsigned char i_27 = 0; i_27 < 14; i_27 += 2) 
                {
                    var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) arr_56 [i_27] [i_10] [i_10] [i_9] [i_9] [i_9])))))));
                    var_48 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_91 [i_9] [i_9] [(signed char)12])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-9))))) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) min(((signed char)0), ((signed char)127))))))));
                }
                var_49 = ((/* implicit */signed char) ((((/* implicit */int) arr_50 [(unsigned char)2] [(signed char)10] [i_9])) >= (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)99)) - (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (unsigned char)48))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (signed char)-1)))))))));
            }
        } 
    } 
}
