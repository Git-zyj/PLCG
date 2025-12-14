/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149981
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
    var_16 = ((/* implicit */short) ((((((/* implicit */int) ((var_5) == (((/* implicit */int) (unsigned char)121))))) ^ (((/* implicit */int) var_8)))) % (((/* implicit */int) (_Bool)1))));
    var_17 ^= ((/* implicit */unsigned short) (unsigned char)121);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) ((int) arr_2 [i_1])));
            var_19 = ((/* implicit */long long int) max((var_19), (((7265930774232943144LL) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))));
        }
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_2]);
            var_21 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [12ULL]))) : ((-(arr_0 [11] [23]))));
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
        {
            arr_12 [(_Bool)1] [(signed char)22] = ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_10 [i_0] [i_3] [(signed char)1])) * (((/* implicit */int) var_8)))));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
            {
                var_22 |= ((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_3] [2LL]));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)119)) << (((((((/* implicit */int) arr_2 [i_4])) + (((/* implicit */int) arr_10 [i_0] [i_3] [2LL])))) + (3989)))));
            }
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
            {
                var_24 *= ((/* implicit */unsigned short) (unsigned char)122);
                /* LoopNest 2 */
                for (short i_6 = 3; i_6 < 23; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */short) (+(arr_17 [24U] [i_7] [i_6 + 1])));
                            var_26 = arr_23 [i_6 + 2] [(signed char)13] [i_6] [i_6] [i_7];
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (((/* implicit */int) arr_3 [23] [23] [i_5])) : (((/* implicit */int) (_Bool)1)))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_28 = (-(((/* implicit */int) (unsigned char)115)));
                var_29 = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_0] [(unsigned short)22] [(_Bool)1])) / (((/* implicit */int) arr_26 [i_0] [i_3] [i_8]))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [(unsigned char)23])) && (((/* implicit */_Bool) (short)28539))));
            }
        }
        var_31 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_11 [11ULL] [11ULL] [11ULL])) | (((/* implicit */int) var_7))))));
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned char)13] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))) : (((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_0 [i_0] [i_0])))));
        arr_27 [9U] = ((/* implicit */unsigned int) ((signed char) 4203028449U));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_9] [i_9]))));
        var_34 |= ((/* implicit */signed char) ((unsigned long long int) var_10));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_5 [i_10])))));
        var_36 = ((/* implicit */int) min((var_36), (arr_15 [i_10] [i_10])));
    }
}
