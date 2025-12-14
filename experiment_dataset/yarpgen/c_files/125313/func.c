/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125313
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_1 [(unsigned char)18]))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((18446744073709551609ULL) << (((/* implicit */int) (_Bool)1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min(((short)8918), (((/* implicit */short) var_8))))))))))));
                var_17 = ((/* implicit */_Bool) min((var_17), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 952624716U)) ? (4299892604665131846LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8918))))))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 4; i_2 < 21; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((3342342578U), (((/* implicit */unsigned int) (short)8891))))) && (((/* implicit */_Bool) arr_0 [i_0 + 1])))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2]))))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) != (max((((/* implicit */unsigned long long int) max(((short)4095), (((/* implicit */short) (_Bool)1))))), ((~(arr_0 [i_1]))))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3342342579U)) ? (3342342609U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))))) << (((((/* implicit */int) var_0)) - (47)))));
                    arr_11 [i_0] [i_0] [i_2 - 4] = ((/* implicit */signed char) ((unsigned char) arr_0 [i_2 - 3]));
                }
                for (unsigned char i_3 = 4; i_3 < 21; i_3 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) var_5);
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)8917))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 2) 
                        {
                            arr_20 [i_4] [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                            arr_21 [(unsigned short)8] [(unsigned short)8] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) var_9);
                        }
                        arr_22 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) - (1ULL)));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3342342579U)) || (((/* implicit */_Bool) (unsigned char)93)))))));
                    }
                    arr_23 [(unsigned char)16] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((var_14) >= (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (short)8917))))))));
                }
                for (unsigned char i_6 = 4; i_6 < 21; i_6 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_1] [9ULL]))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)166)), ((short)8931)))) ? (((((/* implicit */int) (unsigned char)34)) % (((/* implicit */int) (signed char)74)))) : (((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (short)-8927)))))))));
                                arr_32 [i_0] [(_Bool)1] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) var_2);
                                arr_33 [i_0] [i_0] [i_7] [i_1 + 3] [i_6 - 4] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-9)) ? (((((/* implicit */_Bool) 952624716U)) ? (((/* implicit */unsigned long long int) (+(2296588310038852608LL)))) : (min((((/* implicit */unsigned long long int) (short)32753)), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) -67314653852414904LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 2) 
                        {
                            {
                                arr_41 [i_0] [i_1] [i_6] [i_9 + 2] [i_10 + 1] [i_9 + 2] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) var_10))) >= (var_12)));
                                var_24 = ((/* implicit */signed char) var_5);
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_4)))))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) ((9223372036854775805LL) >> (6ULL)));
                    arr_42 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (short)-8941)))))) || (((/* implicit */_Bool) arr_0 [i_0]))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_15 [i_11] [i_11] [i_11] [i_11])))))))));
        var_28 = ((/* implicit */_Bool) max((var_28), ((!(((/* implicit */_Bool) var_14))))));
        arr_45 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10360)) ^ (((/* implicit */int) (signed char)-80))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11] [i_11]))) : ((+(arr_12 [i_11] [i_11] [i_11] [i_11])))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((arr_18 [i_11] [i_11] [i_11] [i_11] [i_11]) ? (((/* implicit */int) arr_18 [i_11] [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) var_5)))))));
    }
    var_30 = ((/* implicit */unsigned char) var_3);
    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) 54318821)) ? (((unsigned int) 534773760ULL)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
    var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967294U))));
}
