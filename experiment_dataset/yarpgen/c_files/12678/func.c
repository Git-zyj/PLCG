/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12678
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
    var_14 = ((/* implicit */unsigned long long int) var_7);
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((max(((!(((/* implicit */_Bool) var_9)))), ((!(((/* implicit */_Bool) var_12)))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_3)))) : (max((((/* implicit */long long int) var_9)), (var_4))))));
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0 - 3]) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) max((var_6), (((/* implicit */int) (_Bool)1))))) + (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (arr_0 [i_0 - 2] [i_0 + 3]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)27952)))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_18 *= ((/* implicit */short) arr_3 [i_0 - 3] [i_1] [i_0 - 3]);
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) (~(((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                var_19 -= ((/* implicit */short) min((((arr_3 [i_2 - 1] [i_1] [i_0]) << ((((-(arr_1 [i_0]))) + (1242598133))))), (((/* implicit */unsigned int) ((unsigned char) var_6)))));
                var_20 *= ((/* implicit */short) (~(((var_9) ^ (arr_3 [i_2 + 1] [i_2] [i_0 - 3])))));
                /* LoopNest 2 */
                for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-((+(arr_6 [i_2] [i_3 + 1] [i_4])))))) / (((((/* implicit */_Bool) arr_11 [i_0 + 1])) ? (((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 3] [i_0 + 2] [i_2 - 2] [i_2] [i_0 + 2] [i_2 - 1] [i_3 - 2])))))));
                            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || ((!(((/* implicit */_Bool) (unsigned short)11257)))))))) : ((((-(var_10))) + (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) (signed char)26))))))))));
                        }
                    } 
                } 
            }
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) max((arr_13 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [8U] [i_1] [i_0 + 2]), (arr_13 [i_0 - 1] [i_0] [(signed char)8] [i_0] [i_1] [i_1] [i_1])))) : ((-(((/* implicit */int) var_1))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 1) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223363240761753600ULL)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 15997177802035304916ULL)) ? (((/* implicit */int) (short)27980)) : (((/* implicit */int) (_Bool)1))))));
            arr_16 [i_5] = ((/* implicit */unsigned int) arr_6 [i_0 - 3] [i_0 - 2] [i_0]);
            arr_17 [i_5] = (~(var_7));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_0] [i_5] [i_5 - 2] [i_6 + 1] [i_5] [i_8] [i_8])) ? (arr_4 [i_7]) : (1978314722U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [12])))));
                            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)11277))));
                            arr_25 [i_0 + 1] [i_0 - 2] [i_5] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 1])) << (((((/* implicit */int) arr_24 [i_9] [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1])) - (195))))) & (((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_13)))))));
            /* LoopSeq 1 */
            for (short i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                arr_31 [i_0 + 3] [i_9] [i_9] [i_10 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 129401384U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27970))))), (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0] [i_9 - 1] [i_9] [i_10 + 1])) ? (arr_4 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_9] [i_0 - 2] [i_0])))))))) ? (max((((/* implicit */long long int) (-(var_3)))), (arr_19 [i_0 + 1] [i_0 + 1] [i_0 - 2]))) : (((/* implicit */long long int) (+(arr_28 [i_0 - 3]))))));
                var_28 *= ((/* implicit */unsigned long long int) (unsigned short)96);
            }
        }
    }
    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
    {
        arr_36 [i_11] = ((/* implicit */unsigned short) (((_Bool)1) ? ((+(min((((/* implicit */unsigned long long int) -7335082931960050359LL)), (2233785415175766016ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)85)) >= ((-(((/* implicit */int) (_Bool)1))))))))));
        arr_37 [i_11] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_11))))) ^ (((long long int) (~(var_4))))));
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_39 [i_13 - 1] [i_13 - 1] [i_13 - 1]) || (((/* implicit */_Bool) (-(arr_44 [i_11])))))))));
                        var_30 -= ((/* implicit */int) (~((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27975))) ^ (2233785415175766024ULL)))))));
                        arr_45 [i_12] [i_12] = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) arr_41 [i_13 - 1] [i_13 - 1] [i_13 - 1])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
    {
        arr_49 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((_Bool) var_13));
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    arr_54 [i_16] = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_16]))) & (var_10))), (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) arr_21 [i_15] [i_15] [i_15] [i_16])))))))));
                    /* LoopSeq 3 */
                    for (long long int i_18 = 4; i_18 < 8; i_18 += 1) 
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_18 - 1])) & (((/* implicit */int) arr_26 [i_18 - 1]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) -1136110909)))));
                        arr_58 [i_15] [i_16] [i_15] [i_15] = ((/* implicit */int) ((signed char) arr_18 [i_16] [i_17] [i_18]));
                        arr_59 [i_16] = ((/* implicit */int) (((+(((/* implicit */int) var_1)))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_56 [i_15] [i_16] [i_16] [i_16] [i_17] [i_18])) - (105))))) : (((var_11) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_42 [i_15] [i_17]))))))));
                        arr_60 [i_16] [i_17] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [20] [i_17] [i_15] [i_15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18U)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) / (max((((/* implicit */unsigned long long int) var_4)), (var_13)))))));
                        var_32 *= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        var_33 = ((/* implicit */_Bool) min((var_33), ((!(((/* implicit */_Bool) 7070367501718979851LL))))));
                        arr_63 [i_19] [i_16] [i_16] [i_15] = ((/* implicit */short) (signed char)-68);
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 4) 
                    {
                        arr_66 [i_15] [i_16] [i_16] [i_17] [i_20] = ((/* implicit */_Bool) min((max((arr_38 [i_15]), (((/* implicit */int) var_12)))), (((/* implicit */int) (signed char)-12))));
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) arr_44 [i_15]))));
                        arr_67 [i_16] [i_16] = ((/* implicit */short) (+(((/* implicit */int) (short)-9145))));
                        arr_68 [i_16] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_20]))) ^ (arr_57 [i_16] [i_16] [i_20] [i_20] [i_17] [i_20])))))), (((((var_4) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) << (((((unsigned int) (short)496)) - (486U)))))));
                    }
                    arr_69 [i_15] [i_16] [i_17] = ((/* implicit */int) var_5);
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned char) var_6);
    var_36 = ((/* implicit */unsigned long long int) max((var_36), ((~(var_13)))));
}
