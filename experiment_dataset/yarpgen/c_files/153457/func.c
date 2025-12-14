/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153457
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) << (((arr_1 [i_0]) - (3684142517U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26525))) : (arr_1 [i_0])));
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) | (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
    }
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) ((arr_5 [6]) <= (((/* implicit */unsigned long long int) var_8))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), (min((arr_3 [i_1 + 2]), (arr_3 [i_1 + 1])))));
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_21 = ((/* implicit */_Bool) ((max((var_8), (((/* implicit */int) var_19)))) + ((+(arr_9 [22ULL])))));
        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) arr_10 [i_2] [(_Bool)1]));
        var_23 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)65535)))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) (_Bool)1);
    }
    /* LoopSeq 3 */
    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned char)0)))));
        arr_16 [i_3] = ((/* implicit */long long int) ((unsigned long long int) ((((var_18) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1)))) << (((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_11 [i_3] [(short)6])))) - (51321))))));
        arr_17 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)9736))))), (((((/* implicit */_Bool) arr_10 [i_3 + 1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_15)))))) ? (((((/* implicit */_Bool) ((unsigned short) var_18))) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3])) && (((/* implicit */_Bool) var_10)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        var_24 *= ((/* implicit */signed char) max((((int) arr_9 [i_3 - 1])), (((((arr_9 [i_3 - 1]) + (2147483647))) << (((((/* implicit */int) (unsigned char)120)) - (120)))))));
    }
    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) /* same iter space */
    {
        arr_20 [(_Bool)1] = ((max((7404282875519743914ULL), (var_3))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_19))))))))));
        var_25 *= ((/* implicit */short) ((((/* implicit */int) min((var_2), (arr_13 [(_Bool)1])))) * (((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_26 = ((/* implicit */short) arr_9 [i_5 - 1]);
            arr_29 [i_5 - 1] [(signed char)6] [i_6] &= ((/* implicit */_Bool) (+(arr_24 [i_6])));
        }
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) min((((long long int) var_8)), (((/* implicit */long long int) var_17))))) : (arr_26 [i_5])));
        var_28 ^= ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)63)))) < (((/* implicit */int) (short)-1))));
        arr_30 [i_5 - 1] [i_5] = ((/* implicit */_Bool) arr_23 [i_5] [i_5]);
    }
}
