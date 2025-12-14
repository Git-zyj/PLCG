/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186439
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_11 &= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_1 [6]))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_0 [i_0 - 1])))));
                arr_4 [i_1] [i_1] [(unsigned short)18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1339170990)))) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) ((((/* implicit */int) (short)-15504)) != (((/* implicit */int) arr_1 [i_1])))))))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_0 - 4])))) : ((+(((/* implicit */int) arr_0 [i_1]))))));
                var_12 = ((/* implicit */int) ((unsigned short) arr_1 [i_0 - 1]));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_11 [i_2] [i_3] = ((/* implicit */_Bool) arr_6 [(_Bool)1] [i_3]);
            /* LoopNest 2 */
            for (unsigned char i_4 = 2; i_4 < 15; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_1 [i_2 + 1]))))) ? (((/* implicit */int) ((unsigned short) 1724706828))) : (((/* implicit */int) arr_1 [i_4])))), (((/* implicit */int) var_8))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */long long int) arr_3 [i_2] [i_3]);
                            arr_18 [i_2] [i_2] [i_4 - 1] [i_4] [5] = ((/* implicit */short) (-(((/* implicit */int) min((arr_1 [i_5]), (arr_7 [i_3]))))));
                        }
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 15; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [(short)3] [i_2])) ? (((((/* implicit */_Bool) 5590634247656202128LL)) ? (((/* implicit */int) arr_15 [i_8] [4U] [i_8] [i_2] [i_8])) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_14 [i_2] [(short)9] [i_7 - 2] [i_8])) ? (((/* implicit */int) arr_17 [i_2 + 1] [i_8] [i_2])) : (((/* implicit */int) arr_0 [i_8])))))), (((/* implicit */int) arr_19 [i_7] [i_8]))));
                    /* LoopSeq 4 */
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2473274823U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7 + 2] [i_7 - 1]))) : (2671323202U)))));
                        var_17 = min((((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned char)43)))), (((/* implicit */int) var_8))))), ((~(arr_13 [i_9] [i_2 + 1] [i_9]))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
                    {
                        var_18 = ((((/* implicit */_Bool) 2671323202U)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) 2678087335U)))) ? (((25U) << (((arr_25 [(unsigned char)12] [(unsigned char)12] [2U]) - (1373537066))))) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3914766790U)))))) : (max((((/* implicit */long long int) 18U)), (105068519299282557LL))));
                        var_19 = ((/* implicit */unsigned char) arr_3 [i_2] [i_2]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                    {
                        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_2 + 1] [i_2 + 1] [i_8] [i_11])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min(((unsigned char)86), (((/* implicit */unsigned char) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (int i_12 = 2; i_12 < 16; i_12 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((((arr_9 [i_2 + 1]) ? (arr_14 [i_2 + 1] [i_7 - 2] [i_12 + 1] [i_12]) : (arr_14 [i_2 + 1] [i_7 + 2] [i_12 - 1] [i_12 - 2]))), (((/* implicit */int) var_0))));
                            var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 1569615898)) ? (((/* implicit */int) (short)-20769)) : ((~(arr_28 [i_2 + 1] [i_7 - 1] [i_12 - 1] [i_7 - 1])))));
                            var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_11] [i_12] [i_12 - 2] [8] [i_12 - 1])) : (((/* implicit */int) arr_15 [i_8] [i_12 - 1] [i_12 - 2] [i_12 - 2] [i_12 - 1]))))), (((long long int) var_10))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min(((unsigned short)26149), (((/* implicit */unsigned short) (unsigned char)0)))))));
                            arr_34 [i_2] [i_7] [(unsigned char)2] [i_11] [i_12 - 1] = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_33 [i_7] [i_7 - 2] [i_12 + 1] [i_7] [i_12])), (arr_8 [(unsigned short)11] [i_7 - 2])))) / (((((/* implicit */_Bool) 434171326U)) ? (-7379591688313823565LL) : (((/* implicit */long long int) -1180671980))))));
                        }
                        arr_35 [i_2] [6LL] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_7 + 2])) ? (((((/* implicit */_Bool) (unsigned short)25897)) ? (((/* implicit */int) arr_7 [i_7 + 2])) : (((/* implicit */int) arr_7 [i_7 + 2])))) : (((/* implicit */int) max((arr_7 [i_7 + 1]), (arr_7 [i_7 - 1]))))));
                        arr_36 [i_7] [i_8] [i_11] = ((/* implicit */unsigned int) (!(arr_17 [i_11] [i_8] [i_2])));
                    }
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
                    {
                        var_25 |= ((/* implicit */short) var_10);
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (short)-1906))));
                    }
                    var_27 *= ((/* implicit */unsigned int) ((min(((-2147483647 - 1)), (((/* implicit */int) arr_24 [i_7] [i_7] [i_7] [i_7 - 1] [i_8])))) >= (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_17 [i_2 + 1] [i_8] [i_8])) : (((((/* implicit */_Bool) arr_7 [i_7])) ? (1150435142) : (((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) arr_41 [i_14] [i_14])) ? (((((/* implicit */_Bool) arr_41 [i_14] [i_14])) ? (arr_41 [i_14] [i_14]) : (arr_41 [i_14] [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_41 [i_14] [i_14]))))))));
        var_29 ^= ((/* implicit */short) 25U);
        var_30 = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_40 [i_14])) && (((/* implicit */_Bool) arr_40 [i_14]))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9519)) ? (3726877528U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((~(max((3973511458U), (((/* implicit */unsigned int) arr_39 [11U])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)29757)), (19U)))) ? (((((/* implicit */_Bool) arr_37 [i_15] [4U] [i_15] [i_15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16230)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)15347)), (arr_37 [i_15] [i_15] [i_15] [i_15]))))))));
        /* LoopSeq 2 */
        for (unsigned char i_16 = 2; i_16 < 12; i_16 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */int) ((arr_9 [i_15]) ? (((arr_2 [i_15]) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_16 + 3] [i_16 + 3] [i_16]))) : (2075152365908766679LL))) : (((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_37 [i_15] [i_15] [i_15] [i_16])), (arr_38 [i_16 - 1] [i_16] [14U] [i_16]))) & (((/* implicit */unsigned int) ((int) var_8))))))));
            arr_46 [i_15] [i_16] = ((/* implicit */int) ((_Bool) ((short) arr_12 [i_15] [i_16] [(unsigned char)6])));
        }
        for (unsigned char i_17 = 2; i_17 < 12; i_17 += 3) /* same iter space */
        {
            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_41 [i_17 + 1] [i_17 + 3])))))))));
            arr_49 [i_15] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) 1623644093U)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105)))));
        }
    }
}
