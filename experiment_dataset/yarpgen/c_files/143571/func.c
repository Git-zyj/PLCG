/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143571
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (var_5)))))) ? (((((/* implicit */unsigned long long int) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96)))))) & (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 18446744073709551615ULL)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 1ULL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */int) (-(var_5)));
            var_18 = ((/* implicit */signed char) ((_Bool) arr_3 [i_0]));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)55226))));
        var_19 = ((/* implicit */int) (_Bool)0);
    }
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) var_12))), (arr_9 [i_2])))) ? (min((min((((/* implicit */long long int) (_Bool)0)), (arr_9 [i_2]))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) var_9))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned short)14)) << (((((/* implicit */int) (short)32765)) - (32755))))))) >> (((/* implicit */int) (_Bool)0))));
        var_20 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (max((min((((/* implicit */long long int) arr_8 [i_2])), (arr_9 [i_2]))), (((/* implicit */long long int) var_4)))));
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15205))) * (min((((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) min((arr_8 [i_2]), (var_3))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_18 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_23 = ((/* implicit */short) ((arr_15 [i_3] [i_4]) << (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_3] [i_3] [i_3])))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                            var_25 = ((/* implicit */long long int) (((_Bool)1) ? (2147483622) : (2147483643)));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                var_26 *= ((/* implicit */short) (-(arr_27 [i_9])));
                arr_31 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (((unsigned int) (unsigned short)511))));
                var_27 = ((/* implicit */short) ((((-33554432) + (2147483647))) << (((((((/* implicit */int) ((short) (signed char)(-127 - 1)))) + (141))) - (13)))));
                arr_32 [i_3] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */int) (short)9161)) + (((/* implicit */int) (unsigned short)18231))))));
                arr_33 [i_3] [i_8] [i_3] [i_3] = ((/* implicit */unsigned int) ((((arr_17 [i_3] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)737)))));
            }
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (+(18446744073709551614ULL))))));
                            arr_42 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((unsigned int) 1ULL));
                            arr_43 [i_11] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((483868276U) + (((/* implicit */unsigned int) -1622214961)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-108)))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (_Bool)0))));
            }
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        {
                            var_30 = arr_18 [i_3] [i_3] [i_8 - 1];
                            var_31 ^= ((/* implicit */short) 18446744073709551589ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_16 = 3; i_16 < 16; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_53 [i_3])) * (((/* implicit */int) arr_53 [i_3]))));
                            var_33 ^= arr_52 [i_3] [i_3] [i_3] [i_3] [i_3];
                            var_34 |= ((/* implicit */_Bool) ((arr_49 [i_16] [(unsigned char)14] [i_16 - 1] [i_16] [i_16] [i_16 - 3] [i_16 + 1]) >> (((((/* implicit */int) (short)14220)) - (14176)))));
                        }
                    } 
                } 
            }
            for (unsigned char i_18 = 0; i_18 < 17; i_18 += 1) /* same iter space */
            {
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (_Bool)1))));
                var_36 = ((/* implicit */unsigned int) arr_48 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]);
            }
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 17; i_19 += 2) 
            {
                for (signed char i_20 = 0; i_20 < 17; i_20 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) 18446744073709551605ULL);
                        var_38 += ((((((/* implicit */int) arr_24 [i_3] [i_8] [i_3] [i_8] [i_8] [i_3] [i_3])) * (((/* implicit */int) (unsigned short)47319)))) < (((/* implicit */int) arr_47 [i_8 - 1] [i_19] [i_8 - 1] [i_8 - 1])));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-1)))))));
            var_40 = ((/* implicit */_Bool) (+(18U)));
            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_3] [i_8] [i_3] [i_8 - 1])) + (((/* implicit */int) arr_30 [i_3] [i_8 - 1] [i_8] [i_8])))))));
        }
        arr_64 [i_3] = ((/* implicit */unsigned char) (!((_Bool)1)));
        arr_65 [i_3] = ((/* implicit */short) ((((arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))))) ? (((((/* implicit */int) arr_25 [i_3])) >> (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_61 [i_3] [i_3] [i_3] [i_3]))));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned short) ((4294967295U) << (((((/* implicit */int) (short)14214)) - (14207)))));
        var_43 &= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_36 [(short)16] [(short)16]), (((/* implicit */long long int) (_Bool)0)))))))) != (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) max((((/* implicit */signed char) var_0)), (arr_67 [i_21]))))))));
        arr_69 [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (((arr_37 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]) + (((/* implicit */unsigned long long int) arr_49 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_44 += ((/* implicit */signed char) ((_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))) - (var_5)))), (((var_0) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_21]))))))));
    }
}
