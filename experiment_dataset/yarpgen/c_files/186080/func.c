/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186080
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
    var_17 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) var_11)) + (9016))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) ((signed char) (signed char)-5)))))) : (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((1022301577553842228ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1185090553)) ? (-572638726294063457LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -1185090553)) && (((/* implicit */_Bool) 918736797)))))) : ((((+(((/* implicit */int) arr_0 [i_0])))) << (((((((/* implicit */_Bool) arr_1 [7ULL])) ? (arr_1 [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (2963235709U))))))))));
        arr_2 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (arr_1 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0 + 1]))))));
    }
}
