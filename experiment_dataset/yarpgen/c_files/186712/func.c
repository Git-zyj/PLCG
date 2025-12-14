/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186712
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
    var_17 ^= ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) var_14))) % (((((/* implicit */_Bool) -1440368630)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6057)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [(unsigned char)5] = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) var_7)))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((signed char) (signed char)-111)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), ((unsigned short)4))))) : (var_1))) * (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)106)), (arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_19 = ((/* implicit */long long int) ((signed char) ((long long int) var_0)));
            arr_6 [i_0] [i_1] = ((signed char) ((unsigned long long int) ((3015366428U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((-1440368625), (((/* implicit */int) (signed char)-89))))) <= ((((_Bool)1) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (arr_12 [i_3] [i_2] [i_0] [i_2] [i_0])))));
                        var_21 -= ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_17 [i_0] [i_4] [i_4] = var_15;
            arr_18 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1644376194)) && (((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) (unsigned short)8160)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [7] [6LL]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106)))));
            var_22 += ((/* implicit */signed char) arr_11 [i_0] [i_4]);
            var_23 -= ((/* implicit */signed char) arr_0 [i_0]);
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
            {
                var_24 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_11 [i_4] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_4] [(unsigned char)6]))) : (var_5))))));
                arr_21 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((short) arr_13 [i_0] [i_0] [i_5]));
            }
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
            {
                arr_25 [i_0] [(_Bool)1] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))) != (var_5))))) <= (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))) : (0LL)))));
                arr_26 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)171)) || (((/* implicit */_Bool) arr_0 [i_0])))))) | (((var_16) | (var_5)))));
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (var_11) : (((/* implicit */unsigned long long int) arr_7 [i_6] [i_0] [i_0]))))) ? (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [8U]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_4] [8LL]))))))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((unsigned char) var_13)))));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (!(((((/* implicit */int) var_9)) < (((/* implicit */int) var_9)))))))));
                }
                for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    arr_31 [i_8] [i_6] [i_6] [i_6] [i_4] [i_0] = ((/* implicit */_Bool) (short)26801);
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_29 [i_8] [i_6] [i_4])) == (383088090U))))));
                        var_29 = ((/* implicit */long long int) ((unsigned short) arr_28 [i_8] [i_6] [i_4] [i_0]));
                        var_30 *= ((/* implicit */unsigned int) var_7);
                        arr_35 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [i_0] [9] [i_6] [5])) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((int) (signed char)127))) : (((arr_20 [i_0] [i_9] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_9])))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_31 = ((((/* implicit */int) arr_28 [4LL] [4LL] [i_6] [i_6])) > (((/* implicit */int) (unsigned char)154)));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (-555823692) : (((/* implicit */int) var_9))))) < (((long long int) arr_5 [i_6]))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (unsigned short)63892))));
                        var_34 &= ((/* implicit */signed char) arr_23 [i_0] [i_0] [8]);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_41 [i_0] [(unsigned char)0] [i_0] [i_0] [i_11] [(signed char)5] [i_6] = ((/* implicit */signed char) ((arr_12 [i_0] [i_11] [i_6] [i_8] [i_11]) | (arr_12 [i_0] [i_11] [i_0] [i_8] [i_11])));
                        var_35 = ((/* implicit */signed char) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_11] [1] [i_0] [i_0])))));
                        arr_42 [i_11] [i_4] [i_6] [i_6] [(unsigned char)11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19986)) ? (((/* implicit */int) (short)-2965)) : (((/* implicit */int) (unsigned char)173))))) ? (((383088090U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_4] [i_4] [i_4] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63886)))));
                    }
                }
            }
        }
    }
    for (signed char i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
    {
        arr_45 [i_12] = ((/* implicit */short) max((((/* implicit */int) ((signed char) var_0))), (((((/* implicit */_Bool) 1644376194)) ? (((/* implicit */int) max((arr_38 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned short) (signed char)-50))))) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (unsigned short)63892)) : (((/* implicit */int) (unsigned short)1650))))))));
        var_36 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12517520940156009722ULL)) ? (((((/* implicit */_Bool) (short)15253)) ? (9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_12] [6U] [i_12])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_11))))) : (890936919))))));
    }
    for (signed char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
    {
        var_37 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL))))) / (((((/* implicit */_Bool) 5929223133553541896ULL)) ? (arr_47 [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_13] [i_13])))))));
        var_38 = ((/* implicit */short) (~(((((/* implicit */_Bool) max((arr_30 [i_13] [i_13] [(signed char)3] [i_13]), ((signed char)3)))) ? (((/* implicit */int) arr_28 [i_13] [i_13] [i_13] [i_13])) : (arr_23 [i_13] [i_13] [2LL])))));
    }
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 12; i_14 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_14] [5U] [i_14]))) | (((((/* implicit */long long int) arr_10 [i_14] [i_14] [i_14] [i_14])) | (arr_49 [i_14])))));
        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63918)) ? (-890936919) : (((/* implicit */int) var_4))))))))));
    }
}
