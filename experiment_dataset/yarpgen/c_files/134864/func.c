/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134864
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_16 -= ((/* implicit */signed char) min((var_11), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_2]))) : (var_6))))))));
                        var_17 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_0] [i_2] [i_3] [i_3])) == (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0])) && (var_12))))));
                        var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_12))))) ? ((~(var_11))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))))));
                        arr_14 [i_1] [i_1] [i_1] [0LL] = ((/* implicit */long long int) (-((-(((((/* implicit */int) var_12)) - (((/* implicit */int) (short)4150))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    var_19 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [i_0] [(short)15] [i_0])), (((((var_0) + (9223372036854775807LL))) << (((((arr_1 [i_4]) + (2150047844417740271LL))) - (19LL)))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_28 [i_0] [i_5] [(signed char)0] [i_6] = ((/* implicit */short) min((arr_0 [i_0]), (var_12)));
                                var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */short) arr_0 [i_7])), (max((((/* implicit */short) arr_8 [i_7] [i_4] [i_4])), (arr_21 [i_0] [i_4] [0U] [i_6])))))), (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_6] [i_5] [i_6] [i_5]))) - (var_13)))), (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6] [i_6] [i_0] [i_6] [i_7]))) : (var_0)))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (max((((/* implicit */unsigned int) (unsigned char)121)), (3077071124U)))))) - (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) : (max((((/* implicit */long long int) arr_11 [i_5] [i_6] [i_5])), (arr_5 [i_0])))))))));
                                var_22 *= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) min((arr_19 [i_0] [i_5] [i_7]), (var_4)))) % ((+(((/* implicit */int) arr_0 [i_0]))))))), (((((var_0) + (((/* implicit */long long int) var_6)))) + (((/* implicit */long long int) ((/* implicit */int) ((var_7) > (var_5)))))))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_9))));
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) ((short) arr_8 [16LL] [i_4] [i_5]))))), (((/* implicit */int) arr_27 [i_0] [(_Bool)1] [i_0] [i_0] [i_5]))));
                    arr_29 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5])))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
    {
        arr_32 [i_8] [i_8] = arr_8 [i_8] [i_8] [i_8];
        var_25 = ((/* implicit */short) ((long long int) arr_19 [i_8] [i_8] [i_8]));
        var_26 = ((/* implicit */short) (unsigned short)0);
    }
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            {
                arr_39 [i_10] [i_10] [i_9] = ((/* implicit */short) ((unsigned int) max((((-6351070468739399260LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((((-6351070468739399277LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_15)) - (4566))))))));
                var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_9])) ? ((~(((/* implicit */int) (!(arr_0 [i_9])))))) : (((/* implicit */int) arr_25 [i_9] [i_10] [i_9] [i_9] [i_9] [i_9] [i_10]))));
                var_28 = ((/* implicit */long long int) arr_8 [i_10] [7U] [16LL]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) min(((-(((((/* implicit */int) (short)16908)) >> (((1225908423U) - (1225908411U))))))), (((((/* implicit */int) ((short) (signed char)110))) / ((+(((/* implicit */int) var_10))))))));
                        var_30 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) < (var_13))))), (-1LL)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 4) 
        {
            for (long long int i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        for (long long int i_18 = 0; i_18 < 24; i_18 += 4) 
                        {
                            {
                                var_31 = arr_57 [i_11] [i_15] [i_16] [i_17] [i_11];
                                var_32 = ((/* implicit */int) ((unsigned short) max((arr_52 [i_18]), (arr_52 [i_11]))));
                                arr_59 [i_11] [i_15] [i_16] [i_17] [i_18] = ((/* implicit */signed char) ((var_9) ? (var_13) : (arr_44 [i_15] [i_16] [i_18])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            {
                                arr_65 [i_11] [i_15] [i_16] [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */signed char) var_9)), (arr_54 [i_11] [i_15] [i_15] [i_19] [i_20])))) * (((/* implicit */int) max((arr_54 [i_11] [i_15] [i_16] [i_19] [i_20]), (((/* implicit */signed char) var_14)))))));
                                var_33 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) var_6))))) ? (((((/* implicit */int) arr_57 [(unsigned short)1] [(unsigned short)1] [(unsigned short)8] [i_19] [i_20])) * (((/* implicit */int) arr_52 [i_20])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_15])) || (((/* implicit */_Bool) var_6))))))) / ((~(((/* implicit */int) arr_61 [i_11] [i_15]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 ^= ((/* implicit */long long int) (unsigned short)60097);
        var_35 = ((/* implicit */long long int) ((unsigned short) min((arr_48 [i_11] [i_11] [i_11] [i_11] [2LL]), (((/* implicit */unsigned long long int) arr_60 [i_11])))));
    }
    for (unsigned short i_21 = 0; i_21 < 22; i_21 += 2) 
    {
        arr_69 [i_21] [i_21] = ((/* implicit */unsigned short) (-(max((min((var_2), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) arr_68 [i_21]))))));
        arr_70 [i_21] |= min((((/* implicit */short) (!(((/* implicit */_Bool) arr_44 [i_21] [i_21] [i_21]))))), (arr_53 [i_21] [i_21] [i_21] [i_21]));
        var_36 = ((/* implicit */long long int) ((unsigned short) ((((arr_56 [i_21] [i_21] [i_21] [19U] [i_21]) / (arr_58 [i_21]))) & (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)26))))))));
        var_37 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_60 [i_21])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (var_6)))) && (((/* implicit */_Bool) min((((/* implicit */short) arr_67 [i_21] [i_21])), ((short)-497))))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_22 = 0; i_22 < 24; i_22 += 4) 
    {
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_42 [i_22] [i_22] [(unsigned char)10]))))) * (max((max((536870912U), (((/* implicit */unsigned int) arr_53 [i_22] [i_22] [i_22] [i_22])))), (((/* implicit */unsigned int) arr_61 [i_22] [i_22]))))));
        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) arr_58 [i_22]))));
        /* LoopNest 2 */
        for (long long int i_23 = 0; i_23 < 24; i_23 += 2) 
        {
            for (long long int i_24 = 0; i_24 < 24; i_24 += 2) 
            {
                {
                    arr_79 [i_22] [i_22] [i_23] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_64 [i_22] [i_22] [i_24] [i_23] [i_24] [i_23]), (((/* implicit */unsigned int) arr_54 [i_22] [i_22] [i_24] [i_22] [i_22]))))))))));
                    var_40 ^= min((((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) arr_50 [i_22] [i_23] [i_24])) : (var_8))))), ((short)0));
                    arr_80 [i_22] = ((/* implicit */long long int) arr_71 [i_22]);
                }
            } 
        } 
    }
}
