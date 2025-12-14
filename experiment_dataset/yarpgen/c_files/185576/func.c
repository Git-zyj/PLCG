/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185576
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_5))))))));
        var_11 ^= min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))), (max((var_4), (((/* implicit */unsigned int) var_5)))));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((17297117196633751286ULL) >> (((((((/* implicit */_Bool) (unsigned char)238)) ? (8740316051304497985LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (8740316051304497923LL))))))));
        arr_2 [8ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)15))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_13 = ((/* implicit */int) (-(arr_0 [i_1])));
        var_14 |= ((/* implicit */long long int) max((((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)17))))))), (var_4)));
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned short)36429)), (min((((/* implicit */unsigned int) arr_8 [(signed char)5] [(unsigned char)16])), (4294967295U))))))));
            var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)48951)), (9U)));
            arr_9 [i_2 + 2] [13LL] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_1])) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_2 - 2])))), ((+(((/* implicit */int) arr_7 [i_1] [i_1]))))));
        }
    }
    var_17 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)15634))));
    var_18 = ((/* implicit */unsigned long long int) ((((int) var_2)) - (((((4294967295U) <= (var_7))) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) max((var_5), ((unsigned short)15603))))))));
}
