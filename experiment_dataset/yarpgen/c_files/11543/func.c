/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11543
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_15);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) : (arr_0 [i_0]))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (signed char)-124))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (arr_0 [i_0])))))));
            var_19 = ((/* implicit */unsigned int) ((short) max((524287ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))));
        }
        /* LoopSeq 2 */
        for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            arr_10 [i_0] [i_2] &= ((/* implicit */unsigned char) (~(arr_8 [i_2 + 1] [i_2] [i_2 - 1])));
            arr_11 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_13))))))) / (max((((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))), (arr_9 [i_0] [i_2] [(signed char)12])))));
        }
        for (signed char i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) arr_2 [i_0]))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_13 [i_3 - 3])))))))));
            arr_15 [i_0] [i_3] = ((/* implicit */int) 18446744073709027354ULL);
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 3) 
            {
                var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) min((arr_4 [i_0]), (((/* implicit */unsigned char) var_13)))))))), ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [(unsigned char)5])) : (((/* implicit */int) arr_7 [(_Bool)1]))))))));
                var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) (+(var_11)))) / (max((arr_9 [i_0] [1U] [i_4]), (((/* implicit */long long int) (unsigned short)54446)))))), (((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (unsigned char)159)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_0] [i_3] [i_4])), (arr_1 [12U])))))))));
                var_23 = ((/* implicit */long long int) arr_17 [4ULL]);
            }
            for (unsigned char i_5 = 2; i_5 < 10; i_5 += 3) 
            {
                var_24 = arr_9 [10LL] [i_3] [i_5 + 2];
                arr_20 [i_5] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))), (min((0ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_2 [i_0])), ((unsigned char)247))))))));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (0ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : ((~(9223372036854775807LL))))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    var_26 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (419238327191963074ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1011108146U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_16 [i_0] [i_3 + 1] [i_0]))))))), (((/* implicit */unsigned long long int) ((arr_21 [i_5 + 3] [i_3] [i_5 - 1] [i_3 - 3]) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 419238327191963091ULL)))))) : (((arr_14 [i_0] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_3]))))))))));
                    var_27 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_13 [i_0]))))));
                }
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */_Bool) (((+((+(((/* implicit */int) arr_2 [i_5 + 2])))))) * ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)223))))))));
                    arr_25 [i_0] [(unsigned short)5] [(unsigned short)5] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                }
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                {
                    arr_28 [i_0] [i_3] [0LL] [i_8] [i_3 - 1] [i_0] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_7 [(signed char)6])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_16 [(short)6] [(unsigned char)6] [(unsigned char)6])))) | (((/* implicit */int) ((signed char) var_17))))), (((/* implicit */int) max((arr_22 [i_0] [i_3 + 1]), (arr_22 [i_0] [i_3 + 1]))))));
                    var_29 = (+(((/* implicit */int) ((_Bool) arr_1 [i_0]))));
                }
                /* LoopSeq 4 */
                for (unsigned int i_9 = 2; i_9 < 12; i_9 += 1) 
                {
                    var_30 = ((((unsigned int) (!(((/* implicit */_Bool) var_0))))) != ((+(min((var_11), (((/* implicit */unsigned int) var_8)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 1; i_10 < 12; i_10 += 2) 
                    {
                        arr_33 [(unsigned char)2] [i_3 + 2] [i_9] [i_3 + 2] [i_10] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_21 [i_0] [i_3] [i_0] [7])))), (((/* implicit */int) (unsigned char)65))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_9 - 2] [i_9] [i_9] [i_9] [i_9]))) | (((2175965395U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                        var_32 = (+(((/* implicit */int) arr_17 [i_0])));
                        arr_34 [(_Bool)1] [i_3 + 2] [i_5] [12LL] [i_9] = (+(min((((/* implicit */unsigned int) ((unsigned char) (unsigned short)23304))), (4015510576U))));
                    }
                    arr_35 [i_0] [i_0] [i_5] [i_9 + 1] [i_9] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_21 [i_9] [(short)4] [i_9 - 1] [i_9]), (arr_21 [(short)4] [i_9] [i_9 - 1] [i_9 - 2])))), (((((/* implicit */_Bool) (~(5127989117181825686ULL)))) ? (min((11783048264320717257ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                    arr_36 [i_0] [i_3 + 1] [i_9] [i_5] [i_5] [i_9] = ((/* implicit */long long int) arr_3 [(signed char)12]);
                }
                for (int i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
                {
                    var_33 += ((((/* implicit */int) min((arr_30 [i_3 - 2] [i_3] [i_3 - 3] [i_5 + 1] [i_5 + 3] [i_5]), (arr_30 [i_3 - 2] [i_3] [i_3 - 3] [i_5 + 1] [9U] [3U])))) == (((((/* implicit */_Bool) arr_19 [i_0])) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_13)))));
                    var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(max((var_17), (arr_18 [(_Bool)1] [(unsigned char)7] [i_5 - 1] [(unsigned char)11]))))))));
                }
                for (int i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned char) ((short) ((arr_0 [i_5 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3 - 1] [i_3 - 2]))))));
                    var_36 = ((/* implicit */unsigned char) (((-(arr_19 [i_3]))) <= ((+(((/* implicit */int) ((short) arr_32 [i_0])))))));
                    arr_43 [(_Bool)1] [i_3 - 3] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -4484567385422101373LL)) ? (((/* implicit */int) ((5127989117181825678ULL) < (((/* implicit */unsigned long long int) 4015510573U))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_42 [i_0] [i_3 - 1] [i_5 + 1] [i_12]))))))));
                    var_37 += ((/* implicit */unsigned short) max((((/* implicit */int) (!(arr_29 [i_0] [i_3] [i_5])))), ((-(((/* implicit */int) arr_21 [(unsigned char)7] [i_3] [i_5] [i_5 - 2]))))));
                    arr_44 [i_0] [i_3] [i_5] [i_12] = ((/* implicit */int) ((signed char) ((arr_18 [i_3 - 1] [i_3 + 1] [i_5 + 2] [i_5 + 2]) | (arr_18 [i_3 + 2] [i_3 + 1] [i_5 - 2] [i_5 + 3]))));
                }
                /* vectorizable */
                for (signed char i_13 = 3; i_13 < 12; i_13 += 1) 
                {
                    var_38 -= ((arr_30 [i_0] [i_3] [(signed char)3] [i_13 - 1] [i_3] [i_5 + 1]) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) 4015510576U)) : (6663695809388834359ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_21 [(unsigned char)0] [(_Bool)1] [i_5] [i_5 + 1]))));
                    arr_48 [i_13] [i_3] [i_3] [i_13 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)32))));
                    var_39 = ((/* implicit */signed char) (+(((/* implicit */int) arr_23 [i_13 - 1] [i_3 - 1] [i_5 + 1] [4ULL]))));
                }
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_31 [(signed char)12] [i_0] [i_0] [i_3 - 1] [i_5] [i_5] [i_0]))))), (5127989117181825680ULL))))));
            }
            arr_49 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_3] [i_3])) && (((/* implicit */_Bool) arr_37 [9LL] [i_0] [i_0] [(unsigned char)2]))))), (max((var_11), (279456733U)))))) ? (((5296887314177395847ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (4239665508175403783ULL)))) ? (((/* implicit */int) min(((unsigned short)33940), (((/* implicit */unsigned short) arr_21 [(short)7] [(signed char)2] [i_0] [i_3 - 3]))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_15))))))))));
        }
    }
    var_41 += ((/* implicit */signed char) (((-(min((11783048264320717256ULL), (((/* implicit */unsigned long long int) var_7)))))) >= (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? ((+(13318754956527725935ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)113)), (var_1))))))));
}
