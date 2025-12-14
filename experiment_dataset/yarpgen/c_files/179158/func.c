/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179158
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) : (-981492353))), ((+(((/* implicit */int) (unsigned short)12))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_2 + 1])) > (((var_12) ^ (0LL))))))) : (((((/* implicit */_Bool) 1U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4049)))))));
                        var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)26)), (((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 1] [i_0])) ? (((/* implicit */long long int) arr_8 [i_0] [i_2 + 1] [i_0])) : (var_2)))));
                        arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1])) ? (min(((+(arr_9 [i_0]))), (((unsigned int) (unsigned char)63)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32754)))))) == (var_5)))))));
                        var_15 = ((/* implicit */signed char) (+(((arr_8 [i_0] [i_2 - 1] [i_2 - 1]) | (arr_8 [i_0] [i_2 - 1] [i_2 - 1])))));
                        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0]))))) >= (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_3 [i_0] [i_3]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)93)), (arr_4 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2])) ? (9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201)))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))));
        arr_12 [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (12828924481396834033ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 10)) : (arr_3 [i_0] [i_0])))) ? (max((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)45790)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)45790)))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13827183321616632147ULL)));
        var_18 = ((arr_9 [i_4]) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)73)) < (((/* implicit */int) (signed char)111)))))));
        var_19 = ((/* implicit */long long int) ((unsigned char) var_7));
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 2) 
            {
                {
                    arr_21 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */short) 4294967283U);
                    var_20 ^= ((/* implicit */signed char) (short)32767);
                    var_21 ^= (+(arr_8 [i_6] [i_5] [i_5 + 1]));
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            var_22 += ((/* implicit */long long int) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1])))));
            var_23 ^= ((/* implicit */signed char) (+(max((arr_5 [i_8]), (arr_5 [i_7])))));
            arr_27 [i_7] [i_7] [i_8] = ((/* implicit */short) (-(9020099437285855791LL)));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (unsigned int i_10 = 2; i_10 < 14; i_10 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 2; i_11 < 16; i_11 += 4) 
                        {
                            var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_9])) | (((/* implicit */int) arr_23 [i_7]))))) ? (((/* implicit */int) min((arr_23 [i_7]), (arr_23 [i_8])))) : (((/* implicit */int) arr_23 [i_7]))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned char)126))))) ? (min((((/* implicit */int) arr_31 [i_7] [i_10 + 1] [i_7] [i_8] [i_11 + 1])), (arr_30 [i_11 - 1] [i_7] [i_11 - 1]))) : (((((/* implicit */_Bool) arr_30 [i_11 - 1] [i_7] [i_11 - 2])) ? (((/* implicit */int) arr_23 [i_11 - 1])) : (((/* implicit */int) arr_23 [i_11 - 1]))))));
                        }
                        var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(max((arr_26 [i_8] [i_9] [i_10]), (((/* implicit */unsigned long long int) -1847061758435742097LL))))))) ? ((+((~(((/* implicit */int) (signed char)-112)))))) : ((+(((/* implicit */int) ((_Bool) (signed char)-64)))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-1847061758435742105LL)))) ? (min((4294967295U), (((/* implicit */unsigned int) ((_Bool) (-9223372036854775807LL - 1LL)))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1847061758435742081LL))))), ((unsigned char)242)))))));
        }
        for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 2) 
        {
            arr_38 [i_7] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) arr_32 [i_7] [i_7] [i_7] [i_7])), (arr_9 [i_7])))));
            var_28 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) var_4)) + (33554431U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_12]) >= (var_4)))))))));
        }
        for (int i_13 = 2; i_13 < 16; i_13 += 2) 
        {
            var_29 = ((/* implicit */int) ((-6927715259913703783LL) | (-4347233967557106634LL)));
            var_30 += ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)35)) ? ((+(((/* implicit */int) arr_33 [i_13 - 1] [i_13] [i_7] [i_7])))) : (arr_1 [i_7])))));
            var_31 ^= ((/* implicit */unsigned char) ((signed char) ((arr_32 [i_7] [i_7] [i_13] [i_7]) < (((/* implicit */int) ((unsigned char) 281470681743360LL))))));
            var_32 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-113))))), (max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)178)))), (((/* implicit */unsigned long long int) arr_24 [i_7])))));
        }
        var_33 = ((/* implicit */signed char) ((int) (short)-14992));
        var_34 ^= ((/* implicit */_Bool) (unsigned char)54);
        arr_41 [i_7] = (+(((((/* implicit */_Bool) arr_39 [i_7] [i_7] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58704))) : (arr_8 [i_7] [i_7] [i_7]))));
        var_35 ^= ((/* implicit */unsigned char) (+(arr_9 [i_7])));
    }
    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_3)) : ((+(min((-2464862738813659932LL), (((/* implicit */long long int) (short)-13213)))))))))));
    var_37 = ((/* implicit */short) var_1);
    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))));
}
