/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100110
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
    var_18 = ((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)47)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) var_13)) == (((/* implicit */int) ((var_16) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(signed char)0])))))))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9203)) ? (arr_2 [(signed char)18]) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)18247)))) : (((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)18] [(short)18]))))))))));
            arr_5 [12] |= ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1]))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14831)) ? (((/* implicit */int) (short)-18247)) : (((/* implicit */int) (unsigned short)35482))))) && (((/* implicit */_Bool) var_5))));
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    var_22 ^= ((/* implicit */short) arr_10 [(short)6] [(short)6] [i_2] [i_3]);
                    arr_12 [i_0] [(short)18] [i_3] [(short)18] |= ((/* implicit */long long int) ((short) (short)25502));
                }
                arr_13 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned int) arr_2 [i_0]));
            }
        }
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            arr_16 [i_0] = ((/* implicit */_Bool) ((signed char) var_15));
            var_23 -= ((/* implicit */long long int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6))))) >= (var_9)));
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                arr_20 [(unsigned short)8] &= ((/* implicit */unsigned char) ((short) (_Bool)1));
                var_24 |= ((/* implicit */short) (signed char)97);
            }
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_25 ^= arr_0 [(signed char)16] [i_4];
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) arr_31 [i_0 + 2] [i_7 + 2] [i_7 + 2] [i_7] [i_8]);
                            arr_32 [i_6] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) - (((((/* implicit */_Bool) (short)-22583)) ? (((/* implicit */int) (unsigned short)30053)) : (((/* implicit */int) (unsigned char)255))))));
                        }
                    } 
                } 
                var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_9 [12] [i_4] [(unsigned char)12]))) ? (((((/* implicit */_Bool) arr_31 [i_0] [i_0] [17ULL] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29973))) : (var_1))) : (arr_11 [i_0] [i_0] [0LL] [0LL] [6LL] [i_0])));
            }
            for (short i_9 = 2; i_9 < 21; i_9 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    arr_38 [i_4] [(signed char)12] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8582)) ? (arr_14 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_10])))))) ? (((arr_8 [i_10] [i_10] [13U] [i_10]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0])) * (((/* implicit */int) (short)0)))))));
                    arr_39 [i_10] [i_0] [0LL] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_6);
                }
                for (unsigned int i_11 = 4; i_11 < 21; i_11 += 1) 
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_0 + 1] [i_11 - 4])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_30 [i_0] [i_4] [i_9] [i_0] [i_11])))) : (((/* implicit */int) arr_36 [16LL] [16LL] [16LL] [(short)13] [i_11] [16LL]))));
                    var_29 = ((/* implicit */short) -5357823731644262806LL);
                    var_30 = ((/* implicit */unsigned char) ((arr_7 [i_0 + 1] [i_9 - 2] [i_0]) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_0] [i_0] [0LL] [i_0] [i_0])) * (((/* implicit */int) (short)-25774)))))));
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((_Bool) arr_27 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)122)) ? (arr_7 [18ULL] [18ULL] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9] [i_4] [i_4] [i_4]))))))))));
                }
                for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_4] [i_0] [i_0])))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_9] [i_0] [i_0])))))));
                    arr_45 [i_9] [i_9] [i_4] [i_9] |= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_17 [19ULL] [19ULL] [i_9] [19ULL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_9] [i_9] [i_9] [i_9]))))));
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)7545)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_29 [i_9 - 2] [i_9 - 2] [i_0 - 1] [i_0] [i_0 + 1])))))));
                }
                var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))));
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (short)11671)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_9] [i_9] [i_4] [i_9])))))))));
            }
            arr_46 [(unsigned char)20] |= ((/* implicit */unsigned int) arr_35 [i_0] [i_0]);
        }
        for (short i_13 = 1; i_13 < 21; i_13 += 1) 
        {
            arr_49 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (signed char)32))));
            var_36 = ((/* implicit */unsigned long long int) ((short) (signed char)108));
        }
    }
    var_37 = ((/* implicit */unsigned char) ((min((var_1), (min((((/* implicit */long long int) (unsigned short)26146)), (var_9))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (short)-11672))) ? (((/* implicit */int) (short)-18248)) : (((/* implicit */int) (short)(-32767 - 1))))))));
}
