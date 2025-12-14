/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126732
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */long long int) arr_1 [i_0] [i_0])) / (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) ((3357198990U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            var_12 = ((/* implicit */_Bool) arr_0 [i_1]);
            var_13 ^= min((((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 2]))), ((+(arr_0 [i_1 + 2]))));
            var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)4)) ? (arr_5 [i_1 + 3] [i_1]) : (arr_5 [i_1 + 1] [i_1]))), (arr_5 [i_1 + 3] [i_1])));
            var_15 = ((/* implicit */unsigned char) (-(((arr_6 [i_0] [i_1 + 1]) ^ (((/* implicit */long long int) (-(((/* implicit */int) (signed char)11)))))))));
            var_16 = ((/* implicit */unsigned int) min((max((((arr_6 [i_0] [i_0]) ^ (((/* implicit */long long int) arr_1 [i_0] [i_1])))), (((/* implicit */long long int) ((arr_1 [i_0] [i_0]) % (((/* implicit */int) var_4))))))), (((/* implicit */long long int) max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned int) (signed char)4)))))));
        }
        arr_7 [i_0] [i_0] = 16U;
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) (((-(arr_1 [i_2] [i_2]))) << (((((/* implicit */int) min((arr_9 [i_2]), (var_10)))) - (54))))))));
        /* LoopSeq 4 */
        for (unsigned short i_3 = 4; i_3 < 19; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                arr_15 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) arr_12 [i_2] [i_3] [i_4]);
                var_17 = ((/* implicit */long long int) min((var_17), (arr_0 [i_3 - 4])));
            }
            for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_18 = arr_18 [i_5] [i_5] [i_3] [i_2];
                arr_19 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~(((((arr_12 [i_2] [i_3] [i_5]) & (arr_8 [i_2]))) & (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)240)), (arr_1 [i_2] [i_5]))))))));
                var_19 = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) (signed char)15)) ? (arr_5 [i_2] [i_3]) : (var_0))) >> (((((2223982195U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))) - (2070985075U)))))));
                arr_20 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-40)) ^ (((/* implicit */int) (signed char)-16))));
            }
            for (long long int i_6 = 3; i_6 < 20; i_6 += 2) 
            {
                arr_23 [(unsigned short)5] [i_3] [i_6] = ((/* implicit */unsigned int) min(((+(-8477013924737738506LL))), (((arr_17 [i_3] [i_3 - 3]) % (((/* implicit */long long int) arr_16 [i_6 - 1] [i_3 + 2] [i_6 - 1] [i_2]))))));
                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) : ((+(-8477013924737738500LL))))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-41)))));
            }
            arr_24 [i_2] [i_3] [i_3 - 2] = ((/* implicit */short) (_Bool)1);
            var_21 = ((/* implicit */unsigned char) 9223372036854775805LL);
            var_22 = ((/* implicit */unsigned char) max((((unsigned int) arr_22 [i_3] [i_3])), (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) min(((signed char)2), (((/* implicit */signed char) (_Bool)1))))))))));
        }
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_7])) || (((/* implicit */_Bool) arr_22 [i_7] [i_7]))))) ^ (((((/* implicit */int) arr_4 [2] [i_2] [i_7])) % (((/* implicit */int) arr_22 [i_2] [i_2]))))));
            /* LoopSeq 4 */
            for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                var_24 += min((((/* implicit */int) (unsigned short)65086)), (((((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_27 [i_2] [i_7] [i_8])) : (((/* implicit */int) arr_27 [i_2] [(unsigned short)3] [i_7])))));
                var_25 = ((/* implicit */long long int) (signed char)11);
            }
            for (int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                var_26 += ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_2] [i_7]))) : (var_11))), (((/* implicit */long long int) -589874107))));
                arr_33 [i_2] [i_7] [i_9] [i_7] &= ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)100)))) + (((/* implicit */int) arr_32 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_2] [6LL]))) : (((((/* implicit */long long int) 589874106)) - (((arr_29 [i_2] [i_2] [i_7] [i_2]) - (((/* implicit */long long int) var_5))))))));
            }
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                var_27 = ((/* implicit */_Bool) 712519590);
                var_28 *= ((/* implicit */int) (-(0LL)));
                arr_36 [i_7] [i_10] [8U] = ((/* implicit */unsigned short) (-(((((-1889815879074955598LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_34 [i_2] [i_10] [i_7] [i_10]))))));
            }
            for (signed char i_11 = 3; i_11 < 17; i_11 += 1) 
            {
                var_29 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-12)), (arr_5 [i_2] [i_7])))) & (9223372036854775805LL)))) || (((((/* implicit */int) max(((_Bool)1), (arr_4 [i_11] [i_7] [i_2])))) != (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_10))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 4) 
                {
                    arr_43 [i_12] [i_7] [i_11 - 1] = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) (signed char)16)), (arr_25 [i_2] [i_2]))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)28200)), (arr_18 [i_2] [i_7] [i_11] [17LL]))))))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                    var_30 = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) 625042570)) ? (((/* implicit */int) arr_14 [i_7] [i_11])) : (arr_1 [i_2] [i_2]))))), (((((((/* implicit */_Bool) -8477013924737738506LL)) && (((/* implicit */_Bool) arr_12 [(short)14] [i_7] [i_11])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) 0)) != (arr_5 [i_12] [i_12])))) : ((~(((/* implicit */int) (_Bool)1))))))));
                }
                arr_44 [i_11 - 3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) 429739796)) : (arr_21 [i_2] [i_7] [i_11] [i_11]))) < (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-63)))))))) / (arr_29 [i_2] [i_7] [i_7] [i_2])));
                var_31 = ((/* implicit */long long int) min((var_31), (max((((((9223372036854775792LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))))) | (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)155))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)15)))))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) arr_22 [i_7] [i_7]))));
                        var_33 = ((/* implicit */long long int) (-(((arr_47 [i_2] [i_2] [i_2]) * (3935794948U)))));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_13])) - (((((/* implicit */int) max((((/* implicit */short) arr_32 [i_7])), (var_6)))) % (((((/* implicit */_Bool) arr_26 [i_14])) ? (((/* implicit */int) arr_37 [i_2] [i_7] [i_13] [i_14])) : (((/* implicit */int) (signed char)-12))))))));
                        arr_52 [i_13] [i_7] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) min((arr_6 [i_7] [i_2]), (((/* implicit */long long int) (signed char)-11))))), (min((2ULL), (((/* implicit */unsigned long long int) arr_48 [i_2] [i_14] [i_13]))))))));
                    }
                } 
            } 
        }
        for (long long int i_15 = 0; i_15 < 21; i_15 += 4) 
        {
            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((arr_8 [i_2]), (arr_41 [i_2] [i_2] [i_15] [i_2] [i_2] [i_2])))) || (((/* implicit */_Bool) max((arr_0 [i_15]), (arr_31 [i_2])))))))))));
            var_36 = ((/* implicit */short) ((((long long int) ((((/* implicit */_Bool) arr_11 [i_15])) && (((/* implicit */_Bool) arr_47 [i_2] [i_2] [i_2]))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8477013924737738506LL)) || (((/* implicit */_Bool) 4294967265U))))))));
        }
        for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
        {
            var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)23)) || (((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_16] [i_2])))) ? (max((arr_6 [i_2] [i_16]), (((/* implicit */long long int) (signed char)11)))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)30))))))))));
            var_38 = ((/* implicit */unsigned short) min(((signed char)-12), (min(((signed char)0), ((signed char)-18)))));
            var_39 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)26)), (((((/* implicit */_Bool) min(((unsigned char)245), ((unsigned char)20)))) ? (765510624U) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)8)) / (((/* implicit */int) var_3)))))))));
        }
        var_40 += ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-2))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)10)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) (unsigned char)165))))))));
        var_41 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_2]))))), (arr_13 [i_2] [i_2] [i_2] [i_2])));
    }
    var_42 = ((/* implicit */_Bool) var_11);
    var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((/* implicit */int) min((min((((/* implicit */short) var_4)), (var_6))), (((/* implicit */short) (_Bool)1))))) % (((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)127)))))))));
}
