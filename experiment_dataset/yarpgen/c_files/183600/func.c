/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183600
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
    var_14 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)204)) : (-971114078)))) >= (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (var_8))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */int) arr_5 [i_0])), (var_6))))) ? (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (max((((/* implicit */unsigned long long int) 1048575U)), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (min((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)10]))) : (arr_1 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(signed char)15])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_0] [(unsigned short)17] [19ULL])))))))));
                arr_6 [(short)1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_3 [(signed char)18] [(signed char)18])))), (((/* implicit */int) arr_4 [i_0] [6LL] [(unsigned short)15]))))) : ((-(arr_1 [i_0])))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_12 [4U] [i_2] [i_2] [i_2] = min((((/* implicit */unsigned char) (signed char)117)), ((unsigned char)200));
                        arr_13 [i_2] [6] = ((/* implicit */int) ((((/* implicit */int) var_4)) == (((((_Bool) var_4)) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [16ULL] [i_0] [3])))))))));
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1591550875)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)200))))) + (8388608U)))) ? (max((((/* implicit */unsigned int) max((((/* implicit */int) arr_5 [i_0])), (-1937090297)))), (((4193792U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))))))) : (((arr_5 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (2596880583U))))))));
                    }
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9546609548669330293ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (max((((/* implicit */long long int) 8191)), (arr_8 [i_2] [13LL] [i_2] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(unsigned char)14] [(unsigned char)14] [i_1] [(unsigned char)14] [i_2])) && (arr_4 [i_2] [i_1] [i_0])))))))) : (((((/* implicit */_Bool) (short)-11895)) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [0ULL] [i_1] [i_2])) : ((+(14123348667661937027ULL)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        var_18 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-69)) && (((/* implicit */_Bool) (unsigned char)226)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)13)))))) : (((((/* implicit */_Bool) (signed char)25)) ? (2048ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16)))))));
                        arr_16 [i_2] [(unsigned char)11] [(unsigned short)2] [i_4] [(short)7] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_6] [i_6])))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)200)) + (((/* implicit */int) (signed char)123))))) ? (((long long int) (unsigned char)237)) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_1] [16U] [i_0] [(unsigned char)4] [i_7])) : (((/* implicit */int) (signed char)-57)))))));
                            var_22 = ((/* implicit */short) (~(((/* implicit */int) ((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [12U] [i_1] [15LL] [(unsigned short)18] [i_2]))))))));
                            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)119))));
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_25 [i_0] [i_2] [i_0] [i_5] [11ULL])))));
                            var_25 = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
                        }
                        var_26 = ((/* implicit */unsigned char) arr_19 [i_2] [(_Bool)1] [i_2] [(unsigned char)4] [(_Bool)1] [i_5]);
                        arr_26 [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(unsigned short)20] [i_1] [i_2] [i_5] [(unsigned short)10])) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))) : ((~(15629492821354857345ULL)))));
                            var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_9 [(_Bool)1] [i_1] [4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))) ? (((/* implicit */int) (short)384)) : (((/* implicit */int) arr_14 [i_1]))));
                        }
                    }
                }
                arr_29 [i_0] = ((/* implicit */signed char) ((unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)50)))))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 17; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        {
                            var_29 -= ((/* implicit */unsigned char) ((unsigned int) (+(((((/* implicit */_Bool) arr_21 [(signed char)2] [i_9 + 2] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_25 [i_0] [i_10] [i_0] [i_9] [i_0]))))));
                            arr_34 [i_9] [(short)19] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_21 [i_9 + 3] [(unsigned char)8] [i_9])) ? (arr_10 [i_9] [i_9]) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(unsigned short)7] [(unsigned short)16] [i_1] [i_1] [i_1])))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned short)6823)) : (((/* implicit */int) (unsigned char)91)))) : (((((int) 1494961125U)) >> ((((~(((/* implicit */int) arr_20 [i_0] [18U] [18U] [(_Bool)1] [i_10])))) + (142)))))));
                            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) arr_8 [i_9] [11] [15ULL] [(unsigned char)5])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) (!(((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46698)) && (((/* implicit */_Bool) var_5))))) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)30)) < (((/* implicit */int) var_12)))))))));
    var_33 = ((/* implicit */long long int) var_1);
    var_34 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_8) - (18094084824622812110ULL)))))) % (var_13)))), ((~(15629492821354857337ULL)))));
}
