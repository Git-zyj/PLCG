/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160656
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 -= min((((/* implicit */long long int) arr_5 [i_0])), (((((((-1629204184344794300LL) | (((/* implicit */long long int) 3202641862U)))) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-32)) + (66))))));
                var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) (unsigned char)216))) && (((/* implicit */_Bool) arr_1 [i_0 + 3])))) || (((var_13) && (((/* implicit */_Bool) var_16))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)22)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (arr_6 [i_0] [i_0] [i_1 + 1])))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (arr_0 [i_1])))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0])) & (1073741823))))));
            }
        } 
    } 
    var_20 = ((((((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_15))))) | (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) > (((/* implicit */long long int) (+(((/* implicit */int) var_9))))));
}
