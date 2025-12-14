/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129428
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0 + 1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) min(((~(max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((signed char) arr_5 [i_2])))));
                    var_19 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-4841))))) & (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 1])) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_3] [i_3])), ((unsigned char)64)))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_6 [i_3] [i_4] [i_3])))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_2 [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_8 [i_3] [i_4]))))))) - (97ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-((~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)3)))))))))));
                                var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                                var_23 = ((/* implicit */signed char) ((unsigned short) arr_20 [i_3] [i_3] [i_3] [i_3]));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) 10509531006349005469ULL)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) (signed char)2)))), ((~(((/* implicit */int) (signed char)-21)))))), (((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) arr_5 [i_3])), ((unsigned short)28507)))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 4) 
        {
            for (short i_10 = 1; i_10 < 21; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            {
                                arr_37 [i_8] [i_9 + 1] [i_11] [i_11] [i_12] [i_12] [i_12] &= ((min((8589934591LL), (((/* implicit */long long int) (signed char)37)))) >= (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (signed char)-3)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_8] [i_9 + 2] [i_10] [i_12]))))))))));
                                var_25 += ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (2589857423U))) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) ((((/* implicit */long long int) 3233427214U)) == (562915593682944LL))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) arr_35 [i_12] [i_11] [i_10] [i_9 - 1] [i_8] [i_8]))), (((((/* implicit */_Bool) arr_24 [i_8] [i_8])) ? (((/* implicit */int) arr_30 [i_11] [i_10] [i_9 + 2] [i_8])) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_29 [i_8] [i_9 + 1] [i_11])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (var_2)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        var_26 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_9 + 2] [i_10 + 1]))));
                        var_27 = ((/* implicit */int) min((var_27), (((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) arr_26 [i_9])))) | (arr_29 [i_9 + 1] [i_10 + 1] [i_10 - 1])))));
                    }
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9 + 1] [i_10 + 1] [i_10])) ? (((/* implicit */int) arr_31 [i_10 + 1] [i_10 + 1] [i_9 + 2] [i_9 - 1])) : (((/* implicit */int) arr_31 [i_10 + 1] [i_10] [i_9 - 1] [i_9 + 1]))));
                        /* LoopSeq 4 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_8] [i_9 + 1] [i_10] [i_14]))));
                            arr_45 [i_10] [i_14] [i_10 - 1] [i_9] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_9 + 1] [i_14]))));
                            var_30 = ((/* implicit */short) 5055659504699904021ULL);
                            var_31 = ((/* implicit */long long int) ((short) (+(((/* implicit */int) (signed char)63)))));
                        }
                        for (short i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            var_32 += ((/* implicit */_Bool) ((unsigned long long int) arr_44 [i_10] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10]));
                            var_33 &= ((/* implicit */short) arr_40 [i_8] [i_16]);
                        }
                        for (signed char i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_9 - 1]))));
                            var_35 = ((/* implicit */unsigned int) arr_44 [i_8] [i_9] [i_10] [i_14] [i_17]);
                        }
                        for (signed char i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                        {
                            var_36 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_8] [i_9 + 2] [i_10 + 1] [i_14])) ? ((-(((/* implicit */int) (unsigned char)134)))) : (((/* implicit */int) arr_30 [i_8] [i_10 - 1] [i_9 + 1] [i_14]))));
                            var_37 = ((/* implicit */unsigned short) var_14);
                            var_38 &= ((/* implicit */unsigned char) 920370881428800352ULL);
                        }
                    }
                    var_39 ^= ((/* implicit */int) ((long long int) (unsigned short)11033));
                    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_8] [i_9] [i_9 - 1] [i_10 + 1])))))));
                }
            } 
        } 
    } 
}
