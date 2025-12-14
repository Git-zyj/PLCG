/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162362
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_3 [15ULL] [i_0] = ((/* implicit */long long int) var_0);
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : ((((~(arr_0 [i_0]))) ^ (4294967295U)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_3] [5ULL] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_4 - 1]))) : (arr_5 [i_3]))))));
                        }
                        arr_18 [(unsigned short)10] [i_1] &= ((/* implicit */unsigned long long int) (~(0U)));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */_Bool) var_8);
    }
    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) /* same iter space */
    {
        var_14 = ((unsigned int) arr_12 [0ULL] [(signed char)14] [(signed char)14] [i_5]);
        arr_21 [i_5] = ((/* implicit */unsigned long long int) ((long long int) 4294967294U));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) == (((/* implicit */int) var_5)))) || (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_3))) | (((/* implicit */int) arr_1 [(unsigned char)18] [i_5 + 1]))))))))));
    }
    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (arr_11 [i_6 + 1] [(short)6] [(short)6] [i_6 - 1]) : (((/* implicit */int) arr_24 [4])))) ^ (((/* implicit */int) var_6))))) || ((!(((/* implicit */_Bool) arr_19 [(_Bool)1])))))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_1))));
        arr_25 [i_6] = ((/* implicit */unsigned short) arr_13 [i_6] [i_6 - 1]);
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        var_18 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_7]))));
        var_19 &= ((/* implicit */long long int) arr_19 [i_7]);
        var_20 = ((/* implicit */unsigned long long int) arr_29 [i_7] [i_7]);
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
        {
            arr_33 [i_7] [i_7] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_13 [i_7] [i_8])));
            arr_34 [10ULL] [10ULL] [i_8] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_8])) || (((/* implicit */_Bool) arr_26 [i_7] [i_8])))))));
            var_21 = ((/* implicit */unsigned long long int) 43669169U);
        }
        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [(_Bool)1] [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_28 [i_7] [i_9]))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((signed char) arr_8 [5LL] [i_11])))));
                        arr_42 [i_11] [(unsigned char)10] [i_7] [i_9] [i_9] [i_7] &= ((/* implicit */unsigned char) var_8);
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967293U)) ? (arr_9 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
                    }
                } 
            } 
            arr_43 [0ULL] = ((/* implicit */_Bool) ((long long int) var_2));
        }
        for (signed char i_12 = 1; i_12 < 9; i_12 += 2) 
        {
            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_29 [i_7] [i_12 + 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                var_26 = ((/* implicit */long long int) var_11);
                var_27 = ((/* implicit */int) ((((/* implicit */int) arr_45 [i_12] [i_13])) == (((/* implicit */int) ((short) 2U)))));
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((long long int) arr_39 [i_12 + 2] [(signed char)4] [i_12 + 1])))));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)3051)) & (((/* implicit */int) (unsigned char)194))));
                /* LoopSeq 3 */
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    arr_50 [i_7] [i_12] [0ULL] [(short)0] &= ((unsigned long long int) arr_29 [i_14] [i_7]);
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */int) arr_46 [i_12 + 1])) <= (((/* implicit */int) arr_46 [i_12 + 1])))))));
                    arr_51 [i_14] [i_14] [i_14] [(unsigned char)0] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                }
                for (short i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-10709)) ? (((((/* implicit */_Bool) 37669334U)) ? (((/* implicit */int) (unsigned short)3559)) : (((/* implicit */int) (unsigned char)100)))) : (((/* implicit */int) arr_36 [7] [i_12 - 1] [i_13]))));
                    var_32 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_12 + 1] [i_12]))));
                    var_33 = ((/* implicit */signed char) (~(((/* implicit */int) arr_28 [i_12 + 1] [i_12 + 1]))));
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_12 - 1]) : (arr_9 [i_13])));
                }
                for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    var_35 = ((/* implicit */signed char) ((17983971733007437734ULL) / (((/* implicit */unsigned long long int) arr_10 [i_12 - 1] [i_16] [i_13] [i_7]))));
                    arr_57 [10U] [2LL] [2LL] [10ULL] [i_16] [i_16] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_54 [i_12 - 1] [i_12 + 2] [i_12 - 1] [i_12] [i_12 + 1]))));
                }
            }
        }
    }
    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) var_11))));
    var_37 = ((/* implicit */int) 4294967289U);
}
