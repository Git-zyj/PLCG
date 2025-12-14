/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148029
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [21LL] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) max((arr_2 [i_0 + 2]), (var_11)))), ((-(((/* implicit */int) arr_2 [i_0 - 1]))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
                {
                    var_16 = var_0;
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) % (((((/* implicit */_Bool) (short)13514)) ? (5301070180939882642LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */long long int) var_10)) : (((5301070180939882642LL) | (-5301070180939882643LL)))));
                }
                for (signed char i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [(unsigned char)11] [i_3] [i_3] |= arr_0 [i_3];
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) var_13);
                                arr_15 [i_5] [i_4] [i_3] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) >= (((((/* implicit */_Bool) -5301070180939882642LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_1] [i_3] [i_4 + 2] [i_4 + 2]))) : (5301070180939882641LL))))))) : (((5301070180939882633LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)50)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                {
                    arr_18 [i_0 + 1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned char) ((_Bool) 5301070180939882606LL));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 24; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 3; i_8 < 24; i_8 += 4) 
                        {
                            arr_23 [(_Bool)0] [i_0] [i_1] [i_6] [i_1] [i_7 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [(short)22] [i_1] [i_8 + 1] [i_0 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)-50)))))));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [(unsigned char)7] [(unsigned char)7] [i_6] [i_7 + 1] [i_8 - 3] [i_7])) ^ (((/* implicit */int) arr_2 [i_0 + 2])))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_28 [i_9] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) -696810241)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_11 [i_1] [(unsigned char)0] [(signed char)2] [i_1] [12] [12])))));
                            var_20 = arr_26 [i_7 + 1] [i_7] [i_7 + 1] [(signed char)4] [i_1] [i_0 - 1] [i_0];
                            arr_29 [i_0] [i_1] [(unsigned char)8] [i_9] [i_9] = ((/* implicit */unsigned char) 1272459540);
                            arr_30 [(short)10] [(short)10] [i_6] [i_9] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5301070180939882645LL)) ? (((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */int) (unsigned char)6)))) : (((/* implicit */int) arr_27 [19] [i_1] [i_6] [i_6] [i_9 + 1] [i_6]))));
                            var_21 = ((/* implicit */int) ((long long int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]));
                        }
                        for (short i_10 = 1; i_10 < 21; i_10 += 4) 
                        {
                            arr_34 [i_0] [i_0] [i_0] [(_Bool)1] [i_0 - 1] = ((signed char) arr_8 [i_6] [i_1] [i_0]);
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_6 [i_10 - 1] [i_1] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) (unsigned char)160)) : ((-(var_9)))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (signed char)-50)) & (((/* implicit */int) var_4)))) : (((/* implicit */int) ((short) (unsigned char)87)))));
                        }
                    }
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        arr_37 [i_11] [i_11] = ((/* implicit */long long int) ((int) ((-5301070180939882643LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)70))))));
        var_24 |= max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_11]))))) ^ (((/* implicit */int) ((signed char) var_14)))))), (((((/* implicit */long long int) ((((/* implicit */int) var_3)) << (((arr_35 [i_11] [i_11]) - (442796998829003196LL)))))) % (((((/* implicit */_Bool) (signed char)-46)) ? (-5301070180939882641LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))))))));
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                for (signed char i_14 = 3; i_14 < 23; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            var_25 = ((/* implicit */short) 10LL);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((((/* implicit */int) (_Bool)1)) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (var_10))))), (((((/* implicit */_Bool) max((var_11), (((/* implicit */signed char) arr_12 [(signed char)8] [i_12] [i_13] [i_12] [20LL]))))) && (((/* implicit */_Bool) ((long long int) var_12))))))))));
                        }
                        var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (_Bool)1))))))) ? (max((((int) var_6)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) ((short) var_14)))));
                        var_28 = ((/* implicit */long long int) var_0);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
    {
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_19 [(signed char)21] [(signed char)18] [i_16 - 1] [i_16])) ? (((/* implicit */int) (signed char)49)) : (var_8))))))));
        var_30 = var_15;
    }
    for (signed char i_17 = 0; i_17 < 22; i_17 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_18 = 1; i_18 < 20; i_18 += 4) 
        {
            for (signed char i_19 = 4; i_19 < 19; i_19 += 1) 
            {
                {
                    var_31 = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) min(((signed char)50), (var_11))))))), (arr_20 [(signed char)17] [i_18] [i_18 - 1] [i_18])));
                    var_32 = ((/* implicit */signed char) arr_1 [i_19 - 2]);
                    var_33 ^= ((/* implicit */unsigned char) ((signed char) max((-5301070180939882640LL), (arr_21 [i_17] [i_17] [i_18 - 1] [i_18 - 1] [i_19 - 2]))));
                }
            } 
        } 
        var_34 = ((long long int) min((var_5), (((/* implicit */unsigned char) arr_22 [i_17] [i_17] [i_17] [i_17] [i_17]))));
        arr_54 [19LL] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (_Bool)1))) - (((((/* implicit */_Bool) (-(arr_21 [i_17] [i_17] [i_17] [i_17] [i_17])))) ? (((((/* implicit */_Bool) var_12)) ? (-665414136) : (((/* implicit */int) (signed char)-79)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-61)))))))));
        var_35 = ((/* implicit */signed char) min((((int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) arr_7 [i_17]))))), ((-(((/* implicit */int) min(((unsigned char)118), (((/* implicit */unsigned char) (signed char)97)))))))));
    }
    var_36 = ((long long int) max((((/* implicit */int) var_4)), ((-(var_10)))));
}
