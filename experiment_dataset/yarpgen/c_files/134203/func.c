/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134203
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1] = min((-1988452725), (((/* implicit */int) (unsigned char)23)));
                    arr_11 [i_2] = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_5 [i_1] [i_0])))), (((((/* implicit */_Bool) (-(arr_6 [i_2])))) ? (((((/* implicit */int) arr_5 [i_0] [i_1])) / (arr_0 [(_Bool)1]))) : (((/* implicit */int) var_11))))));
                }
            } 
        } 
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) arr_8 [i_0 + 1])) : (((/* implicit */int) var_1))))) || ((!(((/* implicit */_Bool) arr_8 [i_0 - 3]))))));
        arr_12 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))) : (((((/* implicit */_Bool) 1525230744)) ? (((var_11) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_0))))));
    }
    for (short i_3 = 2; i_3 < 16; i_3 += 3) 
    {
        arr_16 [i_3] &= ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((unsigned int) var_10)) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_3 - 2] [i_3])) <= (((((/* implicit */int) arr_5 [i_3] [i_3])) | (((/* implicit */int) (signed char)-61)))))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
        {
            arr_24 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
            arr_25 [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (max((((/* implicit */unsigned int) var_6)), (arr_6 [i_4]))))))) >= (((unsigned long long int) arr_3 [i_4]))));
            var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) arr_4 [i_5] [i_5] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-58))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_5] [9LL] [i_4])) != (((/* implicit */int) var_4)))))));
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
            {
                var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4])) * (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_7))))) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */int) var_1)) - ((((_Bool)1) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (_Bool)1))))))));
                arr_30 [i_6] [i_5] [i_5] [i_6] = ((((/* implicit */_Bool) ((int) arr_5 [i_4] [i_4]))) && ((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)247)))))));
                arr_31 [i_6] [i_6] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_7 [i_4] [i_4]))))));
                var_17 |= ((/* implicit */int) arr_28 [i_4] [6U] [i_6]);
                arr_32 [i_6] [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_28 [i_6] [i_5] [i_6])), (arr_9 [i_6] [i_6] [i_6]))))));
            }
            for (signed char i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
            {
                var_18 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_29 [i_7] [i_7])) | (arr_9 [i_4] [i_4] [(short)13]))), (((/* implicit */unsigned long long int) (~(2147483647)))))))));
                arr_35 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) min((var_7), (((/* implicit */unsigned short) var_9)))))) : (((((/* implicit */_Bool) arr_33 [i_4] [(_Bool)1] [5ULL] [i_7])) ? (((/* implicit */int) max((var_6), (var_5)))) : (((/* implicit */int) min((((/* implicit */signed char) var_11)), (arr_13 [i_7]))))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    for (unsigned int i_9 = 3; i_9 < 13; i_9 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) : (((((((/* implicit */_Bool) (unsigned char)23)) ? (1791300482U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62059))))) | (((/* implicit */unsigned int) arr_20 [i_9] [i_5] [i_9 - 1]))))));
                            arr_40 [i_9] [i_9] [i_7] [i_9] [i_4] = ((/* implicit */long long int) ((short) var_7));
                        }
                    } 
                } 
            }
            for (signed char i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
            {
                var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_13 [i_10]), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_4] [i_4] [i_4] [i_4]))) > (var_10))))))) ? (max((((/* implicit */int) arr_13 [i_4])), ((-(((/* implicit */int) arr_37 [i_4])))))) : (((/* implicit */int) var_1))));
                arr_45 [(unsigned char)2] [i_5] [i_10] [i_10] &= ((((/* implicit */_Bool) max((((((/* implicit */int) var_11)) + (((/* implicit */int) var_5)))), (((int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) var_1))))) ? (max((arr_3 [i_10]), (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (unsigned short)62059))))))) : (((((((/* implicit */int) (signed char)-17)) == (((/* implicit */int) (unsigned short)25811)))) ? (max((((/* implicit */unsigned int) (unsigned char)11)), (15U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [10LL] [i_5] [i_10]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_11]))) == (arr_18 [i_4]))))));
                    var_22 *= ((/* implicit */unsigned char) ((_Bool) arr_41 [i_4]));
                    arr_48 [i_11] [i_10] [i_10] [5LL] [9U] = ((/* implicit */unsigned long long int) arr_26 [i_10] [i_5] [i_5] [i_11]);
                }
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    arr_51 [i_4] [i_4] [i_4] [i_10] [i_4] = ((/* implicit */int) ((unsigned char) max((arr_18 [i_10]), (arr_18 [i_12]))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_4] [i_4]))))), (((unsigned int) arr_19 [i_5])))))));
                }
            }
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
        {
            arr_54 [i_4] = ((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) arr_52 [i_13] [i_13] [i_4])) : (((/* implicit */int) arr_4 [i_4] [0LL] [i_13]))));
            arr_55 [i_4] [i_13] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))) ^ (4294967283U)));
        }
        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 2; i_15 < 10; i_15 += 3) 
            {
                for (unsigned char i_16 = 1; i_16 < 13; i_16 += 3) 
                {
                    {
                        arr_63 [i_16] = ((/* implicit */short) ((min((((/* implicit */int) var_1)), (var_3))) & (((int) (!(((/* implicit */_Bool) var_10)))))));
                        var_24 &= ((/* implicit */unsigned long long int) var_4);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_17 = 3; i_17 < 12; i_17 += 3) 
            {
                for (unsigned int i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    {
                        arr_69 [i_4] [(unsigned char)7] [i_4] [0ULL] [i_4] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) arr_62 [i_4] [10LL] [i_17] [i_17] [i_18])), (max((((/* implicit */unsigned int) var_4)), (var_10))))), ((+(var_10)))));
                        var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((var_10) - (658967403U)))))))))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (-(3017938747U))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_19 = 1; i_19 < 12; i_19 += 3) 
            {
                arr_72 [13] = ((/* implicit */short) (~(arr_9 [i_4] [i_14] [i_4])));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_10)))) ? ((~(((/* implicit */int) var_4)))) : (var_8)));
                var_28 |= ((/* implicit */unsigned short) ((unsigned char) var_11));
            }
        }
        /* LoopNest 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (signed char i_21 = 0; i_21 < 14; i_21 += 3) 
            {
                for (unsigned int i_22 = 1; i_22 < 12; i_22 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_23 = 0; i_23 < 14; i_23 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_22] [i_23])) : (((/* implicit */int) var_9))))), (arr_26 [i_21] [i_21] [i_21] [i_21])))) ? (arr_67 [i_22 + 2] [i_20] [i_22] [i_22]) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_5 [i_20] [i_20]))))));
                            var_30 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_11)), (arr_64 [i_4])))))) ? (((/* implicit */int) var_1)) : (min((((/* implicit */int) var_9)), (arr_43 [i_4] [i_4] [i_4])))));
                        }
                        for (long long int i_24 = 0; i_24 < 14; i_24 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 746001536U)) && (((/* implicit */_Bool) 4899317572515590723LL))))))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */int) var_7)) & (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_77 [i_4] [i_20] [i_4])))) ? (arr_2 [i_21] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_65 [1U] [(unsigned short)6] [i_21] [i_24])) : (((/* implicit */int) var_9)))) > (((/* implicit */int) arr_44 [i_4] [i_21] [(short)8] [i_24])))))))))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_25 = 3; i_25 < 13; i_25 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned char) ((int) ((_Bool) var_4)));
                            var_36 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                            arr_87 [i_4] [i_4] [i_21] [i_22] = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) arr_27 [i_4] [i_21] [i_22] [i_25])))));
                        }
                        arr_88 [i_4] [i_21] [i_21] [(unsigned char)13] [i_22] = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                    }
                } 
            } 
        } 
        arr_89 [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) ? (var_3) : (max((((/* implicit */int) var_7)), (var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_4] [i_4])) < ((-(((/* implicit */int) (unsigned short)65527)))))))) : (min((arr_33 [i_4] [i_4] [i_4] [6U]), (((/* implicit */unsigned int) ((_Bool) var_8)))))));
        arr_90 [(unsigned char)2] [i_4] = min((max((arr_18 [i_4]), (arr_73 [(signed char)2]))), (((/* implicit */unsigned long long int) var_10)));
    }
    /* LoopNest 3 */
    for (unsigned char i_26 = 4; i_26 < 11; i_26 += 1) 
    {
        for (int i_27 = 0; i_27 < 12; i_27 += 1) 
        {
            for (long long int i_28 = 0; i_28 < 12; i_28 += 3) 
            {
                {
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((_Bool) arr_76 [i_27] [i_27] [i_27])) ? (((((/* implicit */_Bool) arr_76 [i_26] [i_26 - 3] [12LL])) ? (((/* implicit */int) var_1)) : (arr_20 [i_26] [i_27] [i_28]))) : ((~(((/* implicit */int) var_0)))))))));
                    arr_99 [i_27] [i_27] [i_27] = ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_83 [i_26] [i_27] [(_Bool)1] [i_27] [0ULL] [i_26 - 4])), (var_7)))), ((+(((/* implicit */int) arr_14 [i_27] [i_26 - 1]))))));
                }
            } 
        } 
    } 
}
