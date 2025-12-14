/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188842
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) (~(1780341266)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4)))) : ((~(arr_2 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max(((-(var_8))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)32768)))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((6120771131696175438ULL) + (((/* implicit */unsigned long long int) 4294967295U)))))) : (((((/* implicit */_Bool) 3169687325U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (18446744073709551609ULL)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) arr_6 [i_1] [i_1]);
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))) | (42959449626796346LL)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) var_3))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) ((signed char) (signed char)50))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)27975)))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) (~(((unsigned int) 588673339U))));
                            var_19 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) var_0))))) <= (3677352151U));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_10 [i_1] [i_1]))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))))))));
            }
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 3; i_7 < 16; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            arr_27 [i_1] [(unsigned short)3] [i_7] [i_1] [i_8] [i_1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6])) ? (2617885140U) : (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */int) ((10ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) : (((int) var_2))));
                            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)246)))))));
                        }
                    } 
                } 
                var_23 *= ((/* implicit */_Bool) (-(1468110337)));
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 14; i_9 += 4) 
                {
                    for (int i_10 = 2; i_10 < 13; i_10 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_9] [i_9] [i_9 + 2] [14] [i_9 + 2] [i_10])) % (((/* implicit */int) (signed char)13)))))));
                            arr_32 [i_1] [i_2] [i_6] [i_1] [i_9] [i_10] [9U] = ((/* implicit */int) ((unsigned char) 5804818518341218764ULL));
                            arr_33 [i_1] [i_2] [i_6] [i_2] [i_10 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_10 + 3] [i_10 - 1] [(_Bool)1] [i_10 - 2] [(unsigned short)8] [i_6])) && (((/* implicit */_Bool) arr_18 [i_9 + 2] [i_10 + 3] [2ULL]))));
                        }
                    } 
                } 
            }
            for (signed char i_11 = 1; i_11 < 16; i_11 += 2) 
            {
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_11 - 1]))))))));
                var_26 = ((/* implicit */unsigned int) max((var_26), (((((/* implicit */_Bool) 11406042308546200909ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2112083939U)))));
                var_27 = ((/* implicit */unsigned char) ((arr_28 [i_11 - 1] [i_11] [i_11] [i_11]) >> (((/* implicit */int) (_Bool)1))));
            }
            arr_37 [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) var_15)) != (((/* implicit */int) (short)-7)))) ? (((long long int) arr_18 [(signed char)7] [i_2] [i_1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3982942094U)) ? (arr_2 [i_2]) : (((/* implicit */int) arr_19 [i_1])))))));
            /* LoopNest 3 */
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                for (unsigned char i_13 = 2; i_13 < 14; i_13 += 4) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_47 [i_14] [i_13] [10U] [i_2] [i_1] = (!(((/* implicit */_Bool) var_8)));
                            arr_48 [i_1] [i_1] [i_2] [i_12] [4U] [i_13] [(unsigned char)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_1] [12] [i_13 - 1] [i_13] [i_13 + 3])) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned short)7051))));
                        }
                    } 
                } 
            } 
            arr_49 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
        }
        arr_50 [i_1] = ((/* implicit */unsigned int) arr_7 [i_1]);
    }
    /* LoopNest 2 */
    for (signed char i_15 = 3; i_15 < 18; i_15 += 4) 
    {
        for (int i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            {
                arr_56 [i_15] [i_16] [i_16] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (short)26840)))));
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 19; i_17 += 4) 
                {
                    var_28 = ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((((/* implicit */_Bool) (unsigned short)7936)) ? (((/* implicit */unsigned long long int) -866373315)) : (14122137071075773944ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6268783975624823194LL)) || (((/* implicit */_Bool) arr_52 [i_15 - 2] [i_15 - 1])))))));
                    arr_59 [i_16] = ((/* implicit */_Bool) arr_52 [i_15] [i_15]);
                    arr_60 [13U] [16U] [4ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_55 [i_17])) << (((((((/* implicit */int) (unsigned char)173)) & (((/* implicit */int) (signed char)-29)))) - (147)))));
                    arr_61 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) (-((-((-(((/* implicit */int) arr_54 [i_15] [i_16] [i_15]))))))));
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 19; i_18 += 3) 
                    {
                        for (long long int i_19 = 0; i_19 < 19; i_19 += 4) 
                        {
                            {
                                var_29 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_53 [6U] [i_16]), (arr_53 [i_15 - 3] [i_16])))), (((((/* implicit */_Bool) (unsigned short)11)) ? (4740092491511940401ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_15 - 2])))))));
                                arr_69 [i_15] [i_18] [i_17] [i_18] [i_19] = ((/* implicit */long long int) ((arr_62 [7ULL]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (max((((/* implicit */unsigned long long int) -138930887)), (4ULL))))) : (((/* implicit */unsigned long long int) (~(1649030723))))));
                                arr_70 [i_15 + 1] [i_16] [i_16] [3] [i_18] [i_18] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_5)), (13344609952194609191ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(arr_51 [i_17])))) > (((((/* implicit */_Bool) 122416702U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46133))) : (8100725194999488735ULL))))))));
                                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(-2147483644)))) || (var_15))))) == (((unsigned int) min((((/* implicit */unsigned short) var_12)), (arr_54 [i_15 - 3] [i_18] [i_19])))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_20 = 0; i_20 < 19; i_20 += 4) 
                {
                    arr_74 [i_20] [i_15] [i_15] = ((/* implicit */long long int) max((((((unsigned long long int) (_Bool)1)) | ((-(var_13))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)100)))))));
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15)))))));
                    var_32 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((short) (unsigned char)198))) ? (((((/* implicit */_Bool) (unsigned short)23882)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3896049673230966856ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 2080184374278722709ULL))))))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3488691795U)))) - (max((var_13), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)23))))) ? (((((/* implicit */_Bool) 834352410U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_12)))))));
    var_34 = ((/* implicit */long long int) ((_Bool) 18446744073709551615ULL));
}
