/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159773
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((1250220360U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [21U] [i_2 + 1]))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [(unsigned char)13] [(unsigned char)13] [i_2] [i_3]))))) / (((((/* implicit */_Bool) arr_2 [10LL] [10LL])) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))))) ? (var_9) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_0] [24ULL] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) (-((+(max((arr_2 [i_4] [4LL]), (((/* implicit */unsigned long long int) (signed char)-16))))))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_13 [i_0 - 1] [i_2 - 1] [i_2] [i_3] [(signed char)20]))));
                            arr_17 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = arr_3 [i_0 - 1] [i_0 - 1] [19U];
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3 - 1] [i_0] = ((/* implicit */long long int) arr_2 [i_2 - 2] [i_4 - 2]);
                            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (3224703393U)));
                        }
                    }
                    var_18 = ((/* implicit */unsigned long long int) (+((+(max((-1871558048), (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [(signed char)6] [i_0]))))))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_6 [i_5]))));
                    var_20 ^= ((/* implicit */signed char) ((arr_2 [i_5] [i_0 - 1]) + (arr_2 [i_0] [i_0 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_10 [i_5] [i_1 - 1]))));
                        arr_24 [i_0] = ((/* implicit */_Bool) var_3);
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) (-((+(16777215)))));
                            var_23 += ((/* implicit */_Bool) var_9);
                            var_24 *= ((/* implicit */unsigned short) ((arr_27 [i_0]) ? (((/* implicit */unsigned long long int) ((arr_19 [i_0] [i_1] [i_1] [i_0]) ^ (var_8)))) : (((((/* implicit */_Bool) 426911823292717856LL)) ? (arr_26 [i_7] [(signed char)18] [i_0] [i_7] [i_7]) : (arr_26 [i_7] [i_7] [21LL] [i_7] [i_7])))));
                        }
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) (_Bool)1))));
                    }
                }
                for (signed char i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) min((max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)22))))), (var_5))), (((/* implicit */unsigned int) arr_11 [14ULL] [i_1] [i_8] [i_8])))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 635002685405554571LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)24)))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_8])) ? (arr_21 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                }
                for (signed char i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_28 = arr_15 [24] [24] [24] [i_10] [24];
                                var_29 = ((/* implicit */unsigned int) ((signed char) max((((int) var_13)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [(unsigned char)7] [i_1 + 1] [18U] [i_10] [i_11] [i_11]))))))));
                                var_30 += ((/* implicit */short) -5612875219737646314LL);
                                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_15)), (var_1)))), (arr_19 [i_0] [i_9] [i_10] [i_11]))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (+((-(0U))))))));
                }
                /* LoopSeq 1 */
                for (short i_12 = 2; i_12 < 24; i_12 += 1) 
                {
                    var_33 = ((/* implicit */unsigned short) max((var_33), (var_1)));
                    arr_41 [i_0] [i_1] [i_0] = max((((/* implicit */long long int) (unsigned short)24639)), (0LL));
                    /* LoopNest 2 */
                    for (long long int i_13 = 4; i_13 < 22; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 23; i_14 += 2) 
                        {
                            {
                                var_34 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)11508)), (arr_25 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((var_7) ^ (((/* implicit */int) var_3))))) : (arr_19 [i_14 + 2] [6LL] [i_1] [i_0]))))));
                                var_35 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))));
                                var_36 = ((/* implicit */unsigned short) (((+(((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)(-127 - 1))))))) * (((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)54)), (var_3))))))));
                                var_37 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) 1516835281)) ? (((/* implicit */unsigned long long int) arr_25 [i_13] [i_0] [i_0])) : (var_14))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15071)) ? (arr_47 [i_13] [i_13] [23LL] [i_13 - 4] [i_13 - 1]) : (-3400826036573382104LL))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */long long int) ((var_9) + (((/* implicit */int) var_3))))) == (12LL)))), ((unsigned char)165)));
                    /* LoopNest 2 */
                    for (signed char i_15 = 2; i_15 < 22; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            {
                                arr_53 [i_15] [i_15 + 1] [i_12] [i_15] [i_15] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [13ULL] [i_1] [i_12] [i_12] [i_16]))));
                                arr_54 [i_1] [i_1 + 1] [i_12] [(unsigned short)11] [i_0] [i_15] [i_0] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 + 1])))));
                                arr_55 [i_0] [i_12] [i_12 - 2] [i_0] [i_12] = ((/* implicit */unsigned int) var_11);
                                arr_56 [i_0] [i_0] [i_0] [i_15] [i_16] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_39 = 2105391455196124215LL;
    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_7), (((/* implicit */int) var_15)))) + ((~(((/* implicit */int) var_11))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)97)))))));
    var_41 = ((/* implicit */short) var_3);
}
