/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174084
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)255));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_3]))) > (9223372036854775807LL)))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3 - 1])) || (((/* implicit */_Bool) var_4))))) > ((-(((/* implicit */int) var_8)))))))));
                        var_11 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (((/* implicit */int) (unsigned char)183)) : (((((/* implicit */int) (signed char)29)) & (((/* implicit */int) (_Bool)1)))))));
                        var_12 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((33423360U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((long long int) arr_7 [(unsigned short)19] [(unsigned short)19] [i_3 - 3])) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_3] [i_3 - 2])) : (((/* implicit */int) arr_6 [i_2] [(unsigned short)15] [i_3 - 2])))))));
                        var_13 &= ((/* implicit */signed char) var_5);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_14 = ((/* implicit */int) ((unsigned char) (+(((((/* implicit */_Bool) arr_6 [i_4] [(unsigned char)9] [i_4])) ? (arr_2 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))))));
        var_15 ^= ((((/* implicit */_Bool) ((7972524850609248272ULL) + (18446744073709551615ULL)))) && (((/* implicit */_Bool) ((unsigned int) ((var_9) & (((/* implicit */int) var_5)))))));
    }
    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 2) 
    {
        var_16 *= ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_14 [i_5] [i_5]))) << (((((((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_5 - 3])) ? (var_0) : (var_4))) - (3211498789U))))));
        arr_17 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-76)) - (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5 - 2] [i_5 + 1] [i_5 - 3] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_5] [0LL]))) : (arr_15 [i_5]))) : (((/* implicit */unsigned int) ((int) var_5)))));
        arr_18 [i_5] = ((/* implicit */signed char) ((668333296U) + ((-(var_4)))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_8);
    var_18 |= (-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((_Bool) (signed char)56))))));
    var_19 = ((/* implicit */unsigned char) var_7);
}
