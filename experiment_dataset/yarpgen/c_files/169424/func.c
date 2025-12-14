/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169424
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
    var_20 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */short) var_12)), (var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-10848))))) ? (max((18446744073709551615ULL), (var_10))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
    var_21 = ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (var_18)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_2 [i_1] [(_Bool)1]))))) ? (((arr_2 [i_0 - 2] [i_0 - 2]) ? (var_2) : (((/* implicit */int) (signed char)-10)))) : (((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) arr_2 [i_0 - 1] [i_1])))))))));
                var_23 ^= min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) % (arr_1 [8ULL]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [(signed char)7])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10836)) || (((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 2]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (+(4294967295U))))) != (((/* implicit */int) ((signed char) ((signed char) (short)10852))))));
}
