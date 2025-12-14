/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145384
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
    var_15 = ((/* implicit */short) min((((/* implicit */int) (unsigned short)29184)), (((((/* implicit */_Bool) min((var_12), ((unsigned char)213)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (-256814510)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1750855017)) ? (-5060152321639406336LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233)))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (281255031506326890ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17592185978880ULL)) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) (signed char)-84)))))));
        var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)24))))));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) (-(arr_5 [i_2])));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12066505149104738757ULL)) ? (((((/* implicit */_Bool) arr_4 [2])) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) var_2)))) : (-324808197)));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1 - 1])) ? (((/* implicit */long long int) (+(var_1)))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (6471536509159080518LL)))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_0 [i_2]))));
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_3]) : (-324808197))) : (((((/* implicit */_Bool) -1414549038)) ? (((/* implicit */int) (short)3421)) : (((/* implicit */int) arr_0 [i_3]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-4))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)23)), (arr_0 [13ULL]))))) : (max((((/* implicit */long long int) var_1)), (var_6)))))) : (min((((((/* implicit */_Bool) -513842653)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12066505149104738757ULL))), (((/* implicit */unsigned long long int) (signed char)-84)))));
        var_24 = var_1;
    }
}
