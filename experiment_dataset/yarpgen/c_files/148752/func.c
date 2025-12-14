/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148752
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_7)));
    var_15 = ((/* implicit */short) ((unsigned short) ((_Bool) min((var_7), (((/* implicit */unsigned long long int) (unsigned char)210))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_7) : (var_11))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-1))))));
            var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_0] = (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2] [i_0] [i_0]))))) ? (((/* implicit */int) arr_5 [i_2] [i_0])) : (arr_0 [i_0]))));
            var_17 = ((/* implicit */short) max(((+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-6737)))))), ((-(((/* implicit */int) var_2))))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (min((((/* implicit */unsigned long long int) (signed char)-122)), (9680408737719583799ULL))))))));
            arr_8 [i_2] [i_2] [7U] = ((short) (_Bool)1);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0])) > (((/* implicit */int) arr_10 [i_3]))));
            var_20 = ((((/* implicit */int) arr_9 [i_0])) + (((/* implicit */int) arr_9 [i_0])));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_3))));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_22 ^= ((/* implicit */_Bool) (-(var_11)));
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned short) arr_11 [i_4 + 1] [i_5 - 1]));
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */long long int) max((((unsigned int) (short)-13878)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0])) ^ (((/* implicit */int) (unsigned short)44044)))))));
        /* LoopNest 3 */
        for (short i_7 = 1; i_7 < 11; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_14 [i_8] [i_7] [i_7 + 1] [i_7 + 1] [i_0] [i_0])) ? (-1148511693) : (((/* implicit */int) (unsigned char)236)))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) (((+(arr_24 [i_0] [i_7] [i_8] [i_9] [i_9] [i_7]))) != (((/* implicit */int) arr_23 [(unsigned char)3] [i_7] [(unsigned char)3]))));
                            var_27 = ((/* implicit */unsigned int) arr_21 [i_9] [i_7] [i_7]);
                            var_28 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                            arr_28 [i_10] [i_9] [i_0] [i_0] [i_7 - 1] [i_0] [i_0] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_10] [i_7] [i_7 + 1] [i_10] [i_10] [i_9]))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */signed char) (unsigned char)48);
                            arr_32 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_13 [i_0] [i_7 + 1] [i_7 - 1] [i_7 + 1])), (arr_15 [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1])))) ? (((/* implicit */int) ((short) arr_5 [i_0] [i_7 - 1]))) : ((+((~(((/* implicit */int) (short)29832))))))));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_29 [i_7] [i_7 + 1] [i_9] [(_Bool)1] [i_7 - 1])))) ? (min((arr_17 [i_7] [i_7 + 1]), (arr_17 [i_7] [i_7 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_30 = ((/* implicit */long long int) max((((int) arr_27 [i_7 - 1] [(_Bool)1] [i_8] [(_Bool)1])), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(unsigned short)1] [4ULL] [4ULL] [i_9] [i_11] [4ULL])) || (arr_21 [i_7] [i_7] [i_0]))))));
                            arr_33 [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_8] [(short)7] [i_8]))) - (((((/* implicit */_Bool) arr_11 [i_7] [i_7])) ? (((/* implicit */unsigned int) arr_0 [i_9])) : (2936393409U)))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))) - (var_7)))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                        {
                            arr_37 [(unsigned char)2] [i_9] [i_9] [i_9] [i_12] = ((/* implicit */unsigned long long int) var_1);
                            arr_38 [i_0] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) min((((unsigned int) arr_27 [i_7 + 1] [i_7 + 1] [i_7 + 1] [(unsigned char)3])), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [(_Bool)1] [i_7 + 1] [i_7] [i_7 - 1] [i_7])))))));
                            var_31 = ((/* implicit */short) arr_20 [i_0] [i_7 - 1] [i_12]);
                        }
                        for (short i_13 = 1; i_13 < 8; i_13 += 4) 
                        {
                            arr_41 [i_0] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_7 + 1] [i_0] [i_9] [i_0])) ? (arr_24 [i_0] [(unsigned short)4] [i_7 + 1] [i_9] [i_9] [i_13]) : (arr_24 [i_0] [i_8] [i_7 - 1] [(signed char)1] [i_9] [i_0])))));
                            var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))))))));
                            var_33 = ((/* implicit */unsigned short) max((((unsigned int) arr_16 [(signed char)10] [i_0] [i_7 + 1] [i_7] [i_13 + 3])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((11561040528814386259ULL), (((/* implicit */unsigned long long int) arr_23 [i_9] [i_8] [i_8]))))) ? (((/* implicit */int) arr_39 [i_0] [i_7 - 1] [i_8] [i_9])) : (((/* implicit */int) arr_40 [i_13] [i_13] [i_13] [i_13 + 4] [i_13] [i_13 + 4])))))));
                            arr_42 [i_9] [i_9] [i_9] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)54)) ? ((+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)0)))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)93))))));
                        }
                        var_34 = ((/* implicit */unsigned char) 2945881416002871507ULL);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 13; i_14 += 1) 
    {
        arr_46 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [(short)1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))));
        var_35 *= ((/* implicit */short) (~(((/* implicit */int) var_12))));
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                {
                    arr_51 [i_16] |= ((/* implicit */unsigned char) ((unsigned short) arr_49 [i_14] [i_15] [i_16] [i_16]));
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 13; i_18 += 1) 
                        {
                            {
                                arr_57 [i_14] [i_14] [5] [i_16] [5] [i_17] [5] = ((/* implicit */signed char) arr_49 [i_14] [(_Bool)1] [i_16] [i_17]);
                                var_36 = ((/* implicit */unsigned char) ((unsigned long long int) arr_45 [i_14]));
                            }
                        } 
                    } 
                    arr_58 [i_14] [i_14] = ((/* implicit */unsigned int) (_Bool)1);
                    var_37 = ((/* implicit */unsigned short) (+(arr_49 [i_14] [i_15] [i_14] [i_15])));
                }
            } 
        } 
    }
}
