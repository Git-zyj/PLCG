/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160267
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
    var_16 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((unsigned long long int) min(((short)-9849), (((/* implicit */short) var_0)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(7656164014673627393LL)))) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((((/* implicit */_Bool) ((arr_6 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (var_3)))) ? (((((/* implicit */_Bool) 1867252524U)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_6 [i_1]))))));
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (max((var_12), (((/* implicit */long long int) arr_6 [i_1]))))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) 1867252524U))))) ? (min((var_1), (((/* implicit */unsigned long long int) var_4)))) : (((var_1) - (((/* implicit */unsigned long long int) 2427714768U)))))) : (((/* implicit */unsigned long long int) ((long long int) ((unsigned char) 11849926702764561954ULL)))))))));
            arr_7 [i_0] = (signed char)7;
        }
        var_19 ^= ((/* implicit */long long int) ((max((max((9210360390186945147ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [1])) >> (((((/* implicit */int) arr_2 [i_0])) + (115)))))))) & (((18446744073709551587ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32747)))))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            arr_12 [2ULL] [2ULL] |= ((/* implicit */long long int) arr_0 [i_2]);
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            arr_20 [i_5] [i_5] [0ULL] [i_4] [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)69)) ? (((((/* implicit */_Bool) arr_5 [i_4] [i_5])) ? (((/* implicit */int) arr_11 [i_0] [i_3])) : (((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [7U])))))) : (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_6 [i_0]))))))));
                            arr_21 [i_5] [i_5] = ((/* implicit */long long int) ((short) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_3])))))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned long long int) ((unsigned short) ((signed char) var_12)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
        {
            arr_24 [i_6] [10] = ((/* implicit */unsigned char) ((((arr_22 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))) << (((((((/* implicit */_Bool) (~(arr_13 [i_6] [i_6] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0]))) : (max((((/* implicit */long long int) 1867252524U)), (var_6))))) - (71LL)))));
            arr_25 [i_6] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_6] [i_6])) : (((/* implicit */int) arr_5 [i_0] [6LL])))));
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                for (unsigned int i_8 = 1; i_8 < 17; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        {
                            arr_33 [(signed char)8] [i_6] [(signed char)17] [(signed char)17] [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */int) arr_32 [7U] [7U] [(signed char)6] [i_6] [i_6])) | (((/* implicit */int) var_9)))) << (((((((((/* implicit */int) arr_31 [i_0] [i_0] [i_6] [i_6] [i_6])) - (((/* implicit */int) arr_17 [(short)5] [(short)5])))) + (89))) - (8))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_2 [(short)17]))) <= (((/* implicit */int) arr_27 [i_6] [(unsigned char)15] [i_6] [i_8 + 1]))));
                            var_22 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_7] [i_9] [i_9]))))));
                        }
                    } 
                } 
            } 
            arr_34 [i_0] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [(short)5])) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_0 [i_6]))))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_6]))) : (arr_26 [i_0] [i_0] [(short)3] [i_6])))) ? ((~(((unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_30 [i_0] [i_0] [i_0] [i_6]))))));
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) (~(arr_45 [1LL] [i_0] [i_10] [(unsigned char)12] [i_12])));
                            var_25 = ((/* implicit */short) ((((/* implicit */int) (signed char)72)) <= (((/* implicit */int) (short)29005))));
                        }
                    } 
                } 
            } 
            arr_48 [i_10] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_10] [i_10])) ? (arr_35 [7ULL] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10]))))));
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_36 [i_0] [8ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))))) ? (((var_3) * (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))))))));
        }
    }
    var_27 -= ((/* implicit */long long int) ((signed char) var_14));
}
