/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146810
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (-(-6982128657155018961LL))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) arr_2 [i_0]))))))) : (max((var_1), (((/* implicit */unsigned int) min(((short)4095), (arr_2 [i_0]))))))));
            var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-2293954722511080347LL) : (((/* implicit */long long int) max((arr_0 [i_1]), (((/* implicit */unsigned int) var_14)))))))) ? (((/* implicit */unsigned long long int) arr_3 [i_0 - 1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) % (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) -2015889477))))))));
            arr_4 [11ULL] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0]);
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_7 [1U] [i_0 - 1] [i_0 + 1] = ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2])) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_6 [8] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3072)))))));
            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 + 1]))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_19 ^= ((/* implicit */unsigned char) ((131071) ^ (((((/* implicit */int) (unsigned char)211)) + (((/* implicit */int) arr_2 [i_3]))))));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    {
                        arr_15 [i_5] [i_0] = ((/* implicit */unsigned char) var_5);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_20 ^= ((/* implicit */unsigned long long int) (~(var_1)));
                            arr_19 [i_0] [i_3] [i_0] [(short)12] [i_5] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15813)) || (((((/* implicit */int) (signed char)127)) == (((/* implicit */int) var_8))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_0 + 1] [i_3] [i_4] [(unsigned short)7] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_0 - 1] [i_0 + 1] [i_5] [i_5])) << (((((/* implicit */int) (short)28181)) - (28174)))));
                            arr_24 [i_0] [(signed char)4] [(signed char)4] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                        }
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((unsigned int) arr_5 [i_3] [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_22 [i_0] [(unsigned short)9] [1] [(unsigned short)13] [i_0]))))));
                        arr_25 [i_0] [i_5] [i_3] [i_3] = ((/* implicit */short) (unsigned char)255);
                        var_22 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0 - 1]))));
                    }
                } 
            } 
        }
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            arr_28 [1ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-12809)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)46)))) : (arr_17 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0])));
            arr_29 [i_0] [i_8] = ((/* implicit */unsigned long long int) max((((long long int) ((int) var_6))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)32768)))))));
            arr_30 [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_8])) - (((/* implicit */int) arr_22 [i_8] [(_Bool)1] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0 - 1] [i_0] [i_8])))) : (((/* implicit */int) ((short) var_5)))))), (((unsigned int) arr_0 [i_0 + 1]))));
        }
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_23 ^= ((/* implicit */signed char) ((((((((/* implicit */int) arr_16 [2U] [i_9])) << (((((/* implicit */int) (short)8191)) - (8180))))) > (((/* implicit */int) arr_14 [i_0] [i_9] [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)114)) << (((15236127251797247189ULL) - (15236127251797247184ULL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28199)) ? (arr_3 [i_0]) : (((/* implicit */int) arr_16 [4U] [i_0 - 1]))))) : ((-(4294967295U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3210616821912304427ULL)) ? (((/* implicit */int) (unsigned char)243)) : (((((/* implicit */_Bool) 3565687220U)) ? (((/* implicit */int) (unsigned short)4706)) : (((/* implicit */int) (unsigned char)236)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    {
                        arr_40 [i_9] [8ULL] [8ULL] [i_9] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((int) ((((/* implicit */int) (signed char)-34)) & (((/* implicit */int) (short)-28182))))) : (((/* implicit */int) arr_16 [i_0] [i_9]))));
                        var_24 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9] [i_9]))) <= (arr_20 [i_11] [i_9] [(signed char)9] [i_11] [i_9] [i_9]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_9] [i_9])) || (((/* implicit */_Bool) (signed char)-111))))) : ((+(((/* implicit */int) var_9)))))) * (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((arr_20 [i_0] [i_0] [i_9] [i_10] [i_10] [i_11]) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : ((+(((/* implicit */int) (signed char)117))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_43 [i_0] [i_0 + 1] [i_9] [i_0] [(signed char)8] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)0))))));
                            var_25 ^= ((/* implicit */unsigned long long int) arr_9 [(unsigned char)16]);
                            var_26 = ((/* implicit */int) 4294967295U);
                        }
                    }
                } 
            } 
            var_27 = ((/* implicit */short) 737341299U);
            var_28 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_27 [i_0] [i_9])) ? (var_3) : (15236127251797247189ULL))), (((/* implicit */unsigned long long int) (+(arr_0 [i_9]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_33 [i_9] [i_0 - 1]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63366))) : (arr_8 [i_0] [i_0])))))))) : (min((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)17033))))))));
        }
        var_29 += ((/* implicit */signed char) max((((((/* implicit */int) (short)20328)) / (((/* implicit */int) var_9)))), ((~(((/* implicit */int) var_6))))));
    }
    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 4) 
    {
        arr_46 [i_13] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (signed char)-105)), (arr_5 [i_13] [i_13]))) ^ (((unsigned int) arr_5 [i_13] [i_13]))));
        arr_47 [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (short)16386)) : (((/* implicit */int) (unsigned short)22539)))))));
    }
    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
    {
        arr_50 [i_14] |= ((/* implicit */int) (signed char)49);
        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)22539), (((/* implicit */unsigned short) (unsigned char)250))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 42581304U)) ? (((((/* implicit */int) (unsigned short)52733)) >> (((arr_45 [i_14]) - (37185797))))) : (752531597)))) : (max(((~(var_1))), (((/* implicit */unsigned int) arr_9 [i_14]))))));
    }
    for (unsigned short i_15 = 1; i_15 < 21; i_15 += 1) 
    {
        arr_55 [i_15] [i_15 + 2] = ((/* implicit */int) var_1);
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16386)) ? (((/* implicit */int) arr_51 [i_15])) : (((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) (unsigned short)34987)) : (((/* implicit */int) (signed char)-109))))));
    }
    var_32 = ((((/* implicit */_Bool) -3244285615677441410LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
    var_33 = ((/* implicit */long long int) (-((-(var_3)))));
}
