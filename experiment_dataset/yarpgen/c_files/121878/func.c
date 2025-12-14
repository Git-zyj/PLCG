/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121878
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)0)), (var_10)));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (short)15571)))))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (short)-19837))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            for (int i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned long long int) min((min((254699139U), (((/* implicit */unsigned int) arr_12 [i_6] [i_4] [i_3 + 1] [i_0])))), (((/* implicit */unsigned int) ((unsigned char) (unsigned short)65535)))));
                                var_18 ^= min((arr_13 [(unsigned char)5] [i_5] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (short)-18016))))));
                                arr_19 [i_0] [(unsigned char)14] [i_0] [i_5] [(unsigned char)14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4040268157U))));
                                arr_20 [i_5] = ((/* implicit */_Bool) ((signed char) var_10));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_3 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_3 + 2] [i_4 + 1] [i_4 + 1])))) != (((((/* implicit */int) arr_18 [i_0] [i_0] [i_3 - 3] [i_4 - 2] [i_4 - 2] [i_4 - 2])) & (((/* implicit */int) arr_18 [13ULL] [13ULL] [i_3 - 1] [i_4 + 1] [i_4] [i_4 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_20 = ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 851242878))))) >= (((/* implicit */int) arr_14 [12ULL] [17] [i_3] [i_0]))))) << (((((/* implicit */int) arr_7 [i_3 - 3] [i_4 - 1] [14U])) + (29975))));
                                var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [7] [i_3 - 3] [i_3 - 1])) ? ((~(max((((/* implicit */unsigned long long int) (short)-2585)), (arr_10 [i_8] [(signed char)11] [8ULL]))))) : ((~(15ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_27 [i_9] = ((/* implicit */unsigned short) ((_Bool) var_5));
        var_22 += ((/* implicit */unsigned short) arr_25 [i_9]);
    }
    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        var_23 ^= ((/* implicit */unsigned char) (~(max((arr_28 [i_10]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_12 [i_10] [i_10] [i_10] [i_10])))))))));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)109))));
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 8; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) var_8)), (arr_12 [i_10] [i_10] [i_10] [i_10])))), (max((((/* implicit */int) (unsigned short)18)), (arr_3 [i_10])))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)148)) > (((/* implicit */int) (signed char)-84))))) : (max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_10] [i_11])) : (((/* implicit */int) arr_12 [i_14] [(unsigned short)1] [(unsigned short)1] [(unsigned short)1])))))))))));
                                var_26 = ((/* implicit */int) var_6);
                                var_27 += ((/* implicit */int) var_2);
                                arr_40 [i_10] [i_10] [i_10] [i_10] [i_10] [1] [i_10] = (+(max((((/* implicit */int) var_11)), (var_10))));
                                arr_41 [i_10] [i_10] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_10])) ? (((var_6) ^ (((/* implicit */unsigned long long int) 1587130224)))) : (((unsigned long long int) (unsigned char)239)))), (arr_10 [i_14] [i_12] [i_12])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_12] [i_16])) ? (((((((/* implicit */int) max(((signed char)-83), (var_5)))) + (2147483647))) >> ((((~(((/* implicit */int) var_5)))) - (88))))) : ((~(((((/* implicit */_Bool) (short)-27180)) ? (((/* implicit */int) arr_15 [i_10] [i_10] [i_10] [i_15] [i_16])) : (((/* implicit */int) arr_35 [i_10])))))))))));
                                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max((var_12), (((/* implicit */short) var_1))))) << (((((/* implicit */int) var_4)) + (32)))))))))));
                                arr_48 [i_11] [i_11] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_46 [i_10] [i_11] [i_12] [i_16]), (arr_46 [i_11] [i_12] [i_15] [i_16]))))));
                                var_30 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_4)) ? (((int) -278787314)) : (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_37 [i_15] [i_12] [i_12] [i_15] [i_12]))))))) + (2147483647))) >> (((((((/* implicit */_Bool) (signed char)87)) ? ((+(((/* implicit */int) var_8)))) : (((((((/* implicit */int) arr_46 [i_10] [i_10] [2] [i_10])) + (2147483647))) << (((((/* implicit */int) (unsigned char)150)) - (150))))))) - (83)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_53 [i_17] [i_12] [1] [1] = ((/* implicit */_Bool) arr_6 [i_17] [i_17] [i_17]);
                        arr_54 [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : (arr_33 [i_10] [i_10] [i_10] [i_10])))) != (var_9)));
                        arr_55 [i_10] [0] [i_10] = ((/* implicit */int) min((arr_37 [i_10] [i_10] [i_10] [i_12] [i_17]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_43 [(unsigned short)6] [(short)3] [i_11] [i_12] [(short)3])))))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 14; i_18 += 3) 
    {
        var_31 ^= (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (var_3)))));
        /* LoopNest 2 */
        for (unsigned int i_19 = 0; i_19 < 14; i_19 += 3) 
        {
            for (long long int i_20 = 2; i_20 < 12; i_20 += 1) 
            {
                {
                    arr_64 [i_18] [i_20 + 2] [(short)9] = ((/* implicit */long long int) ((short) var_1));
                    arr_65 [i_18] = ((((/* implicit */int) arr_15 [i_18] [i_20 - 1] [i_20 - 1] [i_18] [i_18])) | (((/* implicit */int) arr_15 [i_19] [i_20 + 1] [i_19] [i_19] [i_18])));
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 3; i_21 < 12; i_21 += 4) 
                    {
                        var_32 = ((((/* implicit */_Bool) arr_67 [i_21 - 2] [i_20 + 2] [i_20 - 2] [i_20 - 2])) ? (-1453730489) : (((/* implicit */int) arr_67 [i_21 - 1] [i_20 - 1] [i_20 + 1] [i_20 + 2])));
                        arr_68 [i_18] [i_19] [i_20] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_66 [i_20 + 2] [i_20 + 1] [i_20 - 2] [i_20 + 2] [i_20 + 2])) * (((/* implicit */int) arr_61 [i_19]))));
                    }
                }
            } 
        } 
        arr_69 [i_18] [i_18] = (~(((((((/* implicit */int) arr_4 [i_18] [i_18])) + (2147483647))) << (((((/* implicit */int) arr_62 [i_18] [i_18] [(_Bool)1])) - (1))))));
    }
    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (-(((/* implicit */int) (signed char)113)))))));
    var_34 = ((/* implicit */unsigned long long int) var_2);
    var_35 = ((/* implicit */unsigned long long int) var_9);
}
