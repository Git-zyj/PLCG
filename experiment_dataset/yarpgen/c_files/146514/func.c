/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146514
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
    var_10 = ((/* implicit */_Bool) 15747556740453374679ULL);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (((unsigned long long int) arr_1 [i_0] [i_0]))));
        var_12 |= ((/* implicit */unsigned short) ((576460752303423487ULL) >> (((((((/* implicit */_Bool) 576460752303423501ULL)) ? (var_7) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) - (4982319980230364715ULL)))));
        arr_3 [i_0] = ((/* implicit */long long int) (+(((var_2) - (arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) 2147483647)) ^ (((((/* implicit */_Bool) 0ULL)) ? (17870283321406128108ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))), (max(((-(576460752303423487ULL))), (((((/* implicit */_Bool) -2147483621)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (var_7)))))));
    }
    var_13 = ((/* implicit */unsigned long long int) var_3);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (-2147483647)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)0))))), (var_9)))) : (((((/* implicit */_Bool) max((var_2), (2147483621)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))) : (min((576460752303423487ULL), (((/* implicit */unsigned long long int) 0LL))))))));
}
