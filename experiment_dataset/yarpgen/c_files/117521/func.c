/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117521
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = arr_7 [i_0] [i_1] [i_4];
                            arr_14 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] [i_3] = (_Bool)1;
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(var_8)))) + (((/* implicit */int) (_Bool)1))));
                            arr_15 [i_4] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */_Bool) arr_0 [i_0] [i_2]);
                        }
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_2] &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_1)) <= (arr_8 [i_2]))))));
                            var_19 = ((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2]);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_7 [i_0] [i_1] [i_2];
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) var_8)))))));
                            var_21 = ((/* implicit */unsigned char) arr_5 [i_0] [i_5] [i_2] [i_3]);
                        }
                        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((arr_11 [i_1 - 2] [i_2] [i_6 + 1] [i_6 - 2] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_6 - 2]))) != (5ULL))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_1] [i_1 + 1] [i_0] [i_3] [i_1 + 1])) != (((/* implicit */int) arr_18 [i_0] [i_1 - 2] [i_1] [i_0] [i_3])))))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 1) 
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_7] [i_0] [i_7] [i_7 + 2] [i_0])) || (((/* implicit */_Bool) ((var_0) ^ (((/* implicit */int) arr_26 [i_0] [i_1] [i_2])))))));
                            var_24 = ((/* implicit */unsigned short) (~(arr_7 [i_7 + 3] [i_1 - 1] [i_1 - 1])));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((unsigned long long int) (~(arr_6 [i_7] [i_2] [i_0]))))));
                        }
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1]))) & (arr_7 [i_0] [i_1 - 2] [i_0])));
                        var_27 = ((/* implicit */_Bool) var_3);
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((unsigned int) 17339216736006434982ULL)))));
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_13))))));
        arr_30 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0])) ? (1095166924) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_9 = 1; i_9 < 22; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        {
                            var_29 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 4294967295U)) ? (99760136U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_30 = ((/* implicit */unsigned short) arr_35 [i_8]);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (9597301913925525926ULL)))) % ((~(((/* implicit */int) (unsigned short)54163))))));
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_36 [i_8] [i_9] [i_9] [i_13]))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_53 [i_8] [i_13] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_9 + 1]))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_9 - 1] [i_9 - 1] [i_13] [i_8])) ? (arr_37 [i_9 - 1] [i_9 - 1] [i_13] [i_13]) : (((/* implicit */unsigned long long int) 2306273958U))));
                        }
                    } 
                } 
            }
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_56 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])) ? (arr_56 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 - 1]) : (((/* implicit */long long int) -2087097809))));
                var_35 -= ((/* implicit */unsigned char) ((((99760136U) & (((/* implicit */unsigned int) var_3)))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9 - 1] [i_16 + 1])))));
                var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_9 + 1] [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1]))) > (arr_37 [i_8] [i_16 + 1] [i_16] [i_16])));
            }
            arr_57 [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) (~(2087097830)));
        }
        var_37 = ((((/* implicit */_Bool) 99760143U)) ? (99760131U) : (((/* implicit */unsigned int) 1477600027)));
        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1975218881U)) ? (17339216736006434982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_32 [i_8])) : (((/* implicit */int) arr_32 [i_8]))));
    }
    for (signed char i_17 = 0; i_17 < 23; i_17 += 2) /* same iter space */
    {
        arr_60 [i_17] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 882970133U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (1988693337U)))) ? (((/* implicit */unsigned long long int) 2087097823)) : (arr_44 [i_17] [i_17] [i_17]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)7018), (((/* implicit */unsigned short) ((signed char) var_9)))))))));
        var_40 = ((/* implicit */_Bool) arr_52 [i_17] [i_17] [i_17] [i_17] [i_17]);
    }
    var_41 = ((/* implicit */_Bool) var_15);
}
