/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186523
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_12);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)8))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_3 [(short)1])) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((unsigned short) var_13)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 8388607LL))))), (var_0)))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_21 ^= ((/* implicit */short) (((~(var_4))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2] [i_2] [i_2 + 1] [i_2])) | (((/* implicit */int) arr_10 [i_2] [i_2] [i_2 + 1] [i_2 + 1])))))));
                        arr_14 [i_2] [i_0] [i_0] [i_0] [12] [i_3] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [i_2] [(_Bool)1])) || (var_19)))), (-8388635LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_4 [i_2 - 3] [i_2 - 1] [i_2 - 1])))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_22 += ((/* implicit */unsigned char) ((arr_3 [i_4]) ? (((unsigned int) arr_4 [i_0] [18U] [i_4])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 8323072U))))))));
                var_23 = ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_8)))));
            }
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 4294967295U);
                var_25 += ((((/* implicit */int) arr_2 [i_0] [i_0])) < (((/* implicit */int) arr_2 [i_0] [i_5])));
                var_26 = ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        {
                            var_27 |= ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_5] [i_6 + 1] [i_0]);
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 23U)) : (-8388613LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_7]))) : (arr_24 [i_0] [(short)3] [i_7] [i_6]))))));
                        }
                    } 
                } 
            }
            for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (0ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))), (((/* implicit */long long int) var_13))));
                            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))) : ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                        }
                    } 
                } 
                var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_29 [i_1])), (var_2)))) ? (((/* implicit */unsigned long long int) 0U)) : (max((((/* implicit */unsigned long long int) ((short) 15U))), (((18446744073709551613ULL) >> (((arr_15 [i_0] [i_8] [i_1] [4]) - (57520087524657662ULL)))))))));
            }
            var_32 = ((/* implicit */int) ((((/* implicit */long long int) (-(arr_1 [i_0])))) & ((-(var_11)))));
        }
        for (unsigned short i_11 = 3; i_11 < 21; i_11 += 2) 
        {
            var_33 = ((((/* implicit */_Bool) (unsigned short)65523)) && (((/* implicit */_Bool) ((long long int) (!(var_1))))));
            var_34 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)0))));
        }
        for (unsigned int i_12 = 1; i_12 < 21; i_12 += 2) 
        {
            var_35 -= ((short) ((((/* implicit */_Bool) max((5U), (((/* implicit */unsigned int) var_17))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 2])))));
            arr_40 [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4294967291U) : (((4294967285U) << (((/* implicit */int) (_Bool)1))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_12] [i_12 - 1])) : (var_2))))));
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    {
                        var_36 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_34 [i_0] [(signed char)2] [(signed char)2]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_13] [i_13]))) & (9223372036854775805LL))))) & (((/* implicit */long long int) ((/* implicit */int) var_18)))));
                        arr_46 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (((unsigned long long int) (unsigned short)65535))));
                        /* LoopSeq 4 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_49 [i_0] [7] [i_12] [i_0] [i_0] = ((/* implicit */unsigned short) arr_47 [i_0] [i_0] [i_12] [i_13] [i_13] [i_14] [i_15]);
                            arr_50 [i_15] [i_12] [i_14] [i_14] [i_13] [i_12] [i_0] = ((/* implicit */unsigned int) arr_20 [i_12] [i_12] [i_14] [i_14]);
                        }
                        for (signed char i_16 = 0; i_16 < 23; i_16 += 4) 
                        {
                            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) arr_47 [i_0] [i_12 + 1] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (_Bool)1))));
                            arr_54 [i_0] [i_12] [i_13] = (unsigned short)65535;
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 23; i_17 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) var_16))));
                            var_40 -= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)110)) | (((/* implicit */int) (_Bool)1))));
                            arr_58 [i_12] [i_12 + 1] [i_13] [i_0] [i_14] = ((/* implicit */unsigned long long int) ((var_2) >> (((/* implicit */int) var_19))));
                        }
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) arr_44 [i_12] [i_12])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (21U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(unsigned char)12] [i_12])))))) : (max((-1LL), (9223372036854775807LL)))))));
                            arr_61 [i_0] [i_12] [i_12] [i_13] [i_14] [i_18] = ((/* implicit */long long int) arr_27 [i_0] [i_0] [i_13] [8LL]);
                        }
                    }
                } 
            } 
        }
        var_42 = ((/* implicit */unsigned long long int) var_14);
    }
    for (int i_19 = 0; i_19 < 25; i_19 += 1) 
    {
        var_43 = ((/* implicit */short) ((unsigned short) arr_63 [i_19] [i_19]));
        arr_64 [i_19] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min(((signed char)0), (var_15)))) ? (var_6) : (((/* implicit */long long int) 32767)))), ((~(((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_6)))))));
        arr_65 [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) var_9)))))) ? (((/* implicit */int) ((short) (short)32757))) : (((/* implicit */int) min((((/* implicit */signed char) ((var_1) && (((/* implicit */_Bool) var_12))))), (arr_63 [i_19] [i_19]))))));
        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_19) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [(short)14] [i_19])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) arr_63 [(_Bool)1] [i_19])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)))) : (max((arr_62 [2ULL]), (arr_62 [10LL]))))))));
        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / ((~(((/* implicit */int) var_17))))))) ? (min((((((/* implicit */_Bool) arr_62 [18U])) ? (var_4) : (((/* implicit */unsigned long long int) arr_62 [10U])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_62 [18]))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)(-32767 - 1))), (arr_62 [12LL])))))))));
    }
    var_46 -= ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_15)))))))) ? (((((/* implicit */_Bool) 1LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (signed char)96))))) : (((((/* implicit */_Bool) (short)32742)) ? (((/* implicit */unsigned long long int) 1U)) : (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))));
    var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) var_13))));
}
