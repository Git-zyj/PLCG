/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154679
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
        arr_4 [i_0] [2ULL] &= ((((((/* implicit */_Bool) ((unsigned long long int) 4294967295U))) ? (min((240824694U), (((/* implicit */unsigned int) (short)-2049)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-30))))) && (((/* implicit */_Bool) arr_6 [i_1])))))) > (((((/* implicit */_Bool) var_4)) ? (arr_9 [i_1] [i_2] [(unsigned short)16]) : (arr_9 [(_Bool)1] [i_2] [i_1])))));
            var_20 = ((/* implicit */_Bool) ((arr_9 [i_1] [i_2] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                arr_14 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (((-(arr_5 [i_3]))) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_1] [i_3] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)255))))));
                var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_3] [(unsigned char)6] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10)))))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_6 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(short)12] [i_2] [i_3 + 1])) ? (var_15) : (arr_8 [i_1] [i_3] [i_3]))))));
                var_22 &= ((/* implicit */int) (signed char)127);
                var_23 = ((/* implicit */short) var_15);
                var_24 ^= ((/* implicit */unsigned long long int) ((long long int) arr_9 [i_2 - 3] [18LL] [18LL]));
            }
            var_25 += ((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2 + 1]);
        }
        for (long long int i_4 = 4; i_4 < 20; i_4 += 1) 
        {
            var_26 = ((/* implicit */int) (!((_Bool)1)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_5 = 4; i_5 < 18; i_5 += 1) 
            {
                var_27 = ((/* implicit */signed char) var_12);
                var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_4))))) && (((((/* implicit */int) arr_16 [i_1] [20ULL])) > (((/* implicit */int) var_3))))));
            }
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_13 [i_1] [i_1] [i_8] [i_1])), ((unsigned char)102)))) : (((/* implicit */int) (short)-2044))))) / (max((((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_11))))), (((arr_26 [i_1] [i_4] [i_6] [i_7]) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                            var_30 += ((/* implicit */long long int) ((unsigned long long int) var_9));
                            arr_32 [i_8] [i_8] = ((/* implicit */long long int) max(((((((~(((/* implicit */int) arr_30 [i_1])))) + (2147483647))) >> (((arr_6 [i_4 - 4]) - (6995109284065957150ULL))))), (((/* implicit */int) ((unsigned char) var_1)))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) max(((unsigned char)153), (arr_31 [i_8] [i_7] [i_6] [17LL] [i_1])))), (((var_9) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) arr_24 [i_1] [i_4] [i_1] [i_7] [i_7] [i_8]))))))) > (((((-608780218) > (((/* implicit */int) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_14)))));
                            var_32 -= ((/* implicit */long long int) (+(((/* implicit */int) ((short) var_3)))));
                        }
                    } 
                } 
                arr_33 [i_1] [i_4] [i_4] [i_6] = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) min((arr_24 [19ULL] [i_1] [i_4] [i_4] [i_4] [i_4]), (((/* implicit */signed char) var_16))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-1)), (1167574929U)))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) arr_21 [i_1] [i_1] [i_6] [i_1]))))))));
                var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))) / (((/* implicit */int) max((var_11), (arr_19 [0U] [(unsigned short)16] [i_6 + 1])))))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) var_10)))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    for (unsigned short i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        {
                            arr_43 [i_1] [i_11] [i_11] [i_9] [5] = ((/* implicit */int) ((unsigned long long int) var_13));
                            var_35 = ((/* implicit */unsigned long long int) ((var_16) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)2044))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */signed char) ((var_15) + (var_12)));
            }
        }
        for (long long int i_12 = 3; i_12 < 18; i_12 += 3) 
        {
            var_37 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_1] [10ULL] [10ULL] [i_1])))))) * (var_1)));
            var_38 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2045))) ^ (((var_8) + (((/* implicit */unsigned long long int) arr_23 [i_12] [i_1] [i_12] [i_1])))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_12]) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))))))));
        }
        var_39 = ((/* implicit */unsigned short) arr_17 [i_1] [4] [i_1]);
    }
    var_40 = ((/* implicit */short) (((~(-350063925182010699LL))) < (((/* implicit */long long int) 27449975U))));
    var_41 -= ((/* implicit */_Bool) var_7);
    var_42 -= min((((/* implicit */int) var_7)), ((~(((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)6597)))))));
}
