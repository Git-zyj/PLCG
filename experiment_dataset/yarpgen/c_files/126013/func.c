/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126013
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
    var_11 += ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_6)))), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))))))));
    var_12 ^= ((/* implicit */unsigned short) ((signed char) ((short) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) var_6)) - (35292)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) min((6463820386680989130LL), (((/* implicit */long long int) (signed char)30)))))) ? (min((((/* implicit */int) arr_0 [(unsigned short)13] [i_0])), (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (arr_2 [i_0])))));
        var_14 -= ((/* implicit */int) var_7);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26667)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (6942459530107147337LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((long long int) (_Bool)1))))) ? (((arr_2 [i_0]) & (arr_2 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-6463820386680989132LL)))) && (((/* implicit */_Bool) 6463820386680989131LL)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((arr_2 [(signed char)11]) / (arr_2 [i_1]))) * (arr_1 [i_1])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (-6463820386680989132LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125)))));
            arr_9 [(unsigned short)15] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (arr_7 [i_1])))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)175)) || (((/* implicit */_Bool) var_9))))))));
            arr_10 [i_2] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (signed char)-58)))));
        }
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
        {
            arr_15 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? ((+(((/* implicit */int) arr_5 [i_3])))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned char)80))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((unsigned char) var_9)))))));
            arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)0))))), (arr_12 [i_3])));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7841584187156566658LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-117))))) : ((+(6463820386680989132LL)))));
            arr_20 [(unsigned short)1] [i_1] [8] = ((unsigned short) arr_18 [i_1] [i_4]);
            arr_21 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */unsigned long long int) 7841584187156566658LL)) : (1396219482972773358ULL)));
        }
    }
}
