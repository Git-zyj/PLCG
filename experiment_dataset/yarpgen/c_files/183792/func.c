/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183792
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
    var_20 *= ((/* implicit */_Bool) (short)-8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(arr_2 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */int) var_14);
                    arr_8 [21U] [21U] [i_0] [21U] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_22 = ((4294967283U) >> (((((/* implicit */int) (unsigned char)42)) - (17))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4 - 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((((/* implicit */_Bool) 35143522U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)0] [i_2]))) : (4294967294U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2 + 1] [i_2] [i_4] [(short)5] [(short)5])))));
                                var_23 = ((/* implicit */unsigned short) ((2563217306791461451ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_3] [i_0] [i_3 + 1])))));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_2 [i_1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_3 - 1] [i_4])) || (((/* implicit */_Bool) arr_1 [i_0]))))) : (-719939207))))));
                                arr_15 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_4 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [18ULL] [i_2] [i_3 + 1] [i_4 + 2])) ? (arr_6 [(unsigned char)4] [i_1 - 1] [4] [7ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [9] [9] [i_2 - 1] [9] [i_4 + 2] [i_1 + 1])))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 16448926599335327787ULL))));
                }
            } 
        } 
    }
    for (unsigned short i_5 = 3; i_5 < 17; i_5 += 4) 
    {
        arr_20 [i_5] [i_5 - 1] = ((((((/* implicit */_Bool) arr_4 [i_5 + 1])) ? (((/* implicit */unsigned int) 141078296)) : (arr_4 [i_5 + 2]))) >> (((((((/* implicit */_Bool) arr_4 [i_5 + 1])) ? (arr_4 [i_5 - 2]) : (arr_4 [i_5 + 2]))) - (934969318U))));
        var_25 = ((/* implicit */unsigned long long int) (+(((long long int) arr_18 [i_5 - 2]))));
    }
    for (unsigned long long int i_6 = 4; i_6 < 23; i_6 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            arr_27 [i_7] [i_7] = ((/* implicit */unsigned char) min((((max((((/* implicit */unsigned int) (unsigned short)0)), (1151088362U))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)127))))))), (((/* implicit */unsigned int) max((max((var_15), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))))));
            var_26 += ((/* implicit */short) ((unsigned char) arr_21 [i_6]));
            arr_28 [i_6] [i_6] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_7)))) ? ((~(((/* implicit */int) arr_22 [i_6 - 4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_6])))))))) / (((((/* implicit */_Bool) max((arr_23 [i_6 - 4] [i_7]), (((/* implicit */unsigned long long int) 2930916114U))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) : (988680397917340630ULL)))));
            var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_23 [i_6] [i_6 - 4]) >= (arr_23 [i_6 + 2] [i_6 - 1]))))) / (max((((/* implicit */unsigned int) (short)-11835)), (2288534055U)))));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_32 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_6 - 4])) || (((/* implicit */_Bool) (signed char)(-127 - 1)))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 3; i_9 < 23; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        arr_40 [i_8] = ((/* implicit */unsigned short) ((((int) 2099330420315673810ULL)) >= (((((/* implicit */_Bool) (short)-21798)) ? (((/* implicit */int) (unsigned short)19677)) : (((/* implicit */int) var_18))))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_19))));
                        var_29 = ((/* implicit */unsigned char) ((arr_21 [i_6 - 2]) - (arr_31 [i_8] [i_8])));
                    }
                } 
            } 
            arr_41 [i_6] [16ULL] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_6] [18])) ? (12122966268922232494ULL) : (((/* implicit */unsigned long long int) 1696554769))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6 + 1] [i_8]))) : (((((/* implicit */_Bool) arr_24 [i_6] [i_8])) ? (arr_23 [i_6] [i_8]) : (var_9)))));
            arr_42 [i_8] = ((/* implicit */signed char) (+(10354950259043775951ULL)));
        }
        for (signed char i_11 = 3; i_11 < 24; i_11 += 3) 
        {
            var_30 = ((/* implicit */short) max(((~(2823997651U))), (max((((/* implicit */unsigned int) arr_43 [i_11] [i_11])), (var_10)))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 4; i_12 < 23; i_12 += 2) 
            {
                for (unsigned int i_13 = 1; i_13 < 22; i_13 += 4) 
                {
                    {
                        arr_52 [i_11] [i_11 - 3] [i_12] [13LL] = ((/* implicit */short) max((max((((/* implicit */long long int) arr_35 [i_11] [i_11 - 1] [i_13 + 3])), (var_6))), (((/* implicit */long long int) (+(max((-666155452), (((/* implicit */int) (short)-29101)))))))));
                        var_31 += ((/* implicit */unsigned char) ((max((2208773543651686426ULL), (((/* implicit */unsigned long long int) arr_37 [i_12])))) * (((max((((/* implicit */unsigned long long int) arr_31 [i_6] [i_6])), (274873712640ULL))) >> (((((/* implicit */int) arr_38 [i_12] [i_12] [i_12 - 2] [i_11 - 1] [i_12])) - (20)))))));
                    }
                } 
            } 
            arr_53 [i_11] = ((/* implicit */unsigned char) (((((-(var_9))) >= (((1158254138096679211ULL) >> (((2147483647) - (2147483633))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_6 + 2] [i_6 + 2] [i_11]))) >= ((~(var_1))))))) : (((unsigned int) arr_45 [i_6 + 1] [i_11 - 2]))));
            arr_54 [i_6] [i_11 - 1] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_36 [i_6] [i_6 - 4] [i_6] [16U] [i_11 - 3])), ((unsigned short)28431)))), (11802283785885584397ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-23)))) ? (((((/* implicit */_Bool) 21)) ? (3858179514U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_6 + 2] [i_6 - 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32640)))))) : (max((((/* implicit */unsigned long long int) max((-814205615), (((/* implicit */int) (signed char)-14))))), (5059248137377355920ULL)))));
            arr_55 [i_11] = ((/* implicit */unsigned char) arr_44 [i_11] [i_11]);
        }
        var_32 = (!(((/* implicit */_Bool) max((arr_26 [i_6] [6ULL] [i_6]), (((/* implicit */unsigned long long int) (-(7391881504528144389LL))))))));
        arr_56 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (+(-5204367490536787341LL)))) ? (((((/* implicit */_Bool) arr_23 [i_6 + 2] [i_6 - 1])) ? (8924359038409643826ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77))))) : ((~(arr_26 [i_6] [i_6 - 2] [i_6])))));
    }
}
