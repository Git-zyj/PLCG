/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107081
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                arr_6 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5))))), (min((4630913256717323381ULL), (((/* implicit */unsigned long long int) (signed char)-103)))))), (((/* implicit */unsigned long long int) var_9))));
                var_10 = ((/* implicit */unsigned short) var_3);
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            arr_12 [i_4] [i_2] [16U] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_2]);
                            var_11 *= (-(((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_0] [i_0])))))))));
                            arr_13 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_6))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_10 [i_4] [14LL] [i_2] [i_0] [i_0])))))) == (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_3 [8U]))))))));
                            arr_14 [i_4] [i_1] [15U] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_2 [i_0]))))) == (min((((/* implicit */unsigned int) var_1)), (var_9)))))), (arr_0 [i_0])));
                            arr_15 [i_0] [i_0] [12LL] [i_0] [i_2] [(short)16] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_2] [i_3])) == (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])))))) % (min((var_3), (((/* implicit */unsigned long long int) var_5)))))), (min((max((((/* implicit */unsigned long long int) var_1)), (var_3))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [i_4]))) | (var_3)))))));
                        }
                    } 
                } 
                arr_16 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */int) ((max((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (arr_3 [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_0] [3U]))))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [16LL] [i_1] [7ULL])))));
            }
            for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
            {
                arr_19 [i_0] [i_1] [(signed char)2] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(var_5)))), (max((var_2), (((/* implicit */long long int) arr_2 [i_0]))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (arr_3 [i_0])));
            }
            arr_20 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_9);
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) arr_7 [i_1] [i_6] [i_1] [i_1]))));
                var_14 ^= ((/* implicit */signed char) var_3);
                var_15 = ((/* implicit */unsigned short) ((int) arr_22 [i_0] [i_1] [i_6] [i_6]));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    arr_25 [(signed char)18] [i_1] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_22 [i_0] [i_0] [i_0] [i_0]) | (arr_22 [10U] [i_1] [i_1] [i_0])))) || (((/* implicit */_Bool) arr_0 [i_1]))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (var_5)));
                    arr_26 [3U] [3U] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0])) > (var_2)))) <= (((/* implicit */int) var_0))));
                }
                /* vectorizable */
                for (signed char i_8 = 2; i_8 < 19; i_8 += 4) 
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) var_1)) | (arr_24 [i_6] [i_8] [i_8 - 1] [i_8] [i_8 + 2]))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))) ? (((/* implicit */int) var_7)) : (((arr_18 [i_6] [i_1] [i_0]) ? (arr_0 [i_6]) : (((/* implicit */int) arr_10 [(signed char)21] [i_1] [i_1] [i_6] [(signed char)21])))))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned char) arr_3 [i_0])))));
                }
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)1866)), (1309155474U)));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_4))) + (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_8)))))))) % (var_2)));
                }
                arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) ((unsigned long long int) arr_30 [i_0] [i_1] [i_6] [i_6])));
            }
            for (int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                arr_37 [i_0] [i_10] = ((/* implicit */unsigned short) arr_27 [i_0] [i_0] [i_1] [i_10]);
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_3))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_1))));
                    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) var_7))));
                    arr_42 [i_0] [i_1] [2] [i_11] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_8)))))) * (((unsigned int) var_0))));
                }
                for (short i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
                {
                    arr_45 [i_10] [i_10] [i_10] [i_0] [i_0] [i_0] = var_1;
                    arr_46 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_44 [i_0] [i_0] [i_10] [i_12] [i_12])))) < (min((((/* implicit */unsigned long long int) var_9)), (var_3)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))));
                    arr_47 [i_0] [9U] [i_10] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (max((max((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_35 [i_0] [i_0]))))));
                    arr_48 [i_0] [10LL] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)1839)), (1309155474U)));
                }
                for (short i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
                {
                    var_24 += ((/* implicit */unsigned short) max((((/* implicit */long long int) ((max((var_5), (((/* implicit */unsigned int) var_1)))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_17 [(signed char)8] [i_10]))))))))), (max((max((arr_4 [i_13] [i_0]), (((/* implicit */long long int) arr_34 [i_0] [i_1] [i_0])))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_10] [i_13])), (var_5))))))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((((/* implicit */_Bool) 2985811831U)) ? (4630913256717323376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))))), (((/* implicit */unsigned long long int) ((signed char) arr_38 [i_13] [i_10] [i_0] [i_0] [i_0]))))))));
                }
            }
            arr_51 [i_0] = ((arr_21 [i_0] [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))));
            arr_52 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)67))));
        }
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_7)))))) > (var_3))))));
        var_27 = var_0;
        /* LoopSeq 3 */
        for (short i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                for (unsigned short i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    {
                        arr_59 [i_0] [i_16] = ((/* implicit */long long int) arr_11 [i_0] [i_0]);
                        var_28 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) == (arr_0 [i_14]))))) : ((-(arr_57 [i_14] [i_14] [i_0] [i_16]))))));
                        arr_60 [i_0] [i_14] [i_16] [i_16] = ((/* implicit */unsigned char) ((unsigned short) var_9));
                    }
                } 
            } 
            arr_61 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) var_7))), (arr_10 [i_14] [i_14] [i_14] [i_14] [i_0]))))) == (var_3)));
        }
        for (long long int i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            arr_65 [i_17] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_4 [i_17] [i_17])) * (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_0] [i_0] [i_0]))))))) == (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [(short)3] [i_17])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_17] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_3))))))))));
            var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [(unsigned short)14] [i_17] [i_17] [i_17])) ? (((long long int) ((long long int) var_5))) : (max((arr_22 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((4630913256717323376ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1867))))))))));
            arr_66 [i_0] [i_0] [i_17] = ((/* implicit */_Bool) (-(arr_22 [15ULL] [i_17] [i_17] [i_17])));
            var_30 ^= ((/* implicit */unsigned short) max(((short)4064), ((short)-7836)));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 22; i_18 += 4) 
        {
            var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13815830816992228246ULL)) ? (((/* implicit */int) ((unsigned short) (unsigned short)27498))) : (((/* implicit */int) var_4))));
            var_32 ^= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (arr_23 [i_0] [i_18] [i_18] [i_18]))));
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_0] [i_18])) > ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_18] [i_0] [i_18])))))))));
            var_34 = ((/* implicit */short) ((((((/* implicit */int) var_6)) - (((/* implicit */int) arr_10 [i_0] [i_18] [i_0] [i_18] [i_18])))) > (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0]))));
            var_35 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_0))));
        }
        arr_69 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_0] [i_0]))) + ((~(2451228692946713794ULL))));
    }
    var_36 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((signed char) var_1))) && (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))))));
}
