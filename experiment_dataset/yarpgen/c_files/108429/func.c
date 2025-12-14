/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108429
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)245)) ? (((((/* implicit */_Bool) (unsigned char)23)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */_Bool) var_0)) ? (2598367303891472687ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (var_4)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)253)) && (((/* implicit */_Bool) (unsigned char)238)))))));
                            arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)59))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(signed char)4])) ? (((/* implicit */int) arr_2 [i_0] [(short)4])) : (((/* implicit */int) (short)15872))))) : (((((/* implicit */_Bool) -6810884035373722563LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) : (7239946986895837823LL)))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (arr_8 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [0])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), ((-(arr_0 [i_4])))));
                                var_16 = ((/* implicit */long long int) ((arr_7 [i_0] [i_1] [i_4] [i_5] [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-((~(-1)))));
                }
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (unsigned short)65408)) : (((/* implicit */int) (unsigned char)238))));
                    var_18 = ((/* implicit */signed char) var_2);
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_8 [i_7] [i_7])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_7])) : (((/* implicit */int) (short)24927)))) > (((/* implicit */int) max((arr_20 [i_0] [i_1] [i_7] [i_8]), (((/* implicit */signed char) arr_23 [i_0] [i_1] [i_7] [i_8] [i_8] [i_9] [i_7]))))))) ? (max((max((((/* implicit */unsigned int) arr_13 [(short)10] [i_8] [4U] [0] [i_0])), (arr_24 [i_0] [i_7] [i_9]))), (((/* implicit */unsigned int) (short)-8638)))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 384781948U)) ? (((/* implicit */int) (unsigned short)126)) : (((/* implicit */int) arr_3 [i_8] [i_1] [i_7])))), (((/* implicit */int) max((arr_14 [i_0]), (((/* implicit */unsigned short) (unsigned char)18))))))))));
                                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)28837))));
                                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)112))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_7] [i_8] [i_9])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_8] [i_8])) : (((/* implicit */int) arr_11 [i_1] [i_7] [i_8] [i_9])))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_7] [i_8] [i_9])) ? (((/* implicit */int) arr_11 [i_8] [i_8] [i_8] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))));
                                arr_25 [i_9] [i_1] [i_7] [i_8] [i_1] = ((/* implicit */unsigned char) (((+((-(((/* implicit */int) var_10)))))) >= ((~(((/* implicit */int) (unsigned char)56))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_9))));
                                arr_34 [6U] [i_1] [i_10] [i_11] [i_12] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])) - (var_3)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)141))))) ? ((+(((/* implicit */int) (short)19561)))) : (((/* implicit */int) (unsigned char)116)))) : (((/* implicit */int) arr_23 [8] [(_Bool)1] [i_1] [i_10] [i_11] [i_12] [5LL]))));
                                arr_35 [(unsigned short)9] [i_10] [i_12] = ((/* implicit */short) ((max((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_10] [i_11] [i_12])), ((unsigned char)255)))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1]))) : (6810884035373722563LL))))) | (((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)145))))), (min((var_5), (((/* implicit */unsigned int) var_8)))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-24))));
                    arr_36 [i_0] [(short)2] [9ULL] [i_10] |= ((/* implicit */int) ((((((/* implicit */_Bool) min(((unsigned short)5), (((/* implicit */unsigned short) (unsigned char)71))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : ((-(var_6))))) - (((/* implicit */unsigned int) var_2))));
                    var_24 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) 376730054)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_10])) : (((/* implicit */int) arr_28 [i_0] [i_0] [0] [i_0])))), (((((/* implicit */_Bool) arr_8 [i_10] [i_1])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)18867)))))), (((((/* implicit */_Bool) arr_13 [i_0] [(_Bool)1] [i_1] [7U] [(_Bool)1])) ? ((-(((/* implicit */int) (unsigned short)24492)))) : (((/* implicit */int) max((arr_30 [i_10] [i_1] [i_10]), (arr_21 [i_1]))))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        {
                            var_25 ^= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                            var_26 ^= ((/* implicit */signed char) var_5);
                            arr_42 [i_1] [6LL] [i_14] = min(((+(max((arr_24 [i_0] [7LL] [i_0]), (((/* implicit */unsigned int) arr_30 [i_1] [i_1] [i_14])))))), (((/* implicit */unsigned int) max((arr_28 [i_0] [i_0] [i_0] [i_0]), (arr_28 [i_0] [i_1] [i_0] [i_1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (unsigned short i_16 = 0; i_16 < 25; i_16 += 2) 
        {
            {
                arr_48 [i_15] [13U] = ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_10)), (3950083919U))) / (((/* implicit */unsigned int) (~(((/* implicit */int) arr_47 [i_16])))))))) ? (((/* implicit */int) (short)-30847)) : ((~(((/* implicit */int) arr_43 [i_15])))));
                var_27 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_15] [i_15] [(_Bool)1])) ? (var_5) : (((/* implicit */unsigned int) var_3))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_46 [4LL] [i_16] [i_15])))) : (((/* implicit */int) max((arr_47 [i_15]), (arr_47 [i_15]))))))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_47 [(short)8]))))), (max((var_6), (((/* implicit */unsigned int) arr_47 [16U])))))));
                var_28 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [(short)22])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (short)2860)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)31955)) >= (((/* implicit */int) arr_46 [(unsigned short)21] [i_16] [i_15]))))))), (max((((/* implicit */int) arr_46 [i_15] [i_16] [i_15])), ((-(((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                for (int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    var_29 |= ((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_46 [i_15] [i_16] [i_16])), (arr_45 [i_17]))), (((/* implicit */unsigned int) arr_44 [i_15]))))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_50 [i_15] [i_15] [i_15] [i_15])), ((~(((/* implicit */int) arr_46 [i_15] [13LL] [i_17])))))))));
                    arr_52 [i_16] [i_16] [i_16] [(signed char)18] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-87))))), (min((var_5), (arr_45 [i_16])))))) ? ((-(max((arr_45 [i_15]), (((/* implicit */unsigned int) arr_49 [i_17] [i_16] [i_15])))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_15] [i_15] [(short)3] [i_15])))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_18 = 0; i_18 < 25; i_18 += 1) 
    {
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (long long int i_20 = 0; i_20 < 25; i_20 += 3) 
            {
                {
                    arr_61 [i_19] [(_Bool)1] [i_19] = ((/* implicit */short) var_1);
                    var_30 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_47 [i_19])) : (((/* implicit */int) arr_46 [i_18] [(unsigned short)23] [i_18]))))) ? (((((/* implicit */_Bool) (unsigned short)65531)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_18] [(unsigned short)10] [i_18] [i_18])) ? (((/* implicit */int) (short)-25242)) : (((/* implicit */int) arr_55 [3U])))))))));
                }
            } 
        } 
    } 
}
