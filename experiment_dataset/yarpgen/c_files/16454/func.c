/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16454
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
    var_10 ^= ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_11 |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0 + 3] [i_3 + 2]))));
                        arr_8 [i_2] |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (8355840ULL)));
                    }
                } 
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (762376253U)))) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])) : ((+(8577210587423372557ULL)))));
    }
    /* vectorizable */
    for (short i_4 = 2; i_4 < 11; i_4 += 1) 
    {
        var_12 &= ((/* implicit */signed char) ((long long int) 8577210587423372557ULL));
        var_13 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 9869533486286179059ULL)) && (arr_5 [i_4] [i_4] [i_4 + 1] [i_4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4 - 2] [i_4 - 2]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)6] [(short)6]))) : (0U)))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 4; i_7 < 11; i_7 += 4) 
                    {
                        arr_22 [i_4] [i_5] [i_5] [i_7] [i_5] [i_4] = ((/* implicit */signed char) arr_10 [i_5] [i_4]);
                        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64)))))) ? (arr_15 [i_7] [i_4 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_5])))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) arr_2 [i_6])) : (((/* implicit */int) (unsigned short)0)))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (signed char)-105))));
                        arr_25 [i_4 - 2] [i_6] [i_6] [i_8] |= ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
                        arr_26 [i_8] [i_8] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)255);
                        var_17 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) >> (((((/* implicit */int) arr_16 [i_4] [i_4 - 1] [i_8])) + (74)))));
                        var_18 ^= ((/* implicit */unsigned short) arr_20 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_6] [i_4]);
                    }
                    var_19 ^= ((/* implicit */unsigned long long int) (signed char)105);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_9 = 2; i_9 < 11; i_9 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) (unsigned char)236);
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4552050683023794219ULL))));
                            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)105)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_9 - 2] [i_4 + 1])))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (unsigned short)40292))));
                            arr_37 [i_4] [i_4] [i_10] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)30460)) > (((/* implicit */int) arr_31 [i_4 - 2] [i_9 + 1] [i_4]))));
                            var_24 = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                var_25 *= ((/* implicit */signed char) (!(arr_5 [i_4 + 1] [i_4 - 1] [i_4 - 2] [i_9 - 2])));
            }
            for (unsigned int i_13 = 3; i_13 < 10; i_13 += 1) 
            {
                arr_40 [i_4] [2LL] [i_4] [i_4] &= ((/* implicit */int) (unsigned short)22658);
                var_26 *= ((/* implicit */unsigned short) (-((+(1756793060U)))));
            }
            var_27 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 7022974049624679973LL)) ? (9138193080488898721LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_4])))))));
        }
    }
    for (short i_14 = 0; i_14 < 25; i_14 += 1) 
    {
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-87)) != (((/* implicit */int) (signed char)24))));
        /* LoopNest 3 */
        for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            for (unsigned short i_16 = 1; i_16 < 23; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_7)) / (max((arr_46 [i_14] [i_16] [i_16 - 1] [i_16 + 1]), (((/* implicit */unsigned long long int) min((arr_42 [i_14] [i_14]), (((/* implicit */unsigned int) var_6)))))))));
                        var_30 |= ((/* implicit */signed char) ((((-134217728) - (((/* implicit */int) (signed char)-10)))) - (((/* implicit */int) arr_41 [i_16 - 1]))));
                        var_31 = ((/* implicit */unsigned char) arr_45 [i_17] [i_17] [i_14]);
                        var_32 ^= ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)105)) ? (((11004676716384684575ULL) * (((/* implicit */unsigned long long int) 16U)))) : (((/* implicit */unsigned long long int) 2458760782U)))), ((-(11004676716384684575ULL)))));
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) 11004676716384684575ULL))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_49 [i_14] [i_14] [i_14])), (3574683521U)))))))));
    }
}
