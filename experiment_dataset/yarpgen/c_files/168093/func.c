/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168093
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_11 ^= ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) (unsigned char)185)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) (short)19713)) ? (arr_2 [i_0]) : (var_0))))) : (((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (var_10) : (var_4)))));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (((((-(arr_2 [i_0]))) + (2147483647))) << (((/* implicit */int) (unsigned short)1))))) || (((/* implicit */_Bool) arr_2 [i_0]))));
        var_13 ^= ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */long long int) ((var_0) / (((/* implicit */int) arr_0 [i_0]))))), (var_3))));
        var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) var_8)), (((((((/* implicit */_Bool) arr_0 [(signed char)1])) && (arr_1 [(unsigned short)1]))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-19709))))));
    }
    var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) var_0)))))));
    var_16 = ((/* implicit */unsigned char) ((var_1) % ((((_Bool)1) ? (var_1) : (((/* implicit */int) (short)-19709))))));
}
