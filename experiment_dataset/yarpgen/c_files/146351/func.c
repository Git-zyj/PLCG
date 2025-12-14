/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146351
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((_Bool) 18446744073709551602ULL))), (max((arr_2 [i_0 - 1] [i_1] [i_2]), (((/* implicit */unsigned int) arr_5 [i_0])))))) * (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */int) (unsigned short)38153)) : (((/* implicit */int) arr_6 [21ULL] [i_1] [(unsigned short)17])))))))));
                    var_18 = min((((/* implicit */unsigned int) ((((var_8) & (((/* implicit */int) arr_1 [i_0 - 2])))) | ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))))))), ((~(((2839715317U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33554))))))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((min((((/* implicit */int) arr_4 [i_0] [6ULL] [i_0 - 1])), (((arr_4 [i_0] [i_0 + 1] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) : (((/* implicit */int) (unsigned char)113)))))), (((/* implicit */int) (unsigned short)38141)))))));
                    arr_8 [i_0 - 2] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_4 [i_0 + 2] [i_0 + 1] [i_0]) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1] [(unsigned short)12])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1] [i_0]))))) < (((unsigned long long int) (_Bool)1))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) ((unsigned int) arr_9 [10U])))))));
                    arr_17 [2ULL] [i_3] [i_5 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((16777215U), (arr_2 [i_5 + 1] [i_5 - 1] [i_5])))) ? (((unsigned int) (unsigned short)16882)) : (((arr_2 [i_3] [i_4 - 1] [i_5 - 1]) >> (((((/* implicit */int) (unsigned short)45982)) - (45966)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))) : (8U)));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_3 [i_4 - 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_3 [i_4 - 1] [i_5 + 1] [i_5 - 1]))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 2) 
                    {
                        var_23 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_19 [i_4] [i_4] [i_4 - 1] [i_5 + 1]), (((/* implicit */unsigned int) min((var_5), (((/* implicit */int) arr_22 [i_3] [i_7])))))))), (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (14221750294312094993ULL))), (((/* implicit */unsigned long long int) 4160692159U))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 1) 
                        {
                            arr_25 [i_3] [i_3] [i_7] [i_3] [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) arr_11 [i_5])));
                            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) (unsigned char)193)))));
                            var_25 = ((/* implicit */unsigned short) var_3);
                        }
                    }
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31496)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [14U] [(unsigned short)17])))) ? (min((1049858476), (((/* implicit */int) arr_12 [i_3] [i_4 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3]))))))), (((/* implicit */int) ((unsigned short) (!(arr_12 [i_3] [i_3]))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 20; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_32 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((int) (unsigned short)2047));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (unsigned short)65535))));
                }
            } 
        } 
        var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [1U] [i_3]))) ^ (((((/* implicit */_Bool) ((unsigned int) arr_2 [i_3] [i_3] [i_3]))) ? (min((((/* implicit */unsigned long long int) 1566034382)), (arr_10 [i_3]))) : (((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_26 [i_3] [i_3] [i_3])))))));
        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_14 [(unsigned char)12])), ((unsigned short)18932)))), (max((arr_18 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [9]))))))) ? ((+(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) : (max((((((-1566034383) + (2147483647))) << (((18446744073709551615ULL) - (18446744073709551615ULL))))), ((~(((/* implicit */int) var_16))))))));
    }
}
