/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110895
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
    var_10 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((var_9) + (5702449711545164637LL)))))) ? (max((var_0), (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) (unsigned short)9799))))))) < (var_1)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_0 [i_0] [i_0])))) == (((/* implicit */int) min(((unsigned short)18), (((/* implicit */unsigned short) var_3)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned short) var_4));
            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (12693417180528487486ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
        }
        for (int i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            arr_12 [i_0] [i_0 - 2] [i_2] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3)) / (arr_5 [i_0] [(short)4] [i_0])))) ? (max((((/* implicit */long long int) arr_0 [i_2] [i_0])), (-8175169077806166710LL))) : (((/* implicit */long long int) 897925799U)))));
            arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_4)) | (min((10880398705952970560ULL), (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [(unsigned char)6] [(unsigned char)6] [i_2 + 2])))))));
        }
    }
    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 4) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((/* implicit */short) max(((+(((/* implicit */int) arr_7 [i_3] [8ULL] [i_3])))), (((/* implicit */int) (unsigned short)65371))));
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            arr_19 [8ULL] [i_3] = ((/* implicit */unsigned int) 2147483647);
            arr_20 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_3]) < (arr_14 [i_3]))))) < (((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_14 [i_3]) : (arr_14 [i_3])))));
            /* LoopNest 2 */
            for (long long int i_5 = 2; i_5 < 16; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    {
                        arr_27 [i_3] [i_4] [i_5 - 2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_24 [i_3] [i_5 - 2] [i_3 - 3] [i_3])))));
                        arr_28 [i_3] [i_4] [i_4] [i_4] [0U] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 660478256)) ^ (((arr_14 [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_9 [i_3] [(short)0])))))))));
                    }
                } 
            } 
        }
        for (signed char i_7 = 3; i_7 < 13; i_7 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) arr_18 [i_3] [i_7 + 4]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_8 = 2; i_8 < 16; i_8 += 3) 
            {
                var_13 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)255)) ? (var_0) : (((/* implicit */int) var_2))))));
                /* LoopNest 2 */
                for (long long int i_9 = 2; i_9 < 15; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            var_14 -= ((/* implicit */signed char) (short)-31821);
                            arr_40 [i_3] [i_7] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_6 [i_3] [i_7] [i_7])))) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [i_3] [i_3 + 2] [i_3])));
                            arr_41 [i_3] [i_7] [i_8] [15U] [i_10] = ((/* implicit */unsigned long long int) arr_32 [i_3] [i_7 + 3] [i_8 + 1] [i_9 + 1]);
                        }
                    } 
                } 
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_45 [i_3] = ((/* implicit */unsigned int) arr_9 [i_7 - 3] [i_3 - 3]);
                var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1] [i_3 - 2]))))) ? (((arr_35 [i_3] [i_7]) ? (arr_33 [i_11] [(unsigned short)11] [(unsigned short)11]) : (((/* implicit */unsigned int) (+(var_0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255)))));
            }
            /* LoopNest 3 */
            for (unsigned char i_12 = 1; i_12 < 14; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 1; i_13 < 16; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        {
                            arr_52 [i_3] [i_7] [i_3] [5LL] [i_14] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 4354047630320339703LL)) ? (((/* implicit */unsigned long long int) 660478256)) : (14992722821734022122ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                            arr_53 [(unsigned short)12] [i_3] [i_12] [i_3] [(unsigned short)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3])) ? (arr_47 [i_7] [i_3]) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)18)) || (((/* implicit */_Bool) arr_17 [i_3])))))))) ? (((/* implicit */int) arr_36 [i_3] [i_3] [i_7] [i_3] [i_13] [i_14])) : (arr_5 [i_3] [14ULL] [i_3])));
                            var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_3] [i_3])) ^ (arr_47 [i_12] [(_Bool)0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3454021251975529494ULL)) ? (arr_29 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8)))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_3] [i_3])))))))));
                        }
                    } 
                } 
            } 
            arr_54 [(unsigned short)2] [(unsigned short)2] [i_3] = ((/* implicit */unsigned int) var_5);
        }
        for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) (~(min((var_9), (((/* implicit */long long int) arr_55 [i_3 + 2]))))));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_51 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])), (arr_46 [i_3] [i_3] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (1023U)))) : (min((((/* implicit */unsigned long long int) var_6)), (arr_46 [i_3] [i_3] [i_3] [i_3])))))) ? (((/* implicit */unsigned long long int) arr_6 [i_3] [i_15] [i_15])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 660478256)) ? (var_1) : (((/* implicit */unsigned long long int) 2613057464U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)240)) << (((((/* implicit */int) (unsigned char)113)) - (98)))))) : ((~(var_1)))))));
            arr_58 [i_15] [i_3] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_3] [i_3 + 1] [i_3 + 3])), (arr_21 [i_3] [i_3 - 2] [i_3 + 2] [i_3])))) ? (((((((/* implicit */_Bool) arr_6 [i_3] [3U] [i_15])) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (arr_5 [i_3] [i_3] [i_3]))) | (((/* implicit */int) (unsigned char)105)))) : ((-(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_6)))))))));
            arr_59 [i_3] [i_3] [i_3 - 3] = ((/* implicit */unsigned int) (unsigned char)15);
        }
        arr_60 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_56 [14ULL] [14ULL] [(unsigned short)14])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_31 [i_3 + 2] [i_3] [i_3])))))) | (((long long int) arr_14 [i_3]))));
        /* LoopNest 2 */
        for (unsigned short i_16 = 2; i_16 < 13; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_56 [i_17] [i_16] [i_3]);
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_11 [i_16]))));
                    arr_67 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_66 [i_3] [i_16] [i_16])) : (((/* implicit */int) arr_39 [i_3] [i_3] [i_3] [i_3 + 3] [i_3] [i_3] [i_3]))))))));
                    arr_68 [i_3] [i_3 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_3] [i_3 + 1]), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0)))))))) ? (((((arr_56 [i_16] [i_16] [i_3]) < (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_3 - 3] [i_3 - 3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_3] [i_16] [14U] [i_3]))))) : (((/* implicit */int) arr_18 [i_3] [i_16 + 4])))) : ((+(arr_5 [i_3 - 2] [i_17] [i_3])))));
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned short) (_Bool)1);
    }
    var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_6)))) : (var_0)))));
}
