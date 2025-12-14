/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153712
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
    var_14 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (arr_9 [i_0] [i_0] [(short)0] [i_0]))))) / (max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0] [4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)10]))) : (arr_3 [i_0] [i_0]))) != (((/* implicit */long long int) arr_5 [i_0])))))));
                    arr_10 [(unsigned short)1] [i_0] [i_2] = ((/* implicit */_Bool) arr_9 [i_0] [6LL] [i_2] [i_2]);
                    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (((~(((/* implicit */int) arr_2 [i_1])))) != (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_14 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & ((~(((/* implicit */int) (short)16894))))))) ? (min((((/* implicit */long long int) arr_13 [i_3] [i_3] [i_3] [(unsigned short)0] [7])), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [9LL] [5U] [9LL])) ? (arr_3 [i_0] [(_Bool)1]) : (arr_3 [i_0] [i_0]))))) : (((/* implicit */long long int) (~(((arr_13 [(_Bool)1] [(short)5] [i_2 - 1] [i_2 + 1] [0LL]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-16545))))))))));
                        arr_15 [i_0] [i_0] [10U] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                    }
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [8])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1]))) | (var_5)))))) || (var_12)));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_6 [i_0] [i_0] [0ULL]);
                    }
                    arr_21 [i_0] [i_0] [i_0] = min(((short)-16545), ((short)16899));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((short) (_Bool)0));
    }
    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_19 |= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)6207)) : (((/* implicit */int) (short)16906))))) ? (((((/* implicit */_Bool) arr_22 [(unsigned char)8] [8U])) ? (arr_23 [12U] [10]) : (arr_23 [10] [i_5]))) : (((arr_23 [0] [i_5]) >> (((var_3) - (160141997))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(0)))))))));
        var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_5] [(short)6])) ? (((/* implicit */long long int) arr_23 [i_5] [i_5])) : (var_13))))))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_21 = (!(((/* implicit */_Bool) (~(arr_25 [i_5] [i_5] [i_5])))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 4) 
            {
                for (unsigned short i_8 = 3; i_8 < 11; i_8 += 3) 
                {
                    {
                        var_22 *= ((((/* implicit */unsigned int) ((/* implicit */int) (((-(var_7))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5] [(unsigned char)8])) / (((/* implicit */int) (short)6201))))))))) + (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_24 [i_6] [i_7])) : (((/* implicit */int) arr_27 [i_6] [i_6] [i_6]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_6] [i_7]))))) : (((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6216))) : (arr_29 [i_5] [i_5] [i_5] [i_5]))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-61)) ? (30) : (((/* implicit */int) (short)-64))));
                        var_24 = ((/* implicit */unsigned char) (-(-5616000340493024038LL)));
                        var_25 = ((/* implicit */short) (-(402067652U)));
                        arr_32 [i_5] [i_6] [(short)0] [i_8] &= ((/* implicit */unsigned int) ((((10765913629782349328ULL) == (((/* implicit */unsigned long long int) min((2137092960U), (((/* implicit */unsigned int) (unsigned short)58739))))))) ? (max((((((/* implicit */_Bool) arr_31 [i_5] [i_6] [i_7])) ? (var_5) : (arr_25 [i_7] [(unsigned char)0] [i_7]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_31 [i_5] [i_6] [(unsigned short)0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -30)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) (short)-16899)))))));
                    }
                } 
            } 
        }
        arr_33 [i_5] [4] |= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)76))))) <= (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5] [i_5])))), (arr_30 [i_5] [i_5] [(short)5] [i_5] [i_5]))))));
    }
    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        arr_36 [i_9] [(unsigned short)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_13))) ? ((+(-8174118805033644606LL))) : (((/* implicit */long long int) 21))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_9] [i_9]))) : (((((/* implicit */unsigned long long int) 281474968322048LL)) * (arr_25 [i_9] [i_9] [i_9]))))))));
        var_26 |= ((/* implicit */unsigned long long int) ((int) ((min((-8174118805033644606LL), (((/* implicit */long long int) var_12)))) / (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)24654), (((/* implicit */unsigned short) (short)6191)))))))));
        arr_37 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [i_9])) ? (((/* implicit */int) arr_28 [i_9] [i_9] [i_9])) : (((/* implicit */int) (short)-6227))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9] [i_9] [10LL] [i_9]))) > (((((/* implicit */_Bool) arr_25 [i_9] [i_9] [i_9])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [(short)6] [i_9])))))))) : ((+(arr_31 [i_9] [i_9] [i_9])))));
        var_27 = (+(((/* implicit */int) (signed char)101)));
    }
    var_28 = ((/* implicit */unsigned char) (signed char)62);
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        for (short i_11 = 4; i_11 < 19; i_11 += 2) 
        {
            {
                var_29 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min(((short)6219), ((short)-13361)))))) ? (arr_41 [i_10]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (short)6201)) : (((/* implicit */int) (short)-32749)))))));
                /* LoopNest 3 */
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) arr_40 [i_10] [i_10] [i_14]);
                                var_31 = (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -9092457311169302544LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))) : (1018147555U)))) : (arr_44 [i_11] [i_11 - 4]))));
                                arr_49 [i_12] [4LL] [3LL] = (!(((/* implicit */_Bool) 15)));
                                arr_50 [i_12] [i_13] [i_14] = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_15 = 1; i_15 < 23; i_15 += 3) 
    {
        for (long long int i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            {
                arr_56 [i_15] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((2516755870U), (((/* implicit */unsigned int) arr_51 [23] [i_15])))), (((/* implicit */unsigned int) arr_54 [i_15] [i_15] [i_16]))))) ? (((/* implicit */int) arr_51 [i_15] [i_15])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3276819761U)) ? (((/* implicit */int) arr_53 [i_15] [i_16])) : (((/* implicit */int) arr_51 [i_15] [i_15]))))))))));
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) (~(arr_60 [i_15] [i_15 - 1] [i_15] [i_16])));
                        arr_64 [i_15] [i_15] [i_17] [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_59 [i_15] [5] [i_17] [i_18]))));
                        var_33 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)6187)) & (5))) >> (((((/* implicit */int) arr_54 [i_15 + 1] [i_18] [i_18])) - (102)))));
                    }
                    for (int i_19 = 2; i_19 < 22; i_19 += 1) 
                    {
                        arr_68 [i_15] [i_15] [i_15] [13LL] [(unsigned char)16] = ((/* implicit */unsigned short) (unsigned char)226);
                        arr_69 [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_4))))));
                        var_34 -= ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) var_0)) ? (arr_59 [i_19] [(unsigned char)5] [(_Bool)1] [i_19]) : (arr_67 [i_15] [i_16])))))));
                        arr_70 [i_15] [i_15] [i_17] [i_16] [(unsigned char)8] |= ((/* implicit */unsigned char) arr_62 [i_15] [i_15] [i_15] [i_15] [i_15]);
                        var_35 = ((/* implicit */unsigned long long int) ((-20) >= (((/* implicit */int) (short)6188))));
                    }
                    /* vectorizable */
                    for (unsigned char i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        var_36 *= ((/* implicit */unsigned int) ((unsigned char) arr_63 [i_15 + 1] [i_17]));
                        arr_73 [i_15] [i_15] [i_15] [i_15 + 1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_65 [i_15]))))));
                    }
                    arr_74 [i_15 - 1] [i_16] [i_16] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                    var_37 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_15 - 1] [i_15] [i_15])) - (((/* implicit */int) arr_57 [i_15 - 1] [i_15] [i_15]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((unsigned int) arr_72 [i_15] [i_16] [(unsigned char)17] [i_17])));
                }
                /* vectorizable */
                for (unsigned char i_21 = 0; i_21 < 24; i_21 += 1) 
                {
                    arr_77 [i_15] [i_16] [i_16] [i_15] = ((/* implicit */unsigned char) arr_71 [i_21] [i_21] [i_21] [i_21]);
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 0; i_22 < 24; i_22 += 4) 
                    {
                        for (unsigned int i_23 = 1; i_23 < 20; i_23 += 2) 
                        {
                            {
                                arr_84 [i_15] [i_16] [i_16] = ((/* implicit */unsigned short) ((int) arr_60 [i_15 + 1] [i_15 - 1] [i_15] [i_15 + 1]));
                                var_38 ^= ((/* implicit */unsigned char) (+(arr_80 [i_15] [i_15 + 1] [i_15 + 1])));
                                var_39 = ((/* implicit */short) arr_63 [i_16] [i_15]);
                            }
                        } 
                    } 
                    var_40 |= ((/* implicit */signed char) ((((/* implicit */int) arr_52 [i_15 - 1] [i_21])) % (((/* implicit */int) arr_52 [i_15 - 1] [i_15 - 1]))));
                    /* LoopNest 2 */
                    for (int i_24 = 2; i_24 < 23; i_24 += 3) 
                    {
                        for (unsigned short i_25 = 4; i_25 < 21; i_25 += 1) 
                        {
                            {
                                arr_89 [(short)21] [(short)21] [11] [i_15] [i_25] [i_25 + 2] = ((/* implicit */unsigned int) var_4);
                                var_41 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(var_3)))) + (((arr_76 [i_15] [i_16] [i_24] [i_25]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_15] [i_15] [i_21] [i_24 + 1] [i_25 + 1])))))));
                                var_42 |= ((/* implicit */unsigned char) (-(arr_58 [i_16] [i_24 + 1])));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))) ^ (6053013025159735543LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_15] [(_Bool)1] [i_15] [i_15 + 1] [(unsigned short)9]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_15] [(short)18] [i_15] [i_15] [(signed char)12]))) ^ (35184372088831ULL)))));
                }
            }
        } 
    } 
}
