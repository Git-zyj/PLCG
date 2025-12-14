/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108963
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) 12253069443653058628ULL)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)-89)))) != ((-(((/* implicit */int) (signed char)123))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [(signed char)4])) : (((/* implicit */int) var_8))))) ? (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_3)))) : (-47394294)))));
        var_14 = ((/* implicit */signed char) (~((-(min((((/* implicit */unsigned int) arr_1 [i_0])), (var_0)))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -47394265)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) 5)) ? (var_9) : (((/* implicit */unsigned long long int) var_7))))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_0 [i_0 + 1])))) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
    }
    var_16 = ((/* implicit */signed char) (-2147483647 - 1));
    var_17 = min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)102)) && (((/* implicit */_Bool) var_1))))));
}
