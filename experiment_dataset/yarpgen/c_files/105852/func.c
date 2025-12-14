/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105852
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((18U) << (((((/* implicit */int) (short)2923)) - (2923)))))) / (-4984920285522970356LL)))) >= (((((/* implicit */_Bool) (short)6793)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (((5834459007770385330ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (((+((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2])))))) != (((/* implicit */int) ((4984920285522970355LL) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))))))));
        arr_4 [18] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)167))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 4; i_2 < 22; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_17 [21LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((732111934) / (((/* implicit */int) arr_9 [i_2 - 4] [i_2 + 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((14ULL), (((/* implicit */unsigned long long int) (short)-32747))))) || (((((/* implicit */_Bool) 3981564488U)) || (arr_9 [i_1] [i_2])))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8160)) ? (279275953455104LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132)))))) && (max(((_Bool)0), (arr_5 [i_1]))))))));
                        var_11 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)62266)) < (arr_6 [i_1])))) >= (((/* implicit */int) ((((/* implicit */_Bool) -9083124167619356538LL)) || (((/* implicit */_Bool) (unsigned short)65535)))))))) * (((/* implicit */int) arr_5 [i_3]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_12 = ((/* implicit */_Bool) 676081425);
                            var_13 = ((/* implicit */long long int) arr_18 [i_4]);
                            var_14 = ((/* implicit */signed char) ((3981564513U) / (((/* implicit */unsigned int) 1681961206))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) arr_7 [i_2 - 2] [i_2 - 2]);
                            arr_26 [i_1] [(short)22] [i_1] [i_1] [i_6] = ((/* implicit */_Bool) (signed char)-1);
                            arr_27 [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) ((arr_12 [i_2] [i_2]) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12))))) / (((arr_11 [(_Bool)1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_1] [i_2])))))) : (-3142852)));
                        }
                        var_16 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_20 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] [i_1])))) + (((((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_1])) < (((/* implicit */int) arr_8 [i_2] [i_2]))))) + (((/* implicit */int) arr_25 [i_1] [i_2] [i_2]))))));
                        var_17 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [i_2 - 2] [i_2 + 1] [i_2 - 3] [i_2 + 1] [i_2 - 4] [i_2 - 2] [i_2 - 3])) ? (((/* implicit */int) arr_12 [i_2 - 4] [i_2 - 1])) : (((/* implicit */int) arr_20 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 3] [i_2 - 2] [i_2 - 2] [i_2 - 3])))) * (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)51169))))));
                    }
                } 
            } 
        } 
        arr_28 [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_25 [(signed char)21] [21LL] [i_1])) == (((/* implicit */int) (signed char)97)))))) == (min((((/* implicit */long long int) 592429432)), (arr_16 [i_1] [i_1] [i_1] [(unsigned char)19])))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18LL)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)162)) > (((/* implicit */int) arr_9 [i_1] [i_1]))))) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1]))))));
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
    {
        arr_32 [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7] [i_7] [i_7] [i_7] [i_7]))) > ((~(0ULL))))))));
        arr_33 [i_7] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)3270);
        arr_34 [i_7] = ((313402793U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))));
        arr_35 [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */int) ((((/* implicit */int) arr_21 [(unsigned short)0] [3] [i_7] [i_7])) < (arr_6 [i_7])))) / (((/* implicit */int) max((arr_20 [i_7] [i_7] [i_7] [i_7] [i_7] [20] [i_7]), (((/* implicit */short) (_Bool)1)))))))));
        var_18 = ((/* implicit */unsigned int) ((arr_7 [(_Bool)0] [i_7]) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31938)) < (((/* implicit */int) (unsigned short)127))))))));
    }
    for (int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (short)-9277);
        var_20 += ((/* implicit */int) ((407918839) != (0)));
    }
    var_21 = ((/* implicit */unsigned short) ((371005028) >> (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) 0LL)))))));
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            for (signed char i_11 = 4; i_11 < 22; i_11 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_12 = 1; i_12 < 19; i_12 += 4) 
                    {
                        arr_48 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */long long int) ((4294967278U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_49 [i_11] = ((/* implicit */unsigned int) max((arr_12 [i_10] [(signed char)4]), (arr_5 [i_12 + 2])));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_53 [i_9] [i_10] [i_11] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_45 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [i_11 - 2]) : (arr_45 [i_9] [i_11 - 2] [i_11 - 2] [i_11 - 2])))) ? ((+(arr_45 [i_13] [i_10] [i_13] [i_11 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_45 [i_9] [(short)2] [17LL] [i_11 - 2]) == (arr_45 [i_9] [i_10] [i_11] [i_11 - 3])))))));
                        var_22 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (_Bool)0)), (arr_47 [i_11] [i_11] [i_11 - 4] [i_11 - 3] [i_11 + 1]))) + (((((arr_10 [i_9] [i_10]) ? (arr_47 [i_9] [i_10] [i_11] [i_11] [4LL]) : (((/* implicit */int) arr_12 [i_9] [i_9])))) >> (((/* implicit */int) arr_8 [i_10] [(unsigned char)3]))))));
                        var_23 = ((/* implicit */long long int) ((arr_8 [i_10] [i_13]) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_13 [i_10] [14] [i_13])) ? (((/* implicit */int) arr_18 [i_9])) : (((/* implicit */int) arr_52 [i_13] [i_13] [i_13] [i_13])))), (((/* implicit */int) ((41323357) >= (((/* implicit */int) (unsigned char)128)))))))) : (1048512ULL)));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_21 [i_9] [i_10] [(unsigned char)11] [i_13]))))) == (((/* implicit */int) arr_21 [i_9] [i_10] [i_11 + 1] [i_13]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        arr_56 [i_9] [i_9] [i_9] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51630))))) && (((/* implicit */_Bool) (unsigned char)7))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_11 - 3] [i_11 - 1] [i_14])) * (((/* implicit */int) arr_15 [i_11 - 2] [i_11 - 1] [i_11 - 1]))));
                        arr_57 [i_9] [i_9] [i_9] = ((/* implicit */long long int) arr_6 [i_11 + 1]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 3; i_16 < 20; i_16 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1374081675)))))));
                                arr_65 [i_10] [i_10] [i_10] = ((/* implicit */long long int) arr_8 [i_15] [16]);
                                arr_66 [i_9] [i_9] [i_11] [i_11 + 1] = ((/* implicit */short) arr_7 [i_9] [16]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (var_8)))) || (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (var_3))))), (((((((/* implicit */_Bool) 1273128331984503473LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) : (16191178165028628123ULL))) != (((/* implicit */unsigned long long int) 313402782U))))));
}
