/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18594
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
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((/* implicit */int) var_1)) - (61)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_1]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                var_14 = ((/* implicit */unsigned char) (+(var_8)));
                var_15 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2])) <= (((((/* implicit */int) var_0)) << (((arr_0 [i_1]) - (1782773995U)))))));
            }
            /* LoopSeq 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_3 [i_0]))));
                arr_10 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) max((((/* implicit */unsigned int) var_2)), (var_6)))));
                arr_11 [i_0] [1ULL] [i_3] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_9 [i_1]))))) : (1740342167U)))), ((+((+(var_5)))))));
            }
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                arr_16 [i_4] [i_0] [i_1] [2ULL] = ((/* implicit */unsigned short) var_9);
                /* LoopSeq 3 */
                for (signed char i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    arr_19 [i_1] [i_4] [(signed char)8] |= ((/* implicit */signed char) (((-(((/* implicit */int) arr_9 [i_5 + 2])))) - ((-(((/* implicit */int) var_9))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_0] [i_0]))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6473436912338661008ULL)) ? (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-17533)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_12 [i_0] [i_4]))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_0] [i_1] [17U]))))) : (((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */long long int) var_7)) : (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) ((_Bool) var_9)))));
                    arr_23 [i_0] [8LL] [i_4] [i_4] [i_6] = var_12;
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_22 [i_0]))));
                        arr_31 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_4] [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((/* implicit */long long int) arr_20 [(short)4] [i_1] [(_Bool)1] [(short)4] [i_7])) > (var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((-(((/* implicit */int) var_0)))))))));
                    }
                    arr_32 [i_7] [(short)18] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_25 [i_4] [i_4] [i_4]));
                }
                arr_33 [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_21 [i_0] [(unsigned char)6] [i_4] [(unsigned char)6] [i_4])) ? (arr_29 [i_4] [i_4] [i_4] [i_1] [i_4] [(short)9] [i_4]) : (arr_29 [i_0] [i_0] [i_0] [i_1] [(signed char)23] [(signed char)23] [i_4]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                arr_34 [i_4] [(short)3] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) arr_9 [i_0])), ((~(((/* implicit */int) arr_9 [i_0]))))));
            }
            var_23 = ((min((((/* implicit */unsigned long long int) var_1)), (min((((/* implicit */unsigned long long int) var_1)), (6740515452184981241ULL))))) / ((+(((((/* implicit */_Bool) arr_7 [i_0] [(signed char)16])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)22]))))))));
            arr_35 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (short)17532)) + (((/* implicit */int) (signed char)63))))));
        }
        /* vectorizable */
        for (long long int i_9 = 2; i_9 < 23; i_9 += 4) 
        {
            var_24 = ((/* implicit */short) (~(((/* implicit */int) arr_21 [i_0] [i_9 - 2] [i_9] [i_0] [i_9 + 1]))));
            arr_39 [(signed char)11] [(signed char)11] [(signed char)11] = ((/* implicit */int) var_4);
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    {
                        arr_46 [i_11] [i_10] [i_10] [i_10] [(unsigned char)22] = ((/* implicit */long long int) arr_42 [i_0] [i_0] [(signed char)8] [i_0] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 1; i_12 < 22; i_12 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) (unsigned char)8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))))));
                            arr_49 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */int) (unsigned char)72);
                            arr_50 [i_0] [i_10] [i_10] [i_0] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_12 - 1] [i_11] [i_9] [i_9]))));
                            var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)35434)) : (((/* implicit */int) var_1)))) - (35412)))));
                        }
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0] [8ULL])) ? (((/* implicit */int) arr_30 [(short)8] [i_0] [i_0] [i_0] [(short)8])) : (((/* implicit */int) arr_30 [20ULL] [20ULL] [i_0] [i_0] [(signed char)16]))))));
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            arr_53 [22LL] [i_0] [i_13] |= ((/* implicit */signed char) ((unsigned char) arr_9 [(signed char)3]));
            var_28 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_42 [i_13 + 1] [i_13 + 1] [i_0] [i_0] [i_0] [i_0])))) | (((unsigned int) var_8)))));
        }
    }
    var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (short i_14 = 0; i_14 < 15; i_14 += 1) 
    {
        arr_56 [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
        arr_57 [i_14] [i_14] = ((/* implicit */unsigned int) ((unsigned char) arr_5 [i_14] [i_14] [i_14] [i_14]));
    }
    /* vectorizable */
    for (unsigned char i_15 = 2; i_15 < 10; i_15 += 2) 
    {
        arr_60 [i_15 + 1] = ((/* implicit */unsigned short) arr_47 [i_15] [i_15]);
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 2) 
        {
            for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) arr_28 [i_15] [i_17]))) : (var_7)));
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_42 [i_17] [i_17] [i_16] [i_16] [i_15] [i_15]))))) != (var_8)));
                }
            } 
        } 
    }
}
