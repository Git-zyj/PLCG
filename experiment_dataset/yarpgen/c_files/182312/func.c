/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182312
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = max((var_16), (((var_13) <= (arr_0 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */short) ((signed char) arr_0 [i_0] [i_0]))), (((short) arr_0 [i_0] [i_0]))));
        var_17 = max((((((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ^ (((/* implicit */int) var_10))))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_2 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])))));
        arr_5 [i_0] = ((/* implicit */short) var_14);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned char) arr_0 [i_1] [i_0])))));
            arr_9 [(short)9] [(short)9] [i_0] = ((/* implicit */unsigned long long int) var_16);
            var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */int) arr_6 [i_0])) != (((/* implicit */int) var_2))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_0] [i_3] [i_1] &= ((/* implicit */_Bool) ((((arr_2 [i_0] [i_1]) % (((/* implicit */unsigned long long int) arr_8 [4U] [i_4] [i_4])))) >> (((int) arr_20 [i_0]))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) << (((((/* implicit */int) var_9)) - (60983)))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_10 [i_1] [i_1] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) & (((/* implicit */int) var_6)))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) 2147483647))))))));
                        }
                    } 
                } 
                var_22 += ((/* implicit */short) ((arr_10 [(short)0] [i_1] [i_1 - 1] [i_1 - 2]) & (arr_10 [i_0] [i_0] [i_1] [i_2])));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    var_23 = ((/* implicit */signed char) var_11);
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13)))) ^ (((((/* implicit */_Bool) var_9)) ? (arr_10 [i_0] [i_1] [(unsigned short)5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        arr_26 [i_0] [i_0] [i_5] [i_5] [i_6 + 1] = ((/* implicit */unsigned int) arr_20 [i_0]);
                    }
                }
                for (unsigned char i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    arr_29 [i_0] [i_1] [i_2] [i_7 - 2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) / (var_11)));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_16 [7] [2] [i_2]))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        var_26 -= ((/* implicit */long long int) ((((/* implicit */int) arr_32 [1] [i_1 - 1] [i_1] [i_1 - 2] [i_1])) & (((/* implicit */int) var_10))));
                        arr_33 [i_0] [i_0] [i_0] [i_7 - 2] [i_8] = ((/* implicit */short) ((((/* implicit */int) var_7)) >= (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1]))))));
                    }
                }
            }
            for (short i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))) <= (arr_35 [i_0] [i_1 - 2] [i_9]))) ? (((/* implicit */int) arr_30 [i_1 - 2] [i_1 - 2] [i_1 - 2])) : (((int) var_2))));
                var_28 = ((/* implicit */int) arr_36 [i_1 + 1] [i_9] [(unsigned char)2] [i_9]);
                arr_38 [i_0] [i_1] [i_9] = var_12;
            }
            var_29 = ((/* implicit */short) ((((arr_0 [i_0] [i_1]) + (2147483647))) >> (((((((/* implicit */int) var_7)) ^ (arr_0 [i_1 + 2] [i_0]))) + (1886471780)))));
        }
    }
    var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) var_16))))) & (min((((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) var_8))))));
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((var_14) * (((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (var_12))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        var_32 |= ((/* implicit */int) ((((/* implicit */int) ((6ULL) >= (1763574419643684778ULL)))) > (((/* implicit */int) var_0))));
        arr_41 [(unsigned short)5] = ((/* implicit */int) ((long long int) ((arr_40 [i_10]) & (((/* implicit */int) arr_39 [i_10])))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    var_33 = ((/* implicit */short) arr_45 [(_Bool)1] [4] [(short)9]);
                    var_34 += ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((((var_13) + (2147483647))) << (((((/* implicit */int) var_2)) - (473))))))) * (min((3), (((/* implicit */int) (short)-29979))))));
                    arr_47 [i_12] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1])) ? (arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1]) : (arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1])))) ? (((arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1]) << (((arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1]) - (1976234366U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1])) && (((/* implicit */_Bool) arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1]))))))));
                    var_35 = ((/* implicit */short) ((max((((/* implicit */int) arr_45 [i_11] [i_11] [i_11])), (((((/* implicit */int) var_6)) >> (((arr_44 [i_10] [i_10]) - (4935729916617346608LL))))))) < (min((((/* implicit */int) arr_39 [i_12 - 1])), (((((arr_42 [i_10] [i_10]) + (2147483647))) << (((((/* implicit */int) var_6)) - (225)))))))));
                }
            } 
        } 
    }
    var_36 = ((/* implicit */unsigned long long int) ((var_13) >= (((((/* implicit */int) (_Bool)0)) - (0)))));
}
