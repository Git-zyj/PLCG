/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132014
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (+((+(2332790406U))))))));
    var_15 ^= ((/* implicit */unsigned char) var_12);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((arr_0 [i_0]), (((/* implicit */unsigned char) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) var_11))))))))), (((unsigned int) var_3))));
        var_17 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (756688171U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        var_18 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) == (var_7))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (long long int i_4 = 3; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_19 = min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) max((3538279125U), (((/* implicit */unsigned int) var_12))))) : (min((((/* implicit */unsigned long long int) var_10)), (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4 - 3])) ? (var_13) : (var_10)))));
                        var_20 += ((/* implicit */unsigned int) ((short) (+(((arr_8 [i_1] [i_2] [i_4]) / (851540284336577989LL))))));
                    }
                } 
            } 
        } 
        var_21 += ((/* implicit */int) max((var_0), (((((arr_8 [(unsigned char)7] [i_1] [i_1]) & (((/* implicit */long long int) arr_7 [i_1])))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20784))) & (2355844372U))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_15 [i_5] [i_5]) : (arr_15 [i_5] [i_5])))) ? (arr_15 [i_5] [i_5]) : (max((arr_15 [i_5] [i_5]), (((/* implicit */long long int) var_4))))));
        var_23 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [i_5]))) + (arr_8 [i_5] [i_5] [(unsigned char)6])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_5]))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [6ULL] [i_5]))) : (1962176890U)))))), (((unsigned long long int) ((((/* implicit */int) arr_2 [i_5])) == (((/* implicit */int) (_Bool)0)))))));
    }
    var_24 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))))), (((/* implicit */long long int) ((_Bool) var_7)))))) ? (min((((var_13) & (((/* implicit */int) var_11)))), ((+(((/* implicit */int) var_12)))))) : (((/* implicit */int) var_12)));
    var_25 = min((var_5), (((/* implicit */unsigned long long int) var_4)));
}
