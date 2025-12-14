/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172217
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
    var_20 ^= ((/* implicit */short) var_16);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_21 += (!((!(((/* implicit */_Bool) var_0)))));
        var_22 = max((arr_0 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)0)));
    }
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_1 - 2]), (arr_5 [i_1 - 2]))))) : (arr_4 [i_1])));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1880575426)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_1] [i_1 - 1] [i_1 - 2]) : (((/* implicit */int) var_1))));
            var_26 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) var_14)) ? (((6953415647604341802LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) -347685869);
            var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_7 [i_1 - 2])))) ? (((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (((((/* implicit */_Bool) var_18)) ? (var_3) : (((/* implicit */int) (unsigned char)227)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3]))))))) : ((+(((/* implicit */int) (short)1579))))));
            var_29 ^= ((/* implicit */_Bool) ((((arr_8 [i_1 - 2]) != (arr_8 [i_1 + 1]))) ? (((arr_8 [i_1 + 1]) / (arr_8 [i_1 + 1]))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)207)))))));
        }
    }
    for (int i_4 = 1; i_4 < 17; i_4 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((7095549423098811384ULL), (((/* implicit */unsigned long long int) arr_3 [i_4 + 1] [i_4 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (arr_8 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) ? (arr_3 [i_4 + 1] [i_4 + 1]) : (var_13)));
        var_31 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_7) <= (((/* implicit */long long int) var_19)))))))), (min((arr_4 [i_4]), (((/* implicit */unsigned long long int) var_10))))));
        arr_13 [i_4] = ((/* implicit */long long int) arr_3 [i_4 - 1] [i_4 - 1]);
        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4]))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 17; i_5 += 4) /* same iter space */
    {
        var_33 ^= ((/* implicit */_Bool) arr_8 [i_5]);
        var_34 = ((/* implicit */int) (short)7);
    }
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) (signed char)126)))))))));
}
