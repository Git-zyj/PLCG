/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132205
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_11 = ((((arr_0 [i_0]) / (var_10))) % (((min((arr_0 [i_0]), (((/* implicit */int) var_9)))) & (((/* implicit */int) var_2)))));
        var_12 = ((/* implicit */short) 4294967285U);
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1]))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) -2147483633)) ? (9223372036854775807LL) : (arr_5 [i_1]))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)20))))) : ((-(arr_1 [i_1])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_8 [i_2]);
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((var_8), (((((-246712036042585730LL) > (arr_8 [i_2]))) ? (max((arr_1 [i_2]), (var_8))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (var_5))))))))));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    {
                        var_16 ^= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) max(((unsigned short)16128), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5]))) <= (var_1)))))));
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_11 [i_4 + 2] [i_4 + 2]))));
                            var_18 |= ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967285U))))), ((-9223372036854775807LL - 1LL))));
                            var_19 = ((/* implicit */long long int) max((var_19), ((-(246712036042585725LL)))));
                            arr_23 [i_2] [i_4] [i_3] [i_4] [(_Bool)1] [i_4] = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (+(var_10)))), (min((arr_10 [i_2] [(_Bool)1] [i_6]), (((/* implicit */unsigned long long int) var_10)))))));
                        }
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_20 = (~(max((246712036042585730LL), (((/* implicit */long long int) arr_21 [(signed char)0] [i_5] [i_4 + 1] [i_3] [i_2])))));
                            arr_26 [i_7] [i_4] [i_4] [i_4] [(unsigned char)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_4 + 2] [i_4 + 2] [i_4 + 2] [8U] [i_4] [i_4] [i_4])) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) arr_22 [i_4])), ((signed char)-1)))) != ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((/* implicit */int) (signed char)0))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [9LL])) || (((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_9 [11]))))))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */int) ((var_0) != (((/* implicit */int) min(((short)-1), (((/* implicit */short) (signed char)-127)))))))), (((((/* implicit */int) arr_11 [i_2] [i_3])) / (-2147483633))))))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 14; i_8 += 4) 
                        {
                            arr_29 [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(_Bool)1] [i_4] [i_5] [i_8]))) % (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)16128)), (70368744177663LL)))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(unsigned char)2] [i_3] [i_4] [i_3])))))));
                            var_22 = ((/* implicit */long long int) ((int) arr_9 [i_4]));
                            var_23 = var_4;
                        }
                        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_20 [i_4 + 2] [i_4] [i_4] [i_4]))) * (max((arr_20 [i_4 + 2] [i_4] [i_4] [i_4]), (((/* implicit */long long int) arr_28 [(unsigned short)15] [i_2] [i_4] [i_4 - 1]))))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) + (var_3))))));
                    }
                } 
            } 
            var_26 = (+(2147483647));
            var_27 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_21 [i_3] [i_3] [i_2] [i_2] [i_2])), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2] [(signed char)14] [(unsigned short)8] [i_3])))))) ^ (arr_16 [15] [i_3])))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_28 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_9] [i_9] [9] [i_9])))))) | (((((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2] [i_2])) | (var_5))))), (((/* implicit */unsigned long long int) (+(arr_16 [i_2] [i_2]))))));
            var_29 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) arr_31 [i_9]))), (min((((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_2))))), (min((246712036042585725LL), (((/* implicit */long long int) 1158686439))))))));
        }
        for (long long int i_10 = 2; i_10 < 12; i_10 += 2) 
        {
            arr_36 [i_2] [i_2] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_2]))));
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)0))))) + (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_10] [i_10 - 2] [i_10] [i_10 + 3]))) / (var_1))))))));
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((~(4294967295U))) >> (((((((/* implicit */_Bool) var_8)) ? (arr_1 [i_2]) : (8796093022207ULL))) - (10609841756898394083ULL)))))) == (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) + (6026716423015765032ULL))), (((((/* implicit */unsigned long long int) var_6)) + (var_8)))))));
            var_32 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((signed char) arr_19 [i_11])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 4) 
            {
                var_33 |= var_6;
                var_34 = max((((unsigned short) (!(((/* implicit */_Bool) arr_20 [i_2] [i_11] [i_12 + 1] [i_12]))))), (((/* implicit */unsigned short) max((arr_31 [i_12 + 2]), (((/* implicit */signed char) arr_40 [i_12] [i_11] [i_11 - 1]))))));
                arr_41 [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_11 - 1] [i_12 - 1] [i_12] [(signed char)1])) ? (((/* implicit */long long int) var_6)) : ((+(((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_11] [i_12 - 1] [i_11])))))))));
                var_35 *= ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [(unsigned short)8]);
                var_36 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2] [10] [i_2] [i_2]))) + (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_2]))) + (arr_30 [5LL] [i_12]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_12 + 2] [i_11] [(unsigned short)13] [i_11 - 1])))))));
            }
            for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned int) arr_30 [i_2] [i_11]);
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) arr_28 [i_2] [i_11 - 1] [i_11] [i_14]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    var_39 ^= (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_24 [10U] [i_16] [6] [4])) | (((/* implicit */int) arr_40 [i_2] [i_2] [i_2])))))));
                    var_40 |= ((/* implicit */signed char) ((arr_1 [i_13]) % (((/* implicit */unsigned long long int) arr_14 [i_2] [i_11] [i_13] [i_16]))));
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) var_8))));
                    var_42 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8191)) ^ (((/* implicit */int) arr_40 [i_2] [i_2] [i_11 - 1]))))), (var_6)));
                }
                for (unsigned char i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    arr_54 [i_17] [i_11] [i_11] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_30 [i_2] [(unsigned short)3])) && (((/* implicit */_Bool) arr_47 [i_11] [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1])))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (0U))) : (4294967273U)));
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 4; i_18 < 15; i_18 += 4) 
                    {
                        arr_57 [i_2] [2U] [i_11] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_8)))) ? (((((/* implicit */_Bool) arr_15 [i_11])) ? (((/* implicit */int) arr_28 [i_18] [i_17] [i_13] [i_2])) : (((/* implicit */int) arr_40 [i_2] [14U] [i_17])))) : (arr_44 [i_13] [i_11])))));
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) == (((/* implicit */int) ((arr_20 [i_18 - 1] [i_18 - 2] [i_11 - 1] [i_11 - 1]) >= (arr_20 [i_18 - 3] [i_18 - 1] [i_11 - 1] [i_11 - 1]))))));
                    }
                    var_44 *= ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1)))))));
                    arr_58 [i_11] [i_11] [i_13] [i_17] [(_Bool)1] = ((/* implicit */unsigned int) var_9);
                }
                /* LoopNest 2 */
                for (unsigned short i_19 = 3; i_19 < 14; i_19 += 2) 
                {
                    for (long long int i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        {
                            var_45 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 5971657880943038501LL)) || (((/* implicit */_Bool) (unsigned char)0))))) + (((/* implicit */int) arr_31 [i_13]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_11] [i_20] [i_11 - 1] [i_11]))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_49 [i_11 - 1] [i_19] [i_11 - 1] [i_11 - 1] [i_2]))))), (max((((/* implicit */long long int) var_0)), (-5774499935196794459LL))))));
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_20] [i_20] [i_19] [i_19] [i_11] [i_11] [1U])) << (((var_5) - (11370868818347030700ULL)))))) | (var_1)));
                            arr_63 [i_2] [i_11] [i_2] [i_2] = ((/* implicit */signed char) arr_21 [i_2] [(unsigned short)5] [i_13] [i_19 + 2] [i_20]);
                        }
                    } 
                } 
            }
        }
    }
    var_47 = ((/* implicit */unsigned int) ((int) min((var_5), (((/* implicit */unsigned long long int) var_7)))));
}
