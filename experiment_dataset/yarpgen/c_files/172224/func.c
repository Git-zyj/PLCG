/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172224
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] = arr_1 [i_0];
                /* LoopSeq 2 */
                for (long long int i_2 = 4; i_2 < 8; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_0] = (-(max((((((/* implicit */_Bool) 6195300343735383024ULL)) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) arr_0 [i_2 + 2])))), ((-(((/* implicit */int) arr_3 [i_0] [i_0])))))));
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2]))));
                }
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 3) 
                {
                    var_12 -= ((/* implicit */unsigned short) arr_6 [i_0] [i_3] [i_3] [i_3]);
                    var_13 = ((/* implicit */unsigned short) arr_1 [i_0]);
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))) : (-9033349179316606878LL)));
                }
                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1]))));
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)58436);
                    arr_14 [i_4] = ((/* implicit */unsigned char) arr_1 [i_0]);
                    var_17 = ((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_0] [i_0]);
                    arr_15 [i_0] [i_1] = ((/* implicit */short) (~(arr_9 [i_4] [i_0] [i_4] [i_4])));
                }
                for (signed char i_5 = 4; i_5 < 7; i_5 += 4) 
                {
                    var_18 = ((/* implicit */short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                    arr_18 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)64513);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)-32756);
                                var_19 = ((/* implicit */short) arr_9 [i_0] [i_1] [i_5] [i_0]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) max((max((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_5] [i_1] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_5])) ? (((arr_12 [i_0]) ? (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_5] [i_0])) : (arr_1 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_5 - 3]))))))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 4; i_10 < 8; i_10 += 2) 
                        {
                            {
                                arr_31 [i_0] [i_1] [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) (short)32214)) : (((/* implicit */int) (unsigned char)64))));
                                var_21 = ((/* implicit */int) (unsigned short)1023);
                                var_22 = ((/* implicit */unsigned short) 492350311);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_11 = 1; i_11 < 10; i_11 += 2) 
                    {
                        arr_34 [i_0] [i_11] [i_0] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]);
                        arr_35 [i_1] [i_11] [i_8] [i_11] [i_0] = ((/* implicit */unsigned char) (short)32761);
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            arr_38 [i_0] [i_11] [i_8] [i_11] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 7756919867019854451ULL)))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) arr_22 [i_0])) : (((/* implicit */int) arr_27 [i_0] [i_1] [i_8]))));
                            arr_39 [i_11] = ((/* implicit */unsigned long long int) arr_28 [i_0] [i_8] [i_12]);
                        }
                        var_24 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        arr_40 [i_11] [i_11] [i_11] [i_8] [i_8] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)209)))) ? (((/* implicit */int) arr_24 [i_0] [i_1] [i_0])) : (-492350311)));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        arr_43 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) arr_21 [i_13] [i_13] [i_13]);
                        var_25 = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            arr_47 [i_1] = (~(2792946966U));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_0] [i_1] [i_8] [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_0] [i_1] [i_1] [i_14]))))) : (((((/* implicit */_Bool) 1523885350U)) ? (((/* implicit */int) arr_19 [i_1] [i_8] [i_13])) : (((/* implicit */int) (unsigned short)58443))))));
                        }
                        for (int i_15 = 1; i_15 < 10; i_15 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) arr_28 [i_13] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)64))))) ? (2693021544U) : (((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_13])) ? (1601945751U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_13] [i_8] [i_0])))))))));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_12 [i_1]);
                        }
                    }
                    for (signed char i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        arr_54 [i_0] [i_1] [i_1] [i_16] = ((/* implicit */unsigned short) arr_20 [i_8] [i_8] [i_16] [i_16 - 1] [i_8]);
                        var_28 *= ((/* implicit */unsigned char) arr_22 [i_1]);
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) arr_32 [i_0] [i_17] [i_8] [i_0] [i_8]);
                        arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_25 [i_17] [i_17] [i_17]);
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1523885350U)) ? (2771081945U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51311)))));
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 2; i_18 < 8; i_18 += 4) 
                    {
                        for (signed char i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) arr_9 [i_0] [i_1] [i_8] [i_18 + 3]);
                                var_32 = ((/* implicit */short) arr_16 [i_8] [i_8]);
                                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_18] [i_8] [i_8] [i_1])) ? (((/* implicit */int) (unsigned char)7)) : (((((/* implicit */_Bool) arr_62 [i_0] [i_8] [i_18] [i_0] [i_0])) ? (((/* implicit */int) arr_59 [i_0] [i_1] [i_0] [i_18])) : (((/* implicit */int) (unsigned char)249))))));
                                var_34 = ((/* implicit */int) (-(1523885350U)));
                                var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_0] [i_0] [i_8] [i_8] [i_19] [i_0])) ? (arr_21 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_19]))))) ? (((/* implicit */int) arr_56 [i_0] [i_1] [i_8] [i_18] [i_18] [i_19])) : (((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */int) (short)8962)) : (-492350311)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)51718)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (unsigned char)28)) ? (2792946966U) : (536869888U)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6607356265050497295ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))) : (536869870U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (var_8)))) ? (((/* implicit */int) (unsigned short)46163)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (var_9)))))))))));
}
