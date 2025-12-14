/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180512
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((_Bool) var_4);
        var_12 = ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? ((+(max((((/* implicit */unsigned int) (unsigned char)94)), (3600670303U))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) | (var_4)))));
        var_13 &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (max((var_6), (((/* implicit */long long int) (unsigned char)161)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))))));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_3 = 2; i_3 < 14; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                var_14 += ((/* implicit */signed char) ((unsigned short) ((((unsigned int) arr_13 [(unsigned short)7] [i_3] [i_3])) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))));
                var_15 = ((/* implicit */short) arr_2 [(short)4] [(_Bool)1]);
                var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_4 [i_3 - 1] [(signed char)8])) ? (((/* implicit */int) arr_9 [i_2] [i_3 + 1] [i_4 - 1])) : (max((((/* implicit */int) var_10)), (1661712690))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_7 [i_2] [i_4])))) || (((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 + 3] [i_4 + 2])))))));
                arr_15 [i_2] [(_Bool)0] = ((/* implicit */unsigned short) (unsigned char)116);
            }
            for (short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                var_17 *= ((/* implicit */short) max((((/* implicit */unsigned int) ((int) -9223372036854775805LL))), (arr_2 [i_5] [i_5])));
                /* LoopNest 2 */
                for (long long int i_6 = 4; i_6 < 12; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            var_18 = arr_13 [i_3] [i_5] [(unsigned short)2];
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)69)))))) : (((/* implicit */int) (unsigned char)95)))))));
                            var_20 = ((/* implicit */signed char) max(((-(((unsigned int) arr_21 [i_2] [1ULL])))), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) (-(var_2)))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (17511004247495177825ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187)))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
            var_22 = ((/* implicit */signed char) max(((unsigned char)221), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [4U])))))));
        }
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            arr_29 [(short)8] [(short)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_27 [i_8] [i_2] [i_2]) - (arr_27 [i_8] [i_8] [i_2])))) ? (((/* implicit */int) max((var_0), (((/* implicit */short) (_Bool)0))))) : ((+(((/* implicit */int) var_9))))));
            arr_30 [i_2] [(unsigned char)0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (var_4) : (max((((/* implicit */unsigned int) (unsigned short)65535)), (4294967283U)))))));
            arr_31 [6] [(short)0] [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94))) == (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_7))))) ? (arr_21 [i_2] [i_8]) : ((-(var_4)))))));
        }
        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_10 = 3; i_10 < 13; i_10 += 2) /* same iter space */
            {
                var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 2607600425U)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (unsigned char)69))));
                arr_36 [(unsigned short)6] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_10])) ? (arr_1 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? ((-(var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_10]) > (arr_1 [i_10])))))));
            }
            /* vectorizable */
            for (signed char i_11 = 3; i_11 < 13; i_11 += 2) /* same iter space */
            {
                arr_39 [i_2] [14] [(short)14] = ((/* implicit */short) ((((/* implicit */int) (signed char)111)) | (((/* implicit */int) arr_12 [i_11 + 2] [i_11 + 2] [i_11 - 3]))));
                var_24 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_8))));
            }
            arr_40 [i_9] [(_Bool)1] [(signed char)7] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((var_5) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2]))) : (max((935739826214373803ULL), (((/* implicit */unsigned long long int) 1518500810U))))))));
        }
        for (int i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            arr_44 [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_6)))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (arr_19 [i_2] [i_2] [i_2] [i_12] [(_Bool)1] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4095)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                arr_49 [i_13] [i_13] [i_12] [10U] |= ((/* implicit */int) arr_47 [i_2] [7U] [i_12] [i_12]);
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_7))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_13] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 65472U)) : (17511004247495177825ULL))))))));
                var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_42 [i_2] [i_2] [i_13]))));
            }
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_12])) ? ((~(var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
            arr_50 [(unsigned short)13] [(unsigned char)12] |= ((/* implicit */long long int) max((var_8), (var_1)));
        }
        var_29 = ((/* implicit */signed char) max((var_29), (((signed char) ((((/* implicit */int) arr_25 [i_2])) ^ (arr_11 [i_2] [7U]))))));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) arr_42 [(unsigned char)12] [i_2] [i_2]))));
        arr_51 [i_2] [8ULL] |= ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [(short)1] [3U] [(signed char)12])) : (((/* implicit */int) var_7))))), (((unsigned int) (short)-15)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [5U] [i_2])) && (((/* implicit */_Bool) var_8)))))));
    }
    var_31 &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (unsigned char)61)))))) ? ((-(var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_3))))) <= (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))) != (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (var_2)))))));
    var_33 = ((/* implicit */int) var_2);
}
