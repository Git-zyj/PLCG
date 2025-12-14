/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142586
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((((/* implicit */int) (short)-32763)) > (((/* implicit */int) (unsigned short)56624)))))))));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (((-(12))) + (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))) > (((/* implicit */int) arr_5 [(unsigned short)9] [i_0])))))));
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_15 [i_2] = ((/* implicit */short) (-(764231096U)));
                        arr_16 [i_0] [i_0] [(unsigned char)6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1] [i_1 + 2]))))) ? (((((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 1])) | (((/* implicit */int) var_6)))) : ((-(((((/* implicit */int) (unsigned char)250)) >> (((/* implicit */int) (_Bool)1))))))));
                    }
                    arr_17 [i_0] [i_2] [i_2] = ((/* implicit */int) max((arr_10 [i_0]), (((unsigned char) ((arr_4 [i_1]) > (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                    arr_18 [i_2] [0ULL] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */int) var_7)) << (((((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) % (((/* implicit */int) (unsigned short)55856)))) - (52176)))))));
                }
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    arr_22 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)55850))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (12))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_19 [i_0] [i_1] [(_Bool)1] [i_5])) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)9688)) : (((/* implicit */int) arr_13 [i_1] [i_1] [(unsigned short)4] [i_5]))))) != ((~(var_2))))))) : ((~(arr_7 [(short)1] [i_1 + 1] [i_1] [i_1 - 1])))));
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        arr_25 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)55845)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 692960708U)))) : (min((((/* implicit */long long int) var_6)), (arr_9 [i_6] [i_1] [i_1] [(unsigned short)7])))))));
                        arr_26 [i_0] [i_0] [i_5] [i_6] [i_6] |= ((/* implicit */unsigned char) (signed char)55);
                    }
                    for (unsigned short i_7 = 4; i_7 < 8; i_7 += 1) 
                    {
                        arr_29 [i_1 - 1] [(unsigned short)3] = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_5])) || (((/* implicit */_Bool) var_0))))) > (((/* implicit */int) var_10))))) << (((((((/* implicit */int) (signed char)119)) << (((((/* implicit */int) (unsigned short)41291)) - (41285))))) - (7591))));
                        arr_30 [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_5] [i_7 - 3] [(unsigned char)0]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        arr_34 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59044)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55839))) : (764231096U)))) - (((long long int) 562949953421311ULL))));
                        arr_35 [i_8] [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) (unsigned char)44);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        arr_39 [i_0] = ((/* implicit */unsigned short) var_2);
                        arr_40 [i_0] [i_1] [i_1] [i_1] [i_0] [i_9] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (-2147483643)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_6)))))) : (min((((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_9] [i_1 + 2]))))), (max((var_8), (((/* implicit */long long int) arr_32 [i_0] [i_0] [i_5] [i_9])))))));
                        arr_41 [i_0] [i_5] [i_5] [i_9] [8LL] = ((/* implicit */short) 18446744073709551599ULL);
                    }
                    arr_42 [i_1] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))))) ? (max((((((/* implicit */int) (unsigned short)12855)) / (((/* implicit */int) arr_19 [i_0] [i_0] [i_5] [3LL])))), (((/* implicit */int) max(((unsigned short)2048), (((/* implicit */unsigned short) arr_10 [i_0]))))))) : ((~(((/* implicit */int) ((_Bool) arr_14 [i_0] [(short)9] [i_5]))))));
                }
                arr_43 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_1])) <= (((/* implicit */int) (unsigned short)2048)))) ? (((/* implicit */int) var_0)) : ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        {
                            arr_50 [i_0] [i_1] [i_10] [i_10] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))) == (16ULL)))) * (((/* implicit */int) (unsigned char)127))))), (((long long int) -6905856202271221593LL))));
                            arr_51 [i_10] [i_10] [i_10] [i_10] [i_1 + 1] [i_10] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_9))))))))) | (min((arr_4 [i_0]), (((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                            {
                                arr_56 [i_10] [i_11] [i_1 + 2] [i_10] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55850)) / (((/* implicit */int) (unsigned char)248))))), (((((/* implicit */_Bool) 3919688819578335007LL)) ? (3435050554513433277LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-30096)))))));
                                arr_57 [i_10] [i_1 - 1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) 764231096U)) : (arr_23 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]))));
                                arr_58 [(signed char)8] [(signed char)8] [(signed char)8] [i_11] [i_10] = ((/* implicit */unsigned short) (short)-27591);
                            }
                            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) 
                            {
                                arr_61 [i_0] [i_1 - 1] [i_1 - 1] [i_10] [i_13] = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (arr_23 [i_10] [i_10] [(unsigned short)1] [i_10] [i_10]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2245330609852921061LL)) ? (((/* implicit */int) (short)-30076)) : (((/* implicit */int) (unsigned short)65535)))))));
                                arr_62 [6LL] [6LL] [(short)2] [i_11] [i_10] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_59 [i_10] [8LL] [i_10] [i_1] [i_0]))) + (min((((/* implicit */long long int) var_10)), (var_3)))));
                                arr_63 [i_11] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_13] [(unsigned short)5])) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_46 [i_1] [i_1] [i_1])), ((unsigned short)3)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (arr_48 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) (((~(var_2))) < (((/* implicit */unsigned long long int) max((arr_4 [i_0]), (((/* implicit */long long int) (short)-27575))))))))));
                            }
                            arr_64 [i_10] = ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((var_3) <= (36028797018963968LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((36028797018963967LL), (((/* implicit */long long int) var_1))))))) : (var_3)));
}
