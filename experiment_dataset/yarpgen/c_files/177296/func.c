/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177296
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
    var_13 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))) & (((((/* implicit */int) var_10)) - (((/* implicit */int) var_5)))))) / (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (max((var_7), (((/* implicit */unsigned short) var_11)))))))));
    var_14 -= ((((/* implicit */int) var_6)) <= (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) * (((/* implicit */int) var_2)))));
    var_15 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned short)28197)))), (((/* implicit */int) (short)-24653))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_16 -= ((/* implicit */int) var_11);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned short) var_12);
                var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_6), (var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) min((var_5), (((/* implicit */signed char) var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)66)) <= (1952078474)))) : (((/* implicit */int) max((arr_0 [i_0 - 2]), (((/* implicit */unsigned short) var_0)))))))));
                /* LoopSeq 3 */
                for (short i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    var_19 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 - 2] [i_3 + 2])) ? (((/* implicit */int) var_2)) : (var_8))))));
                    var_20 = ((_Bool) (unsigned short)55133);
                    arr_9 [i_2] [i_2] [i_0] [i_1] [0ULL] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1 + 2] [(_Bool)1] [i_1 + 2] [i_3 - 1]);
                    var_21 = ((/* implicit */unsigned char) min(((short)-1), ((short)63)));
                }
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [(unsigned short)5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))) >= (((((/* implicit */int) var_2)) - (((/* implicit */int) var_5))))))) < (((/* implicit */int) ((short) var_5)))));
                        var_22 *= ((/* implicit */_Bool) ((var_8) | (((/* implicit */int) var_0))));
                        arr_17 [i_0 - 3] [i_0 + 1] [i_2] [i_4] [15] [(unsigned char)14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [18ULL])) * (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_4] [i_5])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 1] [(unsigned char)3] [(unsigned char)3] [i_0 - 2])))))) >= (((/* implicit */int) var_2))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_1] [(unsigned char)21] [i_1] [12ULL] [i_0] [i_0])) : (max((((((/* implicit */int) var_4)) - (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_6 [i_4] [i_2] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 23; i_6 += 1) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_2] [i_4] [i_4] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_4] [i_2] [i_0 - 3])) / (((/* implicit */int) arr_6 [i_2] [i_1 - 1] [12ULL]))));
                        arr_22 [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >= (((/* implicit */int) var_4))));
                    }
                    arr_23 [i_4] [i_2] [i_1] [(signed char)23] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_0 - 2] [i_4] [i_4] [i_4] [i_2] [i_2])))), (((/* implicit */int) (!(var_11)))))))));
                }
                for (unsigned char i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    arr_27 [i_0] [i_1] [(unsigned short)18] [i_7] = max((((unsigned long long int) ((short) var_0))), (((/* implicit */unsigned long long int) ((arr_13 [i_0 - 1] [i_1 + 3] [i_7 + 2] [(_Bool)1]) / (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_2)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 3; i_8 < 23; i_8 += 2) 
                    {
                        arr_30 [i_8 - 3] [i_8] [i_8] [21ULL] [i_8] = ((/* implicit */short) min((((((var_11) || (((/* implicit */_Bool) arr_25 [i_0 - 3] [i_0 - 3] [(unsigned char)18] [i_8])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_12)))), (max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) arr_1 [i_0 + 1]))))));
                        arr_31 [14LL] [i_8] [i_7] [(signed char)8] [i_1 + 4] [(signed char)8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) max((arr_12 [i_2] [i_2] [(unsigned short)20] [12ULL]), (((/* implicit */unsigned short) arr_10 [i_7] [(_Bool)1] [i_8]))))), (max((((/* implicit */int) var_4)), (var_8)))))) ? (((((/* implicit */int) min((var_12), (var_0)))) * ((+(((/* implicit */int) var_4)))))) : (((/* implicit */int) var_0))));
                    }
                }
            }
            var_24 = ((/* implicit */short) ((_Bool) var_1));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0 + 1] [i_1] [i_1] [i_0 + 1]))))))))) ? (((/* implicit */int) arr_15 [i_0] [(unsigned short)5] [i_0] [i_0 + 1] [i_1] [i_0])) : (max((((/* implicit */int) max((((/* implicit */short) arr_8 [(_Bool)1] [(signed char)5] [i_1] [(signed char)5] [(signed char)5] [i_0])), (arr_20 [i_1 - 2] [i_0 - 3] [i_0])))), (var_8))))))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_26 = var_3;
            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 1952078475)) <= ((-9223372036854775807LL - 1LL)))) || (((/* implicit */_Bool) var_2))));
        }
        var_28 *= ((/* implicit */unsigned int) min(((~((~(((/* implicit */int) var_6)))))), (((/* implicit */int) min((max((((/* implicit */unsigned short) arr_33 [i_0] [i_0 + 1])), (arr_29 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))), (((/* implicit */unsigned short) arr_20 [i_0 - 3] [i_0 + 1] [i_0 - 3])))))));
    }
    var_29 = (((+(((/* implicit */int) min((var_9), (var_4)))))) * (((/* implicit */int) var_3)));
}
