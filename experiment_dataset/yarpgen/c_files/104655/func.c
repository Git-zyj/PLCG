/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104655
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_10)), (((arr_7 [(signed char)22] [i_1] [i_2] [i_2]) << (((var_13) + (1049945524))))))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (var_10)))) : (max((var_15), (((/* implicit */unsigned long long int) var_2))))))));
                    var_20 = ((/* implicit */long long int) ((unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(short)9] [(unsigned short)14])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_1] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)19012)) || (((/* implicit */_Bool) 384665618934636953ULL))));
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned long long int) arr_6 [i_3] [(unsigned short)13] [i_3] [i_4 - 1])), (var_15))));
            arr_15 [i_4] = ((/* implicit */signed char) var_7);
        }
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            arr_19 [i_3] [i_5] = max((((/* implicit */unsigned int) var_0)), (((((unsigned int) var_10)) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3]))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_16 [i_3] [i_3] [i_5]), (((/* implicit */long long int) var_17))))) ? (((((/* implicit */_Bool) arr_16 [i_3] [i_5] [i_3])) ? (arr_16 [i_5] [i_5] [i_3]) : (arr_16 [i_3] [i_3] [i_3]))) : (((((/* implicit */_Bool) var_1)) ? (arr_16 [i_3] [i_5] [i_5]) : (arr_16 [i_5] [i_5] [i_3])))));
            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47))) >= (18062078454774914652ULL)))), (((unsigned char) max((384665618934636953ULL), (((/* implicit */unsigned long long int) (short)32756)))))));
        }
        arr_20 [i_3] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_7 [i_3] [i_3] [i_3] [i_3]) : (arr_7 [i_3] [(signed char)9] [i_3] [i_3]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_3] [i_3] [i_3])) & (((/* implicit */int) arr_18 [i_3] [i_3] [i_3])))))));
    }
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_11), (arr_23 [i_6] [i_6])))) ? (((((/* implicit */int) var_3)) + (((/* implicit */int) arr_22 [i_6] [i_6])))) : (max((arr_23 [i_6] [i_6]), (arr_23 [i_6] [i_6])))));
        var_26 -= min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */int) var_16)))))), (((max((((/* implicit */unsigned long long int) var_14)), (arr_24 [i_6]))) | (((arr_24 [i_6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
        arr_25 [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */short) ((_Bool) var_13))), (var_17)))), (max((((/* implicit */int) arr_22 [i_6] [i_6])), (max((((/* implicit */int) arr_21 [i_6] [i_6])), (arr_23 [i_6] [i_6])))))));
    }
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */int) min((max((((/* implicit */unsigned short) (short)32756)), ((unsigned short)2048))), (((/* implicit */unsigned short) min((var_12), (var_12))))));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 2; i_10 < 22; i_10 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) (+(((var_11) - (var_10)))));
                        var_28 = ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_7] [(signed char)21] [i_7])) : (var_5)));
                        var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_10 + 1] [i_10] [i_10 - 2]))) | (((unsigned long long int) arr_4 [i_7] [i_10]))));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_6 [i_11 - 2] [i_8] [i_9] [i_9])), (arr_7 [i_11 - 2] [i_8] [i_9] [i_11 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8] [i_8]))) >= (arr_33 [i_9] [i_9]))))) * (((((/* implicit */_Bool) var_14)) ? (var_6) : (var_1))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10)))) == (max((arr_6 [i_7] [i_8] [i_9] [i_11]), (((/* implicit */unsigned int) var_4)))))) || (((/* implicit */_Bool) var_11))));
                            var_32 = ((min((((/* implicit */int) arr_2 [i_11 - 2])), (arr_0 [i_11 + 1]))) % (max((((/* implicit */int) var_3)), (arr_0 [i_11 - 1]))));
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 21; i_13 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned int) ((long long int) arr_34 [i_7] [i_8] [i_9] [i_9] [i_9] [i_13]));
                            arr_44 [i_7] [i_7] [21U] [21U] [i_9] = max((((/* implicit */unsigned long long int) ((arr_30 [i_7] [i_8] [i_9]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_2)), (var_12)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_33 [i_9] [i_8])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_0))))) : (arr_30 [i_11 - 1] [i_11 - 2] [i_13 + 1]))));
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((arr_7 [i_11 - 2] [i_11 + 1] [i_13 - 2] [i_13 + 1]) & (((/* implicit */unsigned long long int) (-(var_5)))))))));
                        }
                        for (unsigned long long int i_14 = 2; i_14 < 21; i_14 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((short) var_3))) : ((~(((/* implicit */int) arr_21 [(_Bool)1] [i_8]))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (var_11)))), (max((arr_24 [i_14]), (((/* implicit */unsigned long long int) arr_35 [i_7] [i_11]))))))));
                            arr_47 [i_8] [i_9] [i_7] [i_9] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_9])) / (((/* implicit */int) arr_26 [i_8]))))) - (((((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])) ? (var_6) : (((/* implicit */long long int) arr_3 [i_7] [i_9] [i_11]))))));
                            var_36 = ((/* implicit */unsigned int) var_16);
                            arr_48 [i_9] [i_14] [i_9] [i_11] [i_14] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) arr_31 [i_7] [i_8] [i_9] [i_11]))), (min((var_8), (((/* implicit */long long int) arr_34 [i_14 + 2] [i_14] [i_14 - 2] [i_14 - 1] [i_9] [i_14]))))));
                        }
                    }
                    var_37 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned long long int) (signed char)116)), (18062078454774914642ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756))))) || (((/* implicit */_Bool) max((((unsigned int) var_10)), (((/* implicit */unsigned int) max((arr_41 [i_7] [i_8] [i_8] [i_9]), (((/* implicit */unsigned short) var_18))))))))));
                }
            } 
        } 
    }
    for (unsigned char i_15 = 2; i_15 < 15; i_15 += 1) 
    {
        var_38 = ((/* implicit */unsigned long long int) var_1);
        arr_51 [i_15] [i_15] = ((/* implicit */unsigned char) var_13);
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 17; i_16 += 1) 
        {
            for (short i_17 = 3; i_17 < 14; i_17 += 1) 
            {
                {
                    var_39 = ((/* implicit */unsigned short) var_3);
                    arr_57 [i_15] = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned long long int) 2061284971U)), (384665618934636975ULL))));
                    var_40 = (i_15 % 2 == 0) ? (((/* implicit */unsigned long long int) max((((arr_53 [i_17] [i_15] [i_15 + 2]) >> (((arr_12 [i_15] [(signed char)0]) - (16895694552436947430ULL))))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) <= (var_14))))))) : (((/* implicit */unsigned long long int) max((((((arr_53 [i_17] [i_15] [i_15 + 2]) + (9223372036854775807LL))) >> (((arr_12 [i_15] [(signed char)0]) - (16895694552436947430ULL))))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) <= (var_14)))))));
                    var_41 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_42 [i_16] [i_16] [i_16])), (arr_3 [(signed char)8] [i_16] [(signed char)8])))) ? (max((((/* implicit */long long int) var_14)), (var_6))) : (((/* implicit */long long int) ((var_11) + (var_14)))))));
                }
            } 
        } 
    }
    var_42 = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */int) var_2)), (var_10)))), (max((var_6), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))));
    var_43 = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) ((var_14) ^ (((/* implicit */int) var_4))))));
    var_44 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */int) var_18)), (var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_10) : (var_5)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : ((+(((var_6) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
}
