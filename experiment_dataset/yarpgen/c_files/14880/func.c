/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14880
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
    var_19 = ((/* implicit */short) ((var_0) * (((/* implicit */unsigned int) (-(((((/* implicit */int) var_17)) - (((/* implicit */int) (signed char)126)))))))));
    var_20 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_18)), (1377884802U)))), (((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)80))) : (var_2))))), (((/* implicit */long long int) 2546873961U))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        var_21 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(551751088000950073LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_1 [13LL])))))) : (max((((/* implicit */unsigned int) var_5)), (21U)))))));
        arr_4 [7ULL] [3U] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (18446744073709551615ULL)));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 1133742510U))) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967263U)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (signed char)-23)))))))) ? (min(((+(551751088000950073LL))), (((/* implicit */long long int) ((4287576688U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_1]) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-23)))))))))));
        var_23 -= ((/* implicit */short) (+((-(((unsigned int) arr_7 [i_1]))))));
    }
}
