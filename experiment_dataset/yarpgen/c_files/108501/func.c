/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108501
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -629716978)) && (((/* implicit */_Bool) -629716974))))) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        arr_3 [i_0 + 1] [(unsigned char)10] &= ((/* implicit */short) (signed char)-2);
        arr_4 [i_0] = ((/* implicit */_Bool) ((long long int) (unsigned char)255));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_1 + 1])), (((((/* implicit */_Bool) 15584804847724349170ULL)) ? (((arr_5 [i_1 + 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1]))))) : (((/* implicit */long long int) ((unsigned int) arr_5 [i_1 + 1])))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
        {
            arr_12 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_1 + 1]), (((/* implicit */long long int) arr_1 [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1] [i_2])) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_2])) : (((/* implicit */int) (signed char)103)))) : (((arr_6 [i_1 + 1]) ? (((/* implicit */int) max((((/* implicit */signed char) arr_6 [i_1 + 1])), ((signed char)127)))) : (((/* implicit */int) var_4))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                var_11 = ((/* implicit */signed char) arr_6 [i_1 + 1]);
                arr_15 [i_1] [i_1 + 1] [i_2] = ((/* implicit */int) ((unsigned long long int) arr_13 [i_3] [i_3] [i_3 - 1]));
                var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1] [i_1 + 1]))) + (arr_9 [i_3 + 2] [i_3 - 1])));
                var_13 ^= ((/* implicit */signed char) var_1);
            }
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                arr_20 [i_1] [i_1] [i_4] [i_2] = ((/* implicit */unsigned char) arr_16 [i_1] [i_2] [i_4]);
                arr_21 [i_1 + 1] = ((/* implicit */unsigned char) arr_18 [i_2] [i_2]);
            }
            for (short i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                var_14 = ((/* implicit */int) (unsigned char)1);
                var_15 = ((/* implicit */unsigned char) ((((((arr_9 [i_5] [i_2]) | (var_8))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_5 - 1] [i_5 - 1] [i_1 + 1]))))) ? (((arr_6 [i_5 - 1]) ? (((long long int) var_9)) : (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))) : (max((((/* implicit */long long int) arr_14 [i_1 + 1] [i_2] [i_5 + 1])), (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */long long int) 25559709)) : (7285125359662355237LL)))))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_16 [i_1] [i_2] [i_5]))));
                arr_24 [i_5 - 1] [i_2] [i_1] = ((((/* implicit */unsigned long long int) arr_19 [i_1])) % (arr_22 [i_5 + 1]));
            }
            for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                arr_27 [i_6] [i_2] [i_1] [i_1 + 1] = ((/* implicit */short) arr_26 [i_1] [i_2] [i_6]);
                var_17 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned char) ((unsigned char) var_7)))), (var_3)));
            }
        }
        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
        {
            arr_31 [i_7] [i_1 + 1] = ((/* implicit */unsigned long long int) var_3);
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_17 [i_7]))));
            arr_32 [i_1 + 1] [i_1] [i_7] = ((/* implicit */signed char) ((_Bool) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_22 [i_7])))));
        }
        var_19 = ((/* implicit */signed char) max((arr_9 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_10 [i_1 + 1] [i_1] [i_1 + 1]))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_13 [i_1 + 1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_1 + 1] [i_1]))))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_16 [i_1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */long long int) ((unsigned int) arr_8 [i_1 + 1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((var_7) ? (16392874608695148517ULL) : (var_8))))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))));
        var_22 ^= ((/* implicit */int) (unsigned char)0);
    }
    var_23 = ((/* implicit */_Bool) 4294967295U);
    var_24 = ((/* implicit */unsigned int) ((unsigned char) 1221362008));
}
