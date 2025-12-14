/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14298
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
    var_18 ^= ((/* implicit */unsigned long long int) var_12);
    var_19 -= ((/* implicit */unsigned short) ((short) var_0));
    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) != (var_8))))) : ((+(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8)))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0 + 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)3]))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))) : (min((max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0]))), (((/* implicit */unsigned int) ((_Bool) arr_0 [i_0])))))));
        arr_4 [(unsigned char)2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)27)) >> (((-5301140105362374634LL) + (5301140105362374646LL)))));
        arr_5 [(signed char)4] [(_Bool)1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3663486405886716221ULL)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : ((-2147483647 - 1)))) : (((/* implicit */int) var_16)))));
        arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 136884366U)))) : (((((/* implicit */_Bool) ((var_10) | (arr_0 [i_0])))) ? ((-(18ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */short) (unsigned char)250))))))))));
    }
}
