/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142330
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_15 += ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                    var_16 = ((/* implicit */int) arr_3 [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((~(((/* implicit */int) var_5)))) << (((((((/* implicit */int) arr_6 [i_3] [i_3])) + (72))) - (20))))))));
        var_18 -= ((/* implicit */unsigned long long int) 15U);
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 10; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                        {
                            arr_20 [i_3] [i_4] [i_6] [i_6] [i_3] = ((/* implicit */int) var_6);
                            var_19 += ((signed char) ((((/* implicit */int) arr_5 [i_6] [i_3] [i_3])) / (((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3]))));
                            var_20 = ((/* implicit */unsigned int) var_6);
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                        {
                            var_21 -= ((/* implicit */signed char) min((min((((/* implicit */int) min(((signed char)49), (((/* implicit */signed char) var_9))))), ((~(((/* implicit */int) arr_11 [i_4] [i_6] [i_4])))))), ((+(((/* implicit */int) arr_18 [i_3] [i_4] [i_5 - 2] [i_6] [i_3]))))));
                            arr_23 [i_8] [i_5] [i_5] [i_6] [i_3] &= ((/* implicit */unsigned long long int) var_0);
                            arr_24 [i_3] [i_3] [i_4] [i_5] [i_3] [i_8] = ((/* implicit */signed char) arr_15 [i_3]);
                            arr_25 [i_3] [i_5] [i_6] [i_8] = ((/* implicit */signed char) min((max((arr_1 [i_4] [i_5 - 1]), (arr_1 [i_5] [i_5 - 1]))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)57)))))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((short) var_14))) : (((/* implicit */int) min(((_Bool)1), (var_9)))))))))));
                            var_23 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_9] [i_6] [i_5]))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (((((-(((/* implicit */int) (short)-20267)))) >> (((((((/* implicit */int) (short)20257)) ^ (((/* implicit */int) var_5)))) + (20229))))) >= (((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_9] [i_5 + 1] [i_4] [i_3])) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-26)) ^ (((/* implicit */int) var_9)))))))))))));
                            arr_29 [i_3] [i_3] [i_5] [i_6] [i_9] [i_3] [i_4] = min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) - (-7525603855609844039LL))), (((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-75)))) ^ (((/* implicit */int) (_Bool)0))))));
                        }
                        var_25 -= ((/* implicit */long long int) min((((/* implicit */int) var_6)), (min((((((/* implicit */_Bool) 17179869183ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) arr_9 [i_6])) * (((/* implicit */int) var_13))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_27 [i_3])) ? (var_0) : (((/* implicit */unsigned int) arr_27 [i_3])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_3] [i_3] [(_Bool)1])) ^ (arr_27 [i_3])))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) 1284224298);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 2) 
        {
            var_28 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 0ULL)) ? (var_10) : (((/* implicit */int) var_14)))));
            var_29 = ((/* implicit */int) var_5);
            var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10] [i_10] [i_11] [i_11 + 1]))) >= (var_7)));
            arr_34 [i_11] [i_11] = ((/* implicit */_Bool) 8215866045839816312LL);
            var_31 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)19)) ^ (((/* implicit */int) (unsigned char)167)))) ^ (((/* implicit */int) (_Bool)1))));
        }
        for (short i_12 = 1; i_12 < 10; i_12 += 2) 
        {
            var_32 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_12 - 1])) : (((/* implicit */int) arr_7 [i_12])))) ^ (((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_7 [i_10])) ? (((/* implicit */int) arr_36 [i_12] [i_10])) : (arr_15 [i_10])))))));
            arr_37 [i_10] = ((/* implicit */int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) : ((((_Bool)1) ? (var_11) : (9743058801629323031ULL))))), (((/* implicit */unsigned long long int) ((arr_5 [i_12 - 1] [i_12] [i_12 + 1]) ? (((/* implicit */int) arr_5 [i_10] [i_10] [i_12 - 1])) : (((/* implicit */int) arr_5 [i_12] [i_12] [i_12 - 1])))))));
        }
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((-8215866045839816313LL) + (9223372036854775807LL))) >> (((28643702315685997LL) - (28643702315685990LL))))))));
    }
    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))) : (((/* implicit */int) var_13))));
}
