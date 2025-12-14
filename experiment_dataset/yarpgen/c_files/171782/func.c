/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171782
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
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [3] [3]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 3]))))))));
        arr_4 [18LL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (var_9)))));
        arr_5 [(short)11] = ((((((/* implicit */_Bool) 2623099261U)) || (((/* implicit */_Bool) 2623099261U)))) && ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */short) (-((~(((var_9) | (((/* implicit */int) arr_8 [(unsigned short)12] [(signed char)12]))))))));
        var_18 ^= ((/* implicit */short) (((((~(((/* implicit */int) arr_2 [i_1])))) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) arr_2 [i_1]))))));
        var_19 = ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_1 [i_1])))) + (2147483647))) << (((((((/* implicit */int) var_16)) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1])) - (6466)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_2]))))) ? ((~(((/* implicit */int) arr_13 [i_2])))) : (((((/* implicit */int) arr_13 [i_2])) & (((/* implicit */int) arr_13 [i_2])))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (signed char i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        arr_20 [i_2] [i_3] [i_2] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((var_9) - (var_2)))) >= (arr_15 [i_4 + 2] [i_4 - 1] [i_4 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_4 - 1] [i_4])))))) : (((((/* implicit */_Bool) 2623099261U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16722))) : (1671868023U)))));
                        var_21 = var_7;
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_23 [i_2] [i_2] = ((/* implicit */short) ((1671868035U) < (((/* implicit */unsigned int) -375536151))));
                            var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_6]))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+((((!(((/* implicit */_Bool) arr_14 [8ULL] [12])))) ? (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [(short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_3] [i_3] [i_5] [i_5] [i_6]))) : (arr_14 [i_2] [i_2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)59394))))))))))));
                            var_24 = ((((/* implicit */_Bool) var_10)) ? (arr_18 [i_2] [i_2] [i_4] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((var_15) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) var_4))))));
                        }
                        for (int i_7 = 2; i_7 < 20; i_7 += 1) 
                        {
                            arr_26 [i_2] [i_5] [(short)11] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_4 + 2])) <= (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (((var_0) & (arr_15 [i_4 - 1] [i_4 + 1] [i_4 + 1]))) : (var_3)));
                        }
                        for (signed char i_8 = 1; i_8 < 21; i_8 += 2) 
                        {
                            arr_31 [i_8] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_8 - 1] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_24 [i_8 - 1] [i_8] [(signed char)22] [i_8 - 1] [i_8] [i_8 + 1]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((-(arr_25 [i_8] [i_5] [(unsigned char)8] [i_3] [i_2])))))));
                            arr_32 [i_2] [i_2] [(unsigned short)15] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8 - 1] [i_8] [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4 - 1]))) != (((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2]))))))))));
                            var_26 ^= ((/* implicit */signed char) var_15);
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */signed char) var_15);
    }
    for (signed char i_9 = 1; i_9 < 18; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 4; i_10 < 19; i_10 += 4) 
        {
            for (int i_11 = 1; i_11 < 19; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (((+(((/* implicit */int) var_6)))) >= (((/* implicit */int) arr_7 [(_Bool)1] [i_11 - 1]))))) | (((((var_13) >> (((((/* implicit */int) arr_45 [i_9] [i_10] [i_10] [i_11] [i_11])) - (6909))))) + (((/* implicit */int) var_6))))));
                        arr_48 [i_11] [i_12] = ((/* implicit */unsigned int) var_1);
                    }
                } 
            } 
        } 
        arr_49 [i_9] = ((/* implicit */short) arr_24 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_9]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
        {
            arr_54 [i_9] [i_13] [i_9 + 3] = ((((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_13])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_39 [i_9] [i_13])) : (((/* implicit */int) arr_38 [i_9] [i_9])))) : (((/* implicit */int) arr_17 [i_9] [i_9])));
            /* LoopSeq 1 */
            for (unsigned short i_14 = 4; i_14 < 19; i_14 += 1) 
            {
                var_29 = ((/* implicit */short) arr_41 [i_14 + 1] [i_13] [i_14 + 1]);
                var_30 = ((/* implicit */unsigned long long int) ((((-375536151) + (1073741824))) + (((/* implicit */int) arr_44 [i_14 - 4] [i_14] [i_14] [i_14 - 2]))));
            }
            arr_58 [i_9] [i_13] [i_9] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [(short)13]))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_31 = ((((/* implicit */_Bool) arr_45 [i_9 - 1] [i_15] [i_9] [i_15] [i_15])) ? (var_9) : (((((/* implicit */int) arr_12 [i_9 - 1] [i_9 - 1])) / (((/* implicit */int) arr_60 [i_9 - 1] [i_9 - 1])))));
            var_32 = ((/* implicit */short) arr_22 [i_9 + 3] [(unsigned char)9] [i_9] [i_9] [i_9] [i_9]);
        }
        arr_61 [i_9] [i_9] = (-(((((/* implicit */_Bool) arr_15 [(short)12] [i_9 - 1] [i_9 + 2])) ? (arr_15 [i_9 - 1] [i_9 + 1] [i_9]) : (arr_15 [i_9 - 1] [i_9 + 1] [i_9]))));
    }
    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */int) var_16)) / (((/* implicit */int) var_7)))) / (((var_9) / (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_12))));
}
