/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108925
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
    var_20 = var_18;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)82)) : (2099236982)))) < (min((var_4), (((/* implicit */unsigned long long int) var_9))))))) > ((+(((((/* implicit */_Bool) 17556551149413474329ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) min((var_0), (((/* implicit */unsigned short) var_3)))))) || (((/* implicit */_Bool) (~(arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) - (arr_3 [i_1])));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 13; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) var_1);
            var_24 = ((/* implicit */unsigned int) arr_10 [i_2 - 2] [i_2 - 3] [i_2 + 1]);
        }
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)65535)))))))));
        var_26 = ((/* implicit */unsigned int) ((var_8) && (((/* implicit */_Bool) (~((~(arr_2 [i_3]))))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((((/* implicit */_Bool) (short)7291)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_19)))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [14] [i_3]))) : (((463486269U) + (((/* implicit */unsigned int) 1126663691))))));
    }
    var_29 = ((/* implicit */unsigned char) var_5);
}
