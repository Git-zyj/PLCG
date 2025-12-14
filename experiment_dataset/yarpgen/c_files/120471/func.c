/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120471
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) ((unsigned char) (short)(-32767 - 1)))), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
    var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63204)) / (1073741823)))) ? (((((/* implicit */_Bool) -2147483644)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (unsigned char)251)))) : (((/* implicit */int) var_7))))) || (((_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14166))))))));
    var_20 ^= ((/* implicit */signed char) (unsigned short)27637);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) max((arr_2 [(_Bool)1]), (arr_2 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (var_9))))))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */short) (signed char)-104);
    }
    var_22 &= ((/* implicit */long long int) var_16);
}
