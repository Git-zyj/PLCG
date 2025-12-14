/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129127
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
    for (short i_0 = 3; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_12 += ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) 454685328)) || (((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_1 [(unsigned short)2]))));
        var_14 ^= ((/* implicit */short) min((((/* implicit */long long int) ((arr_0 [i_0 - 2]) << (((/* implicit */int) (_Bool)1))))), (min((arr_1 [i_0 + 1]), (((/* implicit */long long int) var_2))))));
    }
    for (short i_1 = 3; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_15 ^= ((/* implicit */long long int) var_9);
            arr_6 [i_1] = ((/* implicit */int) (unsigned short)22);
            arr_7 [(signed char)6] = (-(((/* implicit */int) var_11)));
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (unsigned char)32))));
        }
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)15)), (var_6))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (4294967284U))))), (((/* implicit */unsigned int) (~(var_4))))));
            var_18 ^= ((/* implicit */signed char) (unsigned char)61);
        }
        for (long long int i_4 = 1; i_4 < 11; i_4 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((454685334) - (454685324)))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)32767)), (6391363520335111246ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_4])), (var_0))))) : ((((-9223372036854775807LL - 1LL)) - (-3586773725488059869LL)))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((-74428186) & (((/* implicit */int) var_6))))), (((((/* implicit */long long int) -705542673)) / (arr_3 [i_1] [i_4]))))) > (((long long int) var_4)))))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (unsigned short)24132))));
        }
        /* vectorizable */
        for (long long int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 2; i_8 < 13; i_8 += 3) 
                        {
                            var_22 += ((/* implicit */_Bool) arr_17 [(short)0] [(unsigned char)9] [i_8]);
                            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [8]))) == (18446744073709551615ULL))))));
                            var_24 = ((/* implicit */signed char) (unsigned char)164);
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (~(454685328)))) ? (((/* implicit */long long int) arr_22 [i_1] [i_5 + 3] [i_6] [i_7] [12ULL])) : (((((/* implicit */_Bool) (signed char)59)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                            var_26 = -268435456;
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_2))))));
                            arr_27 [i_1] [i_1 - 1] [i_1] [i_1] [1ULL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [0] [i_6 + 2] [i_6 - 1] [i_6] [(_Bool)0])) ? (var_7) : (((/* implicit */unsigned int) arr_22 [i_6] [i_6 + 4] [i_6 - 1] [i_6] [4]))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_10)))))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2998)) ? (((/* implicit */int) arr_24 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? ((-(arr_5 [i_1 - 2] [i_1 - 2] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113)))));
                            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1LL))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || ((_Bool)1))))));
                            arr_33 [i_1] [i_1] [(unsigned char)6] [i_6 - 1] [i_7] [i_11] = ((/* implicit */long long int) var_2);
                        }
                        var_32 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2760))) * (1023ULL)));
                    }
                } 
            } 
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1]))));
        }
        var_34 = ((/* implicit */signed char) (+(max((((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1 - 3] [i_1])), (((int) (_Bool)1))))));
    }
    /* vectorizable */
    for (short i_12 = 3; i_12 < 13; i_12 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) (short)16256)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192)))))));
        var_36 *= ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47441))))) >= (((/* implicit */int) ((unsigned char) var_3))));
    }
    /* vectorizable */
    for (short i_13 = 3; i_13 < 13; i_13 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */int) 9223372036854775807LL);
        var_38 = ((/* implicit */long long int) (+(arr_28 [i_13] [i_13] [i_13 + 2] [i_13])));
    }
    var_39 *= ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 25; i_14 += 3) 
    {
        for (signed char i_15 = 0; i_15 < 25; i_15 += 1) 
        {
            {
                var_40 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_40 [i_14] [8LL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255)))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(3216326409U)))) >= (18446744073709551615ULL))))));
                arr_45 [i_14] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (max((8818471301807411472LL), (((/* implicit */long long int) (~(((/* implicit */int) (short)-2325)))))))));
                var_41 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)64)), (((((/* implicit */_Bool) arr_42 [i_15] [(short)24])) ? (((/* implicit */int) arr_42 [i_14] [(short)24])) : (((/* implicit */int) arr_42 [i_14] [(short)12]))))));
            }
        } 
    } 
}
