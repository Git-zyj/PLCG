/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175972
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */int) ((signed char) arr_2 [i_0 - 1] [i_0 - 1]))), (((arr_2 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)225)))), (((/* implicit */int) ((((/* implicit */int) ((short) var_8))) <= (((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_1] [i_1] [i_2] [i_3])))))));
                        var_15 = min((((/* implicit */int) ((((/* implicit */_Bool) (short)24576)) && (((/* implicit */_Bool) 2288923010U))))), ((~(((/* implicit */int) (unsigned short)8869)))));
                        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ^ ((+(((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((unsigned long long int) var_1))));
                    }
                    var_17 *= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [(short)14] [i_1] [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_6 [i_1]))))) << (((/* implicit */int) ((signed char) arr_4 [i_0] [i_1])))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        /* LoopSeq 4 */
        for (long long int i_5 = 2; i_5 < 23; i_5 += 1) 
        {
            var_18 ^= ((/* implicit */unsigned long long int) ((((int) 3193695068U)) / (((/* implicit */int) var_5))));
            arr_16 [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) var_12);
            var_19 *= ((/* implicit */_Bool) var_11);
            /* LoopNest 3 */
            for (short i_6 = 1; i_6 < 22; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))));
                            var_21 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15341)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)107))))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) var_2))));
                            var_22 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_8)) ? (arr_19 [6LL] [i_5 - 2] [i_6] [i_6]) : (((/* implicit */long long int) var_8)))) / (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [(signed char)19] [(unsigned short)0] [(unsigned short)0] [i_4] [i_6 - 1] [i_8]))))), (((/* implicit */long long int) arr_14 [i_5] [i_8]))));
                            arr_23 [i_4] [i_6] &= ((/* implicit */unsigned long long int) arr_17 [i_5 + 1] [i_4] [i_5] [i_5 + 1]);
                        }
                    } 
                } 
            } 
            var_23 -= ((/* implicit */short) ((4294967294U) >> (((/* implicit */int) (_Bool)1))));
        }
        for (int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            /* LoopSeq 4 */
            for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_10] [i_10]), (((/* implicit */unsigned short) arr_21 [i_4] [i_4] [4ULL] [i_9] [i_9] [i_10] [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_2)), (arr_1 [i_10]))))) : (((unsigned int) var_6))));
                arr_29 [i_4] [i_9] [24] [24] = ((/* implicit */int) var_5);
            }
            for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                arr_32 [(short)17] [18ULL] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                arr_33 [i_4] [i_9] [i_11] [i_4] = ((/* implicit */signed char) ((unsigned long long int) (-(0ULL))));
                arr_34 [i_4] [(unsigned char)9] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    for (short i_14 = 2; i_14 < 23; i_14 += 3) 
                    {
                        {
                            var_25 &= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_6 [i_9])) ? ((~(arr_11 [i_9] [i_13] [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_12 - 1] [i_12 - 1] [i_14 + 2] [i_14 - 1]))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) var_0))))))))) : (min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))));
                            arr_46 [i_14] [i_13] [i_12] [i_13] [i_9] [i_13] [i_4] = ((/* implicit */unsigned short) (~(-678086554)));
                        }
                    } 
                } 
                var_27 += ((((/* implicit */_Bool) ((unsigned char) arr_42 [i_12] [i_12 - 1] [i_12 - 1] [i_12]))) ? (min((arr_42 [i_9] [i_12 - 1] [i_12 - 1] [i_12 - 1]), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_9] [i_12 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_21 [i_9] [i_12 - 1] [i_12] [i_12 - 1] [i_12] [i_12 - 1] [i_12])))));
                arr_47 [i_4] [i_4] [i_12] = ((/* implicit */unsigned long long int) ((((arr_36 [i_12 - 1] [i_12 - 1] [i_12 - 1]) > (arr_36 [i_12 - 1] [(unsigned short)11] [i_12 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_36 [i_12 - 1] [(unsigned short)14] [i_12 - 1]) == (arr_36 [i_12 - 1] [i_12] [i_12 - 1]))))) : (((((/* implicit */_Bool) arr_36 [i_12 - 1] [i_12] [i_12 - 1])) ? (arr_36 [i_12 - 1] [i_12 - 1] [i_12 - 1]) : (arr_36 [i_12 - 1] [i_12] [i_12 - 1])))));
            }
            /* vectorizable */
            for (unsigned short i_15 = 4; i_15 < 24; i_15 += 2) 
            {
                arr_51 [i_4] [i_4] [i_15 + 1] &= ((/* implicit */short) (~((~(var_7)))));
                arr_52 [(_Bool)1] [i_9] [i_9] [i_4] = ((((/* implicit */_Bool) (unsigned short)40040)) ? (((/* implicit */int) (_Bool)1)) : (255));
            }
            var_28 = ((/* implicit */int) var_11);
            var_29 -= ((((long long int) (!(var_1)))) >> (((((/* implicit */int) ((short) var_4))) - (28620))));
        }
        for (int i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            arr_55 [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 530734324085552312LL)) || (((/* implicit */_Bool) -3200628060859152830LL))));
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_4))));
        }
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_4] [i_17] [i_17] [i_17] [(unsigned short)0] [i_17] [i_17]))));
            var_32 = (~(arr_11 [i_4] [i_4] [i_17]));
            var_33 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
        }
        var_34 -= ((/* implicit */short) var_5);
        var_35 = min(((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_44 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_44 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_44 [i_4] [i_4] [i_4] [i_4])))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_61 [i_18] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) <= (((/* implicit */int) var_1))));
        var_36 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_35 [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) ((signed char) var_2)))));
        var_37 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_48 [i_18]))));
        arr_62 [i_18] = ((/* implicit */unsigned char) ((unsigned int) arr_54 [i_18] [i_18]));
    }
    var_38 = ((/* implicit */long long int) var_4);
}
