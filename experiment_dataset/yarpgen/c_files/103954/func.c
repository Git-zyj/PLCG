/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103954
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
    var_13 = ((/* implicit */unsigned char) min(((((~(var_11))) - (-6111800998452406694LL))), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                var_15 = max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_1]) : (var_7)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) : (var_10))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) (signed char)-1))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) | (var_12)))) ? (((/* implicit */int) arr_6 [i_2])) : (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (signed char)12))))))));
        arr_8 [i_2] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) arr_5 [i_2])), (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_2])))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_16 -= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)176)))))));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                arr_15 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))) < (24U))) && (((/* implicit */_Bool) (unsigned char)78))))), ((((-(((/* implicit */int) arr_5 [i_2])))) | (((/* implicit */int) min(((short)-10655), (((/* implicit */short) (unsigned char)0)))))))));
                var_17 = var_8;
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (short)-477))));
            }
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_3])) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) arr_13 [i_3] [i_5]))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_11 [i_6])) : (((/* implicit */int) arr_9 [i_6] [i_5] [i_3]))));
                            arr_23 [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_10 [i_2] [i_3] [(short)5])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5])))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) arr_21 [i_2] [i_3] [i_5] [i_5] [i_5] [i_6] [(unsigned char)9])) : (((/* implicit */int) arr_12 [i_3])))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_3] [(unsigned char)5] [i_2] [(unsigned char)16] [i_5] [i_3]))) | (arr_14 [i_2] [i_3])));
                arr_24 [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_5]))));
                var_23 = var_10;
            }
            for (long long int i_8 = 4; i_8 < 16; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 17; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8 + 2] [i_3] [i_9 + 1]))) + (arr_17 [i_8 + 2] [i_8 - 2] [i_9 + 1])))) ? (arr_18 [i_8 + 2] [i_8 - 2] [i_9 + 1]) : (max((var_12), (arr_17 [i_8 + 2] [i_8 - 2] [i_9 + 1])))));
                            arr_31 [13LL] [i_3] [i_2] [i_9] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-477))))) ? (((/* implicit */int) arr_10 [i_2] [i_3] [i_10])) : ((~(((/* implicit */int) arr_6 [i_2])))))) % (((/* implicit */int) (signed char)5))));
                            var_25 = ((/* implicit */unsigned int) arr_6 [i_2]);
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (short)-13366))));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((long long int) 3988981291U)) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)12))) & (12LL)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 1446017237U)) || (((/* implicit */_Bool) (short)-27894))))), (((((/* implicit */_Bool) (short)-477)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))))))) : (((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) (signed char)-14))))) : (((((/* implicit */_Bool) arr_10 [i_8] [i_3] [i_2])) ? (var_11) : (0LL)))))));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_27 [i_2])), (arr_29 [i_8] [i_3] [i_3] [i_2])))) ? (min((((/* implicit */long long int) (unsigned char)96)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (short)-8192)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4103))) : (((((/* implicit */_Bool) arr_29 [i_2] [i_3] [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))) : (arr_18 [i_2] [i_2] [i_8 - 4])))));
            }
            for (short i_11 = 2; i_11 < 14; i_11 += 4) 
            {
                var_29 = ((/* implicit */short) min((min((arr_18 [i_11 + 3] [i_11 - 1] [i_11 - 1]), (var_7))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_11 - 2] [i_11 - 1] [i_11 - 1]))) - (arr_18 [i_11 - 1] [i_11 - 1] [i_11 + 1])))));
                var_30 = ((((((/* implicit */_Bool) arr_28 [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) arr_28 [i_3] [i_3] [i_2])))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) ^ (var_2)))) ? (((/* implicit */long long int) arr_22 [i_11 + 2] [i_11] [i_11] [i_11] [i_11])) : (max((((/* implicit */long long int) var_12)), (-1LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            }
            for (short i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                arr_36 [i_2] [i_3] [i_12] [i_12] = ((/* implicit */signed char) arr_12 [i_3]);
                var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((3209207182049341314LL), (-15LL))))));
                arr_37 [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_12] [i_2])) || (((/* implicit */_Bool) arr_29 [i_12] [i_12] [i_3] [(unsigned char)17])))))))));
            }
            arr_38 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_3] [i_2] [i_2] [i_2]))) : (arr_34 [i_2] [i_3] [i_3] [i_3])))) ? (((/* implicit */int) arr_10 [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_6 [i_2]))));
            var_32 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_2]))));
        }
        arr_39 [6LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13))))) | (((/* implicit */int) ((signed char) var_4))))) : (((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */int) arr_13 [i_2] [i_2])) : (((/* implicit */int) arr_13 [i_2] [i_2]))))));
    }
    var_33 = min((max((((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3))))), (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) var_4)), (var_2)))))));
}
