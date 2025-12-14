/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182045
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
    var_18 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) (+(4135289719U)));
                        arr_10 [i_0] [i_2] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned int) ((arr_3 [i_1] [i_2]) == (arr_2 [i_0])))), (((unsigned int) arr_3 [i_1 - 2] [i_0])))));
                        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8018378947177828782ULL)) ? (8018378947177828782ULL) : (4388468774076562315ULL)));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_1]))) ? (((int) arr_1 [i_1])) : (((arr_4 [i_0] [i_1]) | (((/* implicit */int) arr_1 [i_1]))))))) - ((((+(arr_3 [i_0] [i_1]))) - (((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])) - (arr_2 [i_1]))))))))));
        }
        arr_11 [(unsigned char)16] &= ((/* implicit */unsigned int) ((signed char) ((unsigned int) ((((/* implicit */_Bool) 8018378947177828782ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2689))) : (10428365126531722834ULL)))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((short) arr_0 [i_0] [i_0]))))) & (arr_0 [i_0] [i_4]))))));
            var_23 &= ((/* implicit */_Bool) ((unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0]) : (arr_7 [i_0] [i_0] [12U] [i_0] [i_4] [i_4]))))));
        }
    }
    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_24 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)213))));
        /* LoopSeq 2 */
        for (int i_6 = 2; i_6 < 16; i_6 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_6 - 1] [i_6 + 1]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)230))));
            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_5]))));
            var_27 = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) arr_14 [i_6])) ? (arr_4 [16U] [(unsigned char)0]) : (((/* implicit */int) arr_19 [i_5] [i_5])))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_6 - 2] [15ULL] [i_6 - 1] [i_6]))))))));
            var_28 -= ((((/* implicit */int) arr_1 [16U])) & (((((/* implicit */int) arr_1 [(_Bool)1])) + (((/* implicit */int) arr_1 [16U])))));
        }
        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 3; i_10 < 15; i_10 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [12] [i_8] [i_9] [i_9] [i_10 - 2])) ? (arr_7 [i_5] [i_5] [16] [i_9] [i_9] [i_10 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_5] [i_5] [6U] [i_9] [(_Bool)1]))))))));
                            var_30 *= ((((((/* implicit */_Bool) ((arr_26 [i_5]) ? (arr_24 [14U] [i_10 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_5])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5] [i_7] [i_10 - 1])) ? (arr_17 [i_5] [i_7]) : (((/* implicit */long long int) arr_24 [i_5] [i_5]))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)2698))))))) : (((((/* implicit */_Bool) arr_4 [i_5] [i_9])) ? (arr_4 [(unsigned short)0] [i_8]) : (arr_4 [i_7] [i_8]))));
                        }
                        var_31 = ((((arr_20 [i_7]) / (arr_20 [i_5]))) * (((((/* implicit */int) arr_19 [i_5] [i_5])) >> (((arr_13 [i_5] [i_5] [i_9]) - (17362767310212525062ULL))))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_24 [i_5] [i_9])))) ? (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5]))) : (arr_21 [i_9] [i_8] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_5] [(unsigned short)15] [i_5]))))));
                        arr_30 [i_5] [i_7] [i_5] [i_9] [i_8] &= ((/* implicit */unsigned int) (+((+(((((arr_16 [i_9]) + (2147483647))) << (((/* implicit */int) arr_26 [i_9]))))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_28 [i_5] [i_5] [9] [9] [(unsigned char)7])))) / (((arr_3 [i_5] [i_5]) | (((/* implicit */unsigned long long int) arr_28 [i_5] [i_5] [i_5] [i_5] [i_5]))))))) ? ((~(((arr_17 [i_5] [i_5]) & (((/* implicit */long long int) arr_25 [i_5] [i_5] [i_5] [i_5])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_5] [i_7])) ? (arr_20 [i_5]) : (((/* implicit */int) arr_15 [2ULL] [(_Bool)0])))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_5] [i_7])))))))))));
            arr_31 [i_5] [i_7] [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [(signed char)11] [i_7] [i_7] [i_7]))))) == (((arr_2 [i_7]) & (arr_2 [i_7]))))))) ^ (((((unsigned int) arr_12 [i_5] [(signed char)2])) / (arr_24 [i_5] [i_7]))));
        }
    }
    var_34 = ((/* implicit */long long int) var_0);
    var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) 281474959933440LL)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))));
    var_36 = ((/* implicit */unsigned short) var_5);
}
