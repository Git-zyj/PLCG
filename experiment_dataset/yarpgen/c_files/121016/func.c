/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121016
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
    var_11 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) /* same iter space */
                            {
                                arr_16 [i_3] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)0)))) & (((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */_Bool) 14321230629399944768ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_17 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32740)) ? (((/* implicit */int) ((((/* implicit */_Bool) 8833333018166873846ULL)) || (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [(unsigned char)1]))))) : (((/* implicit */int) arr_12 [i_0 + 1] [i_3 - 1] [i_3 - 1] [i_4 + 2] [i_4]))))) && (((/* implicit */_Bool) var_9))));
                            }
                            for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 4) /* same iter space */
                            {
                                arr_20 [i_3] [17ULL] [(unsigned short)5] [i_5 + 2] [i_5 + 1] [i_5] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)42656), (((/* implicit */unsigned short) (_Bool)0)))))) & (((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) + (-6653023196717018764LL))))) >= (((/* implicit */long long int) ((int) arr_14 [i_0 - 1])))));
                                arr_21 [i_3] [i_3] [i_2] [4LL] [i_2] [i_0 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (4125513444309606855ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61489)) && (((/* implicit */_Bool) ((unsigned long long int) (short)-24432)))))) : (((/* implicit */int) min((arr_14 [i_0 - 2]), (min((((/* implicit */signed char) (_Bool)0)), ((signed char)0))))))));
                            }
                            for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 4) /* same iter space */
                            {
                                arr_24 [(unsigned short)11] [i_1] [i_2] [i_3] [(short)19] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((1760704466), (((/* implicit */int) (unsigned char)8))))) | (((((/* implicit */_Bool) (unsigned short)62212)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_2)) : (9335890806184410932ULL))) : (((/* implicit */unsigned long long int) -5466330060288973455LL))))));
                                arr_25 [i_0] [18LL] [i_0] [i_2] [i_3 - 1] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_11 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_11 [i_0] [i_0 + 1])))) & ((+(((/* implicit */int) arr_11 [i_0] [i_0 + 1]))))));
                                arr_26 [i_0] [i_0] [i_0] [i_0 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)57010)) : (((/* implicit */int) (short)14575))));
                                arr_27 [(unsigned short)11] [i_3] [i_2] [i_3 - 1] [i_6] = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) ((_Bool) (short)1023))));
                            }
                            arr_28 [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) -5466330060288973455LL))))))));
                            /* LoopSeq 4 */
                            for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
                            {
                                arr_32 [i_0] [(signed char)12] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_13 [i_2] [i_3])) + (((((/* implicit */_Bool) var_7)) ? (2305843009213693952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))))))) - (((2008240654488293625ULL) + (((/* implicit */unsigned long long int) arr_30 [i_0 - 2] [i_0 - 1] [i_3] [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 2]))))));
                                arr_33 [i_3] = ((/* implicit */unsigned long long int) arr_23 [i_3] [(short)10]);
                                arr_34 [i_0] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((int) arr_3 [i_1] [i_3]))) <= (arr_13 [i_7] [i_3]))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((-4000458556083189310LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))))))));
                                arr_35 [i_3] [i_1] [i_2] [i_3 - 1] [i_7 - 1] = max((((/* implicit */unsigned short) (short)-1023)), ((unsigned short)52282));
                            }
                            for (signed char i_8 = 1; i_8 < 19; i_8 += 1) 
                            {
                                arr_39 [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)7)) < (((/* implicit */int) var_1)))) || (((/* implicit */_Bool) (-(8833333018166873827ULL))))));
                                arr_40 [i_3] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_3 - 1] [i_8 + 1])) ? (((((/* implicit */int) arr_22 [i_0 - 2] [i_3 - 1] [i_8 - 1])) / (((/* implicit */int) arr_22 [i_0 + 1] [i_3 - 1] [i_8 - 1])))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned char)135))))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 2) 
                            {
                                arr_43 [i_0] [i_3] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)36))));
                                arr_44 [i_3] [(_Bool)1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (~(1945791307)));
                                arr_45 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */signed char) (short)-24150);
                            }
                            /* vectorizable */
                            for (signed char i_10 = 1; i_10 < 19; i_10 += 1) 
                            {
                                arr_48 [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (arr_7 [i_0 + 1] [i_10 + 1])));
                                arr_49 [i_10 + 1] [i_3] [i_2] [i_1] [i_3] [i_0 - 2] = ((/* implicit */long long int) ((_Bool) (unsigned short)65535));
                                arr_50 [i_2] [i_2] [i_10 - 1] |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62541)) << (((/* implicit */int) (unsigned short)0))));
                                arr_51 [7LL] [i_0] [i_1] [i_2] [10LL] [i_3] [i_10 + 1] = ((/* implicit */unsigned int) ((unsigned char) (~(2424573213U))));
                            }
                            arr_52 [(unsigned short)10] [6U] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-9090)) == (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1])), ((unsigned short)52820))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_11 = 2; i_11 < 19; i_11 += 1) 
                {
                    for (int i_12 = 1; i_12 < 19; i_12 += 1) 
                    {
                        {
                            arr_59 [i_0] [i_1] [i_1] [i_12 - 1] = ((/* implicit */int) var_9);
                            arr_60 [(_Bool)0] [(unsigned short)0] = ((/* implicit */short) ((unsigned char) ((((((/* implicit */int) arr_46 [i_0 - 2] [i_0 - 2] [i_1] [i_11] [i_12])) >> (((((/* implicit */int) var_1)) - (31666))))) != (((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */int) (short)-1023)) : (((/* implicit */int) var_6)))))));
                            arr_61 [i_12] [i_1] [i_1] [i_1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [(short)15] [i_0 - 2])) ? (2008240654488293625ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(short)2] [(short)2] [i_0 + 1]))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_13 = 1; i_13 < 19; i_13 += 4) 
                            {
                                arr_64 [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_10))))))), (((/* implicit */int) ((((((/* implicit */int) (unsigned short)4)) | (((/* implicit */int) (short)-1024)))) >= (((/* implicit */int) ((4125513444309606855ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121)))))))))));
                                arr_65 [(unsigned short)11] [i_12] [i_13 + 1] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((((/* implicit */long long int) 3414433799U)) | (var_7))))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (arr_31 [i_13 - 1] [i_13] [i_12 - 1] [i_11 - 2] [i_0 - 2]))))));
                            }
                            for (long long int i_14 = 3; i_14 < 17; i_14 += 1) 
                            {
                                arr_69 [i_14] [i_14] [i_12] [i_11] [14ULL] [i_0] [i_0] = ((((((/* implicit */_Bool) arr_23 [i_1] [i_14 - 1])) && (((/* implicit */_Bool) arr_23 [i_1] [i_14 + 3])))) ? (((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_14 + 1])) > (((/* implicit */int) arr_23 [i_1] [i_14 - 2]))))) : (((((/* implicit */int) arr_23 [i_1] [i_14 + 1])) * (((/* implicit */int) (_Bool)0)))));
                                arr_70 [12ULL] [i_1] [12ULL] [i_1] [i_1] |= ((/* implicit */unsigned long long int) var_9);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */int) (short)-1023);
}
