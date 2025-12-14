/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147632
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
    var_18 = ((/* implicit */signed char) ((unsigned short) ((short) var_13)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_0 [i_1] [i_1])) << (((((/* implicit */int) var_4)) - (45588)))))));
            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) arr_0 [i_0] [i_1])))) && (((/* implicit */_Bool) var_16))));
            arr_6 [i_0] = ((/* implicit */signed char) var_2);
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_13 [i_2] [i_2] [i_1] [i_1] [i_1] [i_2] = ((unsigned short) var_9);
                        arr_14 [i_2] [i_1] [i_2] [i_3] [i_2 + 1] = ((/* implicit */unsigned short) var_1);
                        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (short)-13215)))));
                            arr_24 [i_0] [i_0] [i_5] [i_5] [i_5] [i_6] [i_6] = (+(((/* implicit */int) var_1)));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(((/* implicit */int) arr_21 [i_5] [i_4] [i_1] [i_0])))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                var_23 = ((/* implicit */unsigned short) ((unsigned int) var_16));
            }
            for (short i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                arr_29 [i_7] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) var_7))));
            }
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                arr_32 [i_0] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (short)24667)) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_1] [i_1] [i_8] [i_8]))));
                var_25 = ((/* implicit */short) var_13);
            }
            for (signed char i_9 = 2; i_9 < 11; i_9 += 1) 
            {
                var_26 = ((/* implicit */short) var_8);
                /* LoopSeq 4 */
                for (unsigned short i_10 = 2; i_10 < 12; i_10 += 1) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_9] [i_10] [i_10] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) >> (((((/* implicit */int) arr_37 [i_0] [i_9 + 1] [i_9 + 2] [i_10 - 1])) - (2235)))));
                    arr_38 [i_0] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_8))) % (((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_9] [i_9])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))));
                    arr_39 [i_10] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */int) var_6)) << (((((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))) + (25)))));
                    arr_40 [i_0] [i_1] [i_1] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_10])) << (((((/* implicit */int) (short)24689)) - (24682)))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_9] [i_10 - 1])) ? (((/* implicit */int) arr_27 [i_0] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_10]))))) && (((/* implicit */_Bool) arr_9 [i_10] [i_10 - 2] [i_10] [i_10 - 1]))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    arr_43 [i_0] [i_1] [i_9] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) var_10))))) ? (((unsigned int) (signed char)102)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7))))))));
                    var_29 *= ((/* implicit */signed char) ((unsigned int) (unsigned short)54564));
                    var_30 = (unsigned short)65535;
                }
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    arr_46 [i_0] [i_0] [i_0] |= ((unsigned char) (unsigned short)11);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_2))))) ? (arr_16 [i_0] [i_9 - 2] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                        var_32 -= ((/* implicit */unsigned char) (+(((unsigned long long int) (unsigned char)206))));
                        arr_49 [i_0] [i_13] [i_9] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-26)) & (((/* implicit */int) var_7))));
                        var_33 ^= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) var_9)))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        arr_53 [i_0] [i_1] [i_9] [i_12] [i_14] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_28 [i_9 - 2] [i_9] [i_9 + 1]))));
                        arr_54 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_14]))) >= (0U)));
                        var_34 = ((/* implicit */signed char) (unsigned char)219);
                    }
                    for (short i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        var_35 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)5772)) == (((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_58 [i_0] [i_1] [i_9] [i_12] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)115))));
                        var_36 = var_4;
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_15])) : (((/* implicit */int) (short)24667)))))));
                    }
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
                    var_39 = ((/* implicit */int) min((var_39), (((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_36 [i_9] [i_0] [i_9] [i_9] [i_9 - 2] [i_9])) - (40332)))))));
                }
                for (signed char i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    arr_62 [i_0] [i_16] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_44 [i_0] [i_0] [i_1] [i_0] [i_9] [i_0]))))));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)81)) | (((/* implicit */int) var_7))));
                }
            }
        }
        for (unsigned int i_17 = 0; i_17 < 13; i_17 += 2) 
        {
            var_41 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) (short)-26505))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_60 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)8))))));
            var_42 ^= ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-115)))));
        }
        for (short i_18 = 0; i_18 < 13; i_18 += 1) 
        {
            var_43 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_18] [i_18]);
            arr_69 [i_0] [i_18] [i_18] = ((/* implicit */unsigned int) var_0);
            var_44 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_18])) : (var_8)))));
            /* LoopSeq 2 */
            for (short i_19 = 0; i_19 < 13; i_19 += 4) 
            {
                var_45 &= ((/* implicit */signed char) ((((/* implicit */int) arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_56 [i_18] [i_0] [i_19] [i_18] [i_18] [i_18] [i_19]))));
                arr_72 [i_0] [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_18] [i_19]))) + (arr_45 [i_19] [i_18] [i_0])));
            }
            for (unsigned char i_20 = 0; i_20 < 13; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 13; i_21 += 2) 
                {
                    for (unsigned short i_22 = 2; i_22 < 9; i_22 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_9))));
                            arr_83 [i_0] [i_0] [i_18] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
                arr_84 [i_0] [i_18] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65508)) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) ((short) (unsigned char)3)))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned char i_23 = 4; i_23 < 9; i_23 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_24 = 0; i_24 < 13; i_24 += 4) 
            {
                for (unsigned char i_25 = 0; i_25 < 13; i_25 += 3) 
                {
                    for (unsigned short i_26 = 3; i_26 < 12; i_26 += 2) 
                    {
                        {
                            arr_96 [i_0] [i_23] [i_24] [i_25] [i_26] = ((/* implicit */short) ((unsigned char) arr_57 [i_26] [i_24] [i_0]));
                            var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) (unsigned char)222))));
                        }
                    } 
                } 
            } 
            var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_23 + 3])) ? (((/* implicit */int) arr_7 [i_0] [i_23 - 4] [i_23 + 2])) : (((/* implicit */int) arr_7 [i_23] [i_23 - 1] [i_23 + 4]))));
        }
    }
    for (short i_27 = 0; i_27 < 14; i_27 += 1) 
    {
        var_49 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)91))))) ? (arr_99 [i_27] [i_27]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)245)))))))));
        arr_100 [i_27] = ((/* implicit */unsigned int) (unsigned char)219);
        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)43524))))) ? (((/* implicit */int) (short)-28578)) : ((~(((/* implicit */int) (unsigned char)190)))))), ((+(((((/* implicit */int) var_12)) - (((/* implicit */int) var_4)))))))))));
    }
    var_51 = ((/* implicit */signed char) (~(((/* implicit */int) var_16))));
    var_52 = var_9;
}
