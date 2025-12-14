/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184059
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
    var_15 = ((/* implicit */_Bool) (-((-((-(((/* implicit */int) (short)-10867))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2014698121U)) ? (2147483647) : (((/* implicit */int) var_13)))))))) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))) / (var_6)));
        var_16 = ((/* implicit */unsigned short) 17LL);
    }
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_10 [i_1] [i_1 + 1] = ((/* implicit */long long int) (short)-10864);
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    arr_16 [i_1] = ((/* implicit */_Bool) min(((unsigned short)1536), (((/* implicit */unsigned short) (short)-1))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_17 = var_14;
                        arr_19 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1 - 1] [i_2 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1]))) / (436547126U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1 + 1])) ? (2147483647) : (((/* implicit */int) (signed char)96)))))));
                        var_18 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_2 + 1]))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        arr_22 [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)1544))) ? (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-37)))) : ((-(((/* implicit */int) (signed char)88))))))) ? ((~(((/* implicit */int) (unsigned short)15092)))) : ((+((-(((/* implicit */int) (unsigned short)65535))))))));
                        var_19 = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5]))) / (arr_12 [i_1 + 1] [i_2]))), (min((((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))))), (((/* implicit */unsigned int) (signed char)-97))))));
                        var_20 -= ((/* implicit */unsigned long long int) (short)-10870);
                    }
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_21 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)63991)) ? (36028797018963968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55240))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_9 [i_1] [i_1])))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
                    }
                }
            } 
        } 
        arr_27 [i_1] = ((/* implicit */unsigned long long int) max((((arr_11 [i_1 - 1]) / (((((/* implicit */_Bool) arr_7 [i_1])) ? (-8LL) : (((/* implicit */long long int) arr_12 [i_1] [i_1])))))), (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
        arr_28 [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_3)) / (((/* implicit */int) (_Bool)1)))), (((int) arr_18 [i_1] [i_1] [i_1] [i_1 + 1]))));
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 3; i_9 < 21; i_9 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) arr_21 [i_1]);
                            arr_42 [22] [i_7] [i_7] [i_1] [i_7] = (-(((/* implicit */int) arr_21 [i_1])));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 1) /* same iter space */
                        {
                            arr_46 [i_1] [i_7] [i_8] [i_9] [i_7] [i_11] = ((/* implicit */short) (_Bool)1);
                            arr_47 [i_11] [i_11] [i_9] [i_1] [i_7] [i_7] [i_1] = ((/* implicit */unsigned short) (+((-(arr_12 [i_1 + 1] [i_1 - 1])))));
                            arr_48 [i_9] [i_9] [i_9] [i_9] [i_1] [i_9 - 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_20 [i_9] [i_9] [i_9 - 3] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_7] [i_8] [i_11 + 1])) >= (((/* implicit */int) var_11)))))) : (var_10)))));
                        }
                        arr_49 [i_1] = ((/* implicit */unsigned short) (unsigned char)8);
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 1; i_12 < 19; i_12 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) (unsigned short)15661))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)2047))));
                            var_25 ^= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_50 [i_8] [i_9 - 2] [(unsigned short)13] [i_12] [(unsigned short)13])))) >= (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)47))))));
                        }
                        for (unsigned int i_13 = 1; i_13 < 19; i_13 += 1) /* same iter space */
                        {
                            arr_55 [i_7] [i_7] &= ((/* implicit */long long int) arr_33 [i_1] [i_7] [i_13 + 2] [i_7]);
                            var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(arr_24 [i_1] [i_7] [(unsigned short)9] [i_9] [i_13 + 4])))) ? (((((/* implicit */_Bool) (unsigned short)15657)) ? (((/* implicit */unsigned long long int) var_6)) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)1519))))))));
                            arr_56 [i_13] [i_13 - 1] [i_13] [i_1] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)30818))))) ? (((-993786668) / (((/* implicit */int) (short)-10875)))) : (((/* implicit */int) var_11))))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) / (((((/* implicit */_Bool) var_13)) ? (arr_11 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                            arr_57 [i_8] [i_1] = ((/* implicit */_Bool) var_3);
                            var_27 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((arr_38 [i_1]) ? (((/* implicit */int) (unsigned short)49874)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_54 [i_13] [i_13] [i_7] [i_9] [i_1])) : (((/* implicit */int) arr_26 [i_1] [i_1] [i_9 - 1] [i_9]))))))) : (((unsigned int) var_14))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_14 = 1; i_14 < 22; i_14 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)247)) >= (((/* implicit */int) (_Bool)1))))) / (arr_37 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])));
        /* LoopNest 3 */
        for (unsigned int i_15 = 3; i_15 < 22; i_15 += 4) 
        {
            for (short i_16 = 3; i_16 < 21; i_16 += 3) 
            {
                for (short i_17 = 2; i_17 < 22; i_17 += 1) 
                {
                    {
                        arr_69 [i_15 - 1] [i_14] = (~(((((/* implicit */int) arr_54 [i_16 - 1] [i_16] [i_16 - 1] [i_16 - 1] [i_16 - 1])) / (((/* implicit */int) arr_54 [i_16 - 3] [i_16 - 3] [i_16] [i_16] [i_16])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 1; i_18 < 20; i_18 += 1) 
                        {
                            arr_72 [i_14] [i_17 - 1] [(_Bool)1] [i_15] [i_14] = ((/* implicit */unsigned long long int) arr_32 [i_17]);
                            arr_73 [i_15 - 3] [i_14] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_17] [i_14 + 1]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_5)) * (((((/* implicit */int) var_8)) / (((/* implicit */int) arr_9 [i_17] [i_17]))))))));
                            arr_74 [i_14] [i_14] [i_14 - 1] [i_14] [i_14] = ((/* implicit */_Bool) (signed char)60);
                            arr_75 [i_17] [i_17] [i_17] [i_17 - 1] [i_18] [20U] [(signed char)6] &= ((/* implicit */unsigned char) (_Bool)1);
                            var_29 ^= ((/* implicit */short) max(((-(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_71 [i_14] [i_15] [i_18])))))), (((/* implicit */unsigned long long int) ((unsigned char) var_0)))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_19 = 1; i_19 < 22; i_19 += 2) /* same iter space */
    {
        arr_78 [i_19] [i_19] = ((/* implicit */unsigned short) (!((_Bool)1)));
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 1) 
        {
            for (signed char i_21 = 0; i_21 < 23; i_21 += 4) 
            {
                {
                    var_30 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (signed char)-25))));
                    arr_87 [i_19 + 1] [i_19 + 1] [i_21] &= ((/* implicit */unsigned int) arr_68 [i_19] [i_20] [i_20] [i_19] [i_19] [i_19]);
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_19 + 1] [i_19 + 1] [i_19 - 1])) - (((/* implicit */int) arr_23 [i_19 + 1] [i_19 + 1] [i_19 + 1]))));
                    var_32 += ((/* implicit */_Bool) var_12);
                }
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
}
