/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157076
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [6] = ((/* implicit */int) ((((2733520090U) != (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-8430)), ((unsigned short)60505))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((((/* implicit */int) (signed char)83)) % (((/* implicit */int) (signed char)-83)))))))) : (max((((((/* implicit */_Bool) arr_0 [10] [9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) : (var_9))), (var_9)))));
        var_14 ^= ((/* implicit */signed char) min((32767ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)0])) && (((/* implicit */_Bool) arr_0 [i_0] [6LL])))))));
        var_15 = max((((/* implicit */int) (signed char)-79)), (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0])))));
    }
    var_16 ^= ((/* implicit */unsigned int) (((((+(((/* implicit */int) var_4)))) / (var_2))) < (((((var_0) + (2147483647))) << (((((min((((/* implicit */int) (signed char)64)), (var_2))) + (120900732))) - (15)))))));
}
