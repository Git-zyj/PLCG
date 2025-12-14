/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141101
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)18))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-8574137632145321688LL)))) ? (881581045884515893ULL) : ((+(881581045884515893ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_5 [6]))));
        arr_7 [i_1] = ((/* implicit */short) arr_4 [12LL]);
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */int) (((-(var_3))) | (((/* implicit */unsigned long long int) (~(arr_9 [(unsigned char)23] [i_2] [i_2]))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                arr_12 [i_1] [(_Bool)1] [i_2] [(unsigned char)7] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_9 [i_1] [(unsigned char)11] [i_3])) >= (((((/* implicit */_Bool) -4433806905906971242LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (arr_4 [(unsigned char)5])))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_3))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_18 *= ((/* implicit */unsigned char) ((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_1]) : (arr_3 [i_4]))))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (-4364700015544853956LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9))) : (arr_9 [i_1] [i_2] [i_3])))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        var_20 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_2));
                        var_21 += ((/* implicit */unsigned int) ((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned char)130))))))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_5] [(unsigned char)8] [i_5 - 2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5 - 2] [i_5]))) : (arr_15 [14LL] [8LL] [i_5] [i_5] [i_5 - 2]))))));
                    }
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)1)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_2))) : (var_11))))));
                }
                for (unsigned char i_6 = 1; i_6 < 22; i_6 += 2) 
                {
                    arr_22 [i_1] [(unsigned char)23] [(unsigned char)23] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) 17565163027825035713ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_6] [i_6] [i_6 + 2] [i_6] [i_2]))) : (881581045884515893ULL)));
                    arr_23 [i_1] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */_Bool) (~(((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_2] [(_Bool)1] [i_6 + 1])))))));
                    arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 2])) ? (arr_10 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 2]) : (((/* implicit */int) var_13))));
                }
            }
            for (long long int i_7 = 1; i_7 < 23; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_8 = 2; i_8 < 22; i_8 += 1) /* same iter space */
                {
                    arr_29 [i_1] [i_2] [i_7] [i_7 - 1] [i_7 - 1] [i_8 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_7 - 1] [i_7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_8 [i_2]) : (var_9)))) : (arr_18 [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_8] [i_8 - 2])));
                    arr_30 [3U] [3U] [i_2] [(unsigned char)15] [i_8 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_7])) ? (((/* implicit */int) var_6)) : (arr_21 [18ULL] [i_2] [i_7] [i_8])))) ? (((((/* implicit */_Bool) arr_5 [(unsigned char)19])) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned char)112)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255))))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(arr_18 [i_7 + 1] [i_1] [(_Bool)1] [(unsigned char)19] [(unsigned char)19]))))));
                }
                for (unsigned char i_9 = 2; i_9 < 22; i_9 += 1) /* same iter space */
                {
                    var_25 -= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)143)) >> (((((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_7] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) - (31039)))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((long long int) (unsigned char)143)))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [10U] [10U] [10U] [13] [i_9 + 2] [i_9])) ? (((/* implicit */int) arr_13 [i_7] [6U] [i_7 + 1] [i_7] [i_9 + 1] [i_9])) : (((/* implicit */int) arr_13 [i_2] [i_7] [i_9] [i_9] [i_9 + 2] [i_9])))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) arr_28 [i_1] [i_2] [i_7] [i_2]))));
                }
                for (short i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    var_29 = ((/* implicit */unsigned char) var_4);
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)112)) ? (-5214548306070692387LL) : (((/* implicit */long long int) 4294967295U))));
                }
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_1] [1ULL] [1ULL] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (881581045884515893ULL))))))));
            }
        }
        for (long long int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
        {
            arr_38 [i_1] = ((/* implicit */unsigned int) var_7);
            arr_39 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) var_5)) : (arr_10 [i_1] [i_11] [i_11] [i_11]))))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) -146854705)) : (var_3)))) ? (arr_4 [i_11]) : (((/* implicit */long long int) ((var_5) ? (arr_10 [i_1] [i_1] [i_11] [(signed char)17]) : (((/* implicit */int) (short)-1)))))));
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(_Bool)1] [i_1] [i_1] [i_11]))) : (arr_8 [i_11])))))))));
        }
        for (long long int i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [15LL])) ? (((/* implicit */long long int) arr_3 [i_1])) : (4188145078782269648LL)));
            var_35 = ((/* implicit */unsigned short) (unsigned char)255);
            var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */int) arr_26 [i_12])) | (((/* implicit */int) arr_26 [i_1]))))));
            var_37 = ((/* implicit */long long int) 1079677312U);
        }
        arr_43 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_12)) ? (arr_36 [i_1] [i_1]) : (((/* implicit */int) var_0))))));
        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 881581045884515875ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [(unsigned char)21])))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_9)) : (881581045884515876ULL))) : (((/* implicit */unsigned long long int) arr_40 [i_1] [i_1])))))));
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        for (signed char i_14 = 1; i_14 < 9; i_14 += 2) 
        {
            for (long long int i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                {
                    arr_50 [(unsigned char)8] [(unsigned char)8] [i_14 + 2] [i_15] = ((/* implicit */unsigned char) var_10);
                    arr_51 [i_13] [(unsigned short)10] [(short)7] [9ULL] |= ((/* implicit */int) var_4);
                    var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) min(((((!(var_5))) ? (max((((/* implicit */long long int) var_6)), (arr_4 [i_13]))) : ((+(var_11))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) arr_26 [i_13]))))))))))));
                    var_40 = ((/* implicit */int) ((((var_12) > (((/* implicit */unsigned long long int) arr_37 [i_14] [i_14])))) ? (((/* implicit */long long int) (-(arr_21 [i_14 + 1] [i_14] [i_14] [i_14])))) : (arr_37 [19U] [i_14])));
                }
            } 
        } 
    } 
    var_41 += min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_2)) : (var_12)))) ? (((/* implicit */int) ((_Bool) var_3))) : ((~(((/* implicit */int) var_0))))))));
    var_42 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (1641562620U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_6)) - (31054)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_4))))) : (((unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
}
