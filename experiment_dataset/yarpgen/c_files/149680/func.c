/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149680
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_0 - 2] [i_1 - 2])))), (arr_3 [i_0])));
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1023U)) ? (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 - 2])))) * (((/* implicit */int) min((arr_4 [i_0] [i_0 - 1] [i_0 + 2]), (arr_4 [i_0] [i_0 - 1] [i_0 + 2]))))));
                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_0 [i_1 - 3]), (arr_0 [i_1 - 3]))))));
                var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_1 [(signed char)21] [i_1 - 1])) : (((((/* implicit */int) arr_4 [i_0] [i_0 + 2] [i_1])) ^ (arr_2 [i_0]))))), (((/* implicit */int) arr_0 [i_0 - 2]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 14; i_4 += 1) 
            {
                for (long long int i_5 = 3; i_5 < 15; i_5 += 2) 
                {
                    {
                        arr_17 [i_5 - 1] [i_3] [i_4] [i_5 - 1] [i_3] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_2] [(unsigned char)6] [i_5 - 1]))))) == (((((/* implicit */_Bool) var_8)) ? (4294966272U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) 1033U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((((/* implicit */short) arr_4 [0LL] [i_3] [i_2])), (var_11))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            arr_21 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_2] [i_3] [i_4 + 2] [i_2] [i_6 + 3])) >= (((/* implicit */int) arr_20 [i_2 - 3] [i_5] [i_4 - 1] [i_2] [i_6 + 1]))));
                            var_21 = (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_2] [i_3] [i_4])) : (((/* implicit */int) (short)(-32767 - 1))))));
                            arr_22 [i_2] [i_3] [i_4 + 3] [i_3] [i_6 + 2] = ((/* implicit */unsigned char) 4294966273U);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_7 = 1; i_7 < 15; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                {
                    var_22 = ((arr_18 [i_2] [i_7 - 1] [i_8]) % (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_23 [i_2] [i_2])) == (((/* implicit */int) arr_14 [(short)4])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_32 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9525))))) << (((((((/* implicit */_Bool) 358809643970744175LL)) ? (((/* implicit */int) arr_14 [i_9])) : (((/* implicit */int) arr_26 [i_9])))) - (82)))));
                        arr_33 [(short)12] [(short)15] [i_9] [i_8] [i_2] [(unsigned char)12] = ((/* implicit */int) (((-(var_15))) <= (arr_2 [i_9])));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 2; i_10 < 15; i_10 += 4) 
                    {
                        arr_37 [i_2] [i_7] [i_7] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_2] [i_7 + 1] [i_7] [i_2])) && (((/* implicit */_Bool) arr_31 [i_2] [i_7 + 1] [i_8] [i_2]))));
                        arr_38 [i_2] [i_2] [i_8] [i_2] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                        arr_39 [i_2] [i_7 + 2] [i_7 + 1] [i_2] [2ULL] = ((/* implicit */long long int) arr_19 [i_2] [i_10] [i_8] [14LL] [i_7] [(unsigned char)3] [i_2]);
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        arr_42 [i_2] [i_7] [i_2] = ((/* implicit */short) arr_5 [i_2] [i_2]);
                        arr_43 [i_2] [i_7 + 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_8] [6] [i_2])))))) != (((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7 + 2])))))));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) max((((arr_16 [i_2] [i_2] [i_2 + 2] [i_2 + 1] [i_2]) - (var_5))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_2] [i_2] [i_2]))) : (var_10)))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_2 + 3] [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_2 - 3] [i_2 + 1] [i_2 + 3] [i_2] [i_2 - 3])) == (((/* implicit */int) arr_20 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 1]))))) : ((~(((/* implicit */int) arr_20 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2] [i_2 + 2]))))));
    }
    for (unsigned short i_12 = 1; i_12 < 18; i_12 += 3) 
    {
        arr_47 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_12 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_12 + 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_12 - 1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_12 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        arr_48 [i_12] [i_12] = ((/* implicit */long long int) arr_44 [i_12 + 1]);
        /* LoopNest 2 */
        for (unsigned char i_13 = 4; i_13 < 18; i_13 += 2) 
        {
            for (short i_14 = 2; i_14 < 18; i_14 += 1) 
            {
                {
                    arr_54 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (-(1025U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_51 [i_14] [i_14] [i_13 + 1] [i_12 + 1])) >= (((/* implicit */int) arr_51 [i_14] [i_12] [i_14] [i_13 + 1])))))) : (((((/* implicit */_Bool) arr_3 [i_14 - 1])) ? (var_10) : (((/* implicit */long long int) ((((var_7) + (2147483647))) << (((var_10) - (3018802947908528552LL))))))))));
                    var_25 = ((/* implicit */short) (signed char)-54);
                    arr_55 [i_12] [i_13 - 2] [i_14] = ((/* implicit */unsigned long long int) ((long long int) ((long long int) arr_50 [i_14 - 1] [i_13 - 2] [i_12 - 1])));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_3 [i_13])) + (((((/* implicit */_Bool) max((((/* implicit */int) arr_52 [i_12 + 1] [i_12] [i_12])), (arr_3 [i_14])))) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [(unsigned short)10]), (arr_1 [i_13] [i_13])))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_12 - 1]))))) & (((/* implicit */int) arr_1 [(_Bool)1] [i_12 - 1]))));
        /* LoopNest 3 */
        for (unsigned char i_15 = 2; i_15 < 16; i_15 += 2) 
        {
            for (short i_16 = 0; i_16 < 19; i_16 += 2) 
            {
                for (int i_17 = 4; i_17 < 15; i_17 += 1) 
                {
                    {
                        arr_64 [i_12] [i_12] [i_12] [i_16] [i_17] = ((signed char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_45 [i_12])) : (arr_49 [i_12]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_12])) : (((/* implicit */int) arr_52 [i_12] [i_12 - 1] [i_12])))))));
                        arr_65 [i_12] [(unsigned short)9] [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(4294966273U))), (((/* implicit */unsigned int) arr_53 [i_15] [i_12]))))) ? (max((((((/* implicit */_Bool) arr_63 [i_12 - 1] [i_12 - 1] [i_16] [i_17])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_56 [i_12] [i_16] [i_17])))), (((/* implicit */int) arr_1 [i_12] [i_15])))) : (((/* implicit */int) arr_0 [i_12 + 1]))));
                        arr_66 [i_17] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_12 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_45 [i_16]) != (var_15)))) > (((((/* implicit */_Bool) arr_4 [(unsigned char)20] [i_15] [i_15 + 1])) ? (((/* implicit */int) arr_46 [i_17])) : (var_15))))))) : (((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) -2078651964)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1)))))) : (((arr_49 [i_12]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_12])))))))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_3)))))) << (((1013U) - (999U)))));
}
