/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147256
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((74889672U), (((/* implicit */unsigned int) (unsigned char)119))))) ? (((long long int) (unsigned char)133)) : (((/* implicit */long long int) -657467666))))))));
    var_16 |= ((/* implicit */unsigned int) min((max((max((-657467647), (((/* implicit */int) (unsigned char)154)))), (((((/* implicit */int) (signed char)17)) * (((/* implicit */int) var_5)))))), (((/* implicit */int) min(((unsigned short)3066), ((unsigned short)21067))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((int) (unsigned short)12968));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_17 -= ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) arr_6 [i_0 + 2] [(unsigned short)11] [(unsigned short)11])) : (657467698)))), (((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2262885055U)) ? (-657467644) : (657467666))) > (((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) (unsigned char)137)) : (8381491))))))));
            arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [11] [i_0 + 2])), (arr_0 [(unsigned short)9] [(unsigned short)9])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (arr_2 [i_0]))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_1] [i_1])))))) ? (max((((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max(((unsigned char)7), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0]))))))));
            arr_9 [8ULL] [8ULL] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_5 [(unsigned short)6])) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) (unsigned char)122)) | (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_2)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) | (arr_2 [i_0])))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_3 = 4; i_3 < 13; i_3 += 3) 
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned char)186))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_0]))) : (((arr_10 [i_0]) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : (var_0)))));
                arr_14 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (((arr_6 [10ULL] [i_2] [i_3 + 1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)90))))));
            }
            /* LoopNest 3 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0 + 2] [(_Bool)1]), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))) / (((var_1) ? (arr_15 [i_5] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(signed char)7] [i_2] [i_2] [7ULL] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_4 - 1] [8ULL] [i_5] [i_4 - 1]))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) arr_12 [i_0] [4])) : (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_18 [i_0] [i_2] [i_0] [12U]))))) * (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_2] [i_2] [i_2]))))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_21 [i_0] [i_2] [i_4] [i_0] [i_6])) : (((/* implicit */int) var_6))))) ? (max((((/* implicit */long long int) 1182095093)), (-6560636888392137688LL))) : (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0 - 1])), (1182095093))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-42))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (15511812246722872525ULL))))) : (((((/* implicit */_Bool) -1940519024)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) 9223372036854775792LL)))))))));
                            arr_24 [i_0] [i_2] [i_0] [(unsigned char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 15ULL)) ? (13144265799002263865ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (13144265799002263883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (max((((((/* implicit */_Bool) arr_17 [i_4] [i_6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)15)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) var_5)))))) : (max((((int) 673259820763630822ULL)), (((/* implicit */int) (signed char)87))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((var_14) ? (65504) : (((/* implicit */int) arr_20 [i_6] [(_Bool)1] [i_0] [i_0]))))) : ((((_Bool)0) ? (-3657108834926927707LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) -657467666)) ? (((/* implicit */int) ((signed char) (short)7))) : (((/* implicit */int) (unsigned short)61270)))) : (min((((arr_10 [i_0]) ? (var_11) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_12 [i_5] [i_5])) : (((/* implicit */int) var_12)))))))))));
                        }
                    } 
                } 
            } 
        }
        arr_25 [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)122))) ? (((((_Bool) (unsigned char)196)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -6309872297086495583LL)) ? (-1182095093) : (((/* implicit */int) arr_12 [i_0] [i_0]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_18 [(_Bool)1] [0LL] [i_0] [(_Bool)1]))) % (-9223372036854775782LL))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-47)) ? (4051762473U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1112872327U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_7])) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL))))) : (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7]))) : (11ULL)))));
        var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551606ULL)))) ? (((((/* implicit */_Bool) arr_26 [i_7] [(unsigned char)14])) ? (((/* implicit */int) arr_27 [6ULL])) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) arr_27 [(unsigned short)10])) ? (((/* implicit */int) (signed char)36)) : (var_0)))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((signed char) ((int) var_8))))));
        var_24 ^= ((/* implicit */signed char) ((_Bool) ((_Bool) arr_27 [20ULL])));
    }
}
