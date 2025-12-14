/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145622
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
    var_19 = ((/* implicit */short) max(((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -4194271696679810952LL)) : (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65532)) >= (((/* implicit */int) (unsigned char)96)))))) | (-5742681661956443727LL))))));
    var_20 = ((/* implicit */long long int) max((var_20), (max((0LL), (0LL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = (-(3751125361U));
                var_21 = ((/* implicit */unsigned long long int) arr_2 [(short)5] [i_0]);
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_10 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [12ULL] [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : (((((((/* implicit */int) var_6)) + (2147483647))) << (((arr_7 [i_2] [(short)13] [i_1] [i_0]) - (17290612381669338273ULL)))))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)160)), ((short)28717)))) : (((/* implicit */int) (signed char)62))));
                    arr_11 [i_1] [i_2] [i_1] [i_1] &= ((/* implicit */short) arr_0 [i_1] [(unsigned short)0]);
                    var_22 = ((/* implicit */short) min(((-(arr_7 [i_0] [i_0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_6)))))));
                }
                for (int i_3 = 3; i_3 < 15; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 1) 
                        {
                            {
                                arr_22 [i_1] [i_4] [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~((+(((/* implicit */int) var_13))))))) % ((+(4294967295U)))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-75), (arr_2 [i_4] [i_5 + 1]))))) : ((+(var_4)))));
                            }
                        } 
                    } 
                    arr_23 [i_3] [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) -5289206405443694531LL)) ? (((/* implicit */unsigned long long int) (~(((arr_14 [i_3 - 2]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1550)) ? (((/* implicit */unsigned long long int) -5289206405443694531LL)) : (arr_6 [i_0] [(_Bool)1] [i_3])))) ? (min((18446744073709551614ULL), (((/* implicit */unsigned long long int) (unsigned short)13548)))) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))));
                    var_24 = ((/* implicit */unsigned char) ((int) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24))) : (5742681661956443727LL))))));
                }
                for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)42773))))) ? (((((/* implicit */_Bool) 6370833888654741023ULL)) ? (13729480722494244399ULL) : (((/* implicit */unsigned long long int) 262143U)))) : (((((/* implicit */_Bool) (short)-16975)) ? (((/* implicit */unsigned long long int) arr_15 [i_6 + 1] [i_1] [i_6] [(unsigned char)16])) : (arr_9 [i_7] [i_1] [i_0])))))));
                                arr_32 [i_0] [i_0] [(_Bool)1] [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_11)) / (arr_15 [i_0] [i_1] [i_7] [i_7]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2706787951410150108ULL)) ? (arr_0 [i_7] [i_8]) : (((/* implicit */long long int) var_9))))), (var_15))))));
                                arr_33 [i_0] [i_7] [i_7] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */_Bool) var_4);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [3] [i_6 - 1])))))) != (((((_Bool) arr_19 [i_0] [i_1] [i_0] [i_0] [i_0] [(unsigned char)2] [i_0])) ? ((~(var_9))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)2108)))))))));
                    var_27 = ((/* implicit */unsigned short) min((var_15), (((((/* implicit */_Bool) ((arr_29 [i_1]) - (((/* implicit */int) (signed char)75))))) ? (((/* implicit */unsigned long long int) arr_27 [i_1] [i_6 + 1])) : (var_4)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        arr_38 [i_9] [9ULL] = ((/* implicit */short) (((-(((/* implicit */int) arr_36 [i_9] [i_9] [i_6 + 1] [i_9 + 1])))) <= (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-74))))));
                        arr_39 [(unsigned short)0] [i_6] [i_9] [i_6 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) 5788682972123474334LL)) ? (1420656556U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10616)))));
                        var_28 = ((/* implicit */short) (-(var_12)));
                        arr_40 [i_0] [i_9] = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)57))))) - (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16384))) + (-5742681661956443727LL)))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 2; i_11 < 15; i_11 += 1) /* same iter space */
                        {
                            arr_48 [i_11] [i_11] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_11] [i_10] [i_11 + 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), (var_11))))) : (var_17)))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_0] [i_1] [i_6 - 1] [i_10] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -2267323044812992441LL)) : (((((/* implicit */_Bool) ((var_18) | (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_0] [i_1] [i_1] [i_10] [i_11])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_6 + 1] [(signed char)12])) ? (((/* implicit */int) (short)16599)) : (((/* implicit */int) var_6))))) : (((unsigned long long int) (unsigned short)60257))))));
                        }
                        for (short i_12 = 2; i_12 < 15; i_12 += 1) /* same iter space */
                        {
                            arr_51 [i_0] [i_12] [i_0] [i_12] = ((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_12] [i_1] [i_1]);
                            var_30 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) 0ULL)) ? (1474720712U) : (arr_26 [i_12] [5U] [i_6] [i_1] [i_12]))), (arr_37 [12LL] [12LL] [i_12] [i_12 + 1] [i_12 - 1]))) | (((unsigned int) 5742681661956443727LL))));
                            arr_52 [i_12] [i_10] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((6370833888654741023ULL) * (1551460401772933258ULL)))) ? (((((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_1] [i_6] [(unsigned short)3] [i_12])) ? (((/* implicit */int) arr_2 [i_6] [i_10])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((short) var_9))))));
                            var_31 += ((/* implicit */long long int) var_10);
                            arr_53 [i_0] [i_1] [i_6] [i_10] [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 1343258987654209204ULL))) ? (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_13))))))) : ((-((-(arr_37 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        arr_54 [i_0] [i_1] [i_1] [i_6] [i_10] = ((/* implicit */_Bool) (-((+(15739956122299401503ULL)))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])) >> (((((/* implicit */int) (unsigned short)8160)) - (8138)))))), (((((/* implicit */_Bool) 5742681661956443727LL)) ? (2706787951410150108ULL) : (arr_7 [i_0] [i_0] [i_6] [i_10])))))) ? (((/* implicit */int) ((short) arr_35 [i_0] [i_0] [i_0] [i_1] [(_Bool)1] [i_10]))) : (((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) arr_7 [i_6 + 1] [i_6 + 1] [17] [i_6])))))));
                        var_33 &= ((/* implicit */short) ((unsigned long long int) (signed char)125));
                    }
                    for (unsigned char i_13 = 3; i_13 < 15; i_13 += 3) 
                    {
                        arr_59 [(short)14] [i_1] [i_13] [i_13] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((15658357125894666576ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_42 [i_1] [i_1] [i_6] [i_13] [i_6])) : (((/* implicit */int) var_6)))))))) ? (((/* implicit */int) (unsigned short)25341)) : (min((648545039), (((/* implicit */int) (short)-16))))));
                        arr_60 [i_0] [i_6] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_6 - 1] [i_13])) ? ((+(((/* implicit */int) ((unsigned char) var_9))))) : ((-((+(arr_58 [i_1] [i_0])))))));
                        var_34 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)13404)), ((-2147483647 - 1))));
                    }
                    var_35 = ((/* implicit */short) arr_42 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_0]);
                }
                arr_61 [i_0] [i_1] [(_Bool)1] = ((/* implicit */signed char) 261631695U);
            }
        } 
    } 
}
