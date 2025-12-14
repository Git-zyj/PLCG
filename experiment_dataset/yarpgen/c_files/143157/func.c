/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143157
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
    var_10 += ((/* implicit */long long int) var_7);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((arr_1 [i_0 - 2]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_7)))) : (((arr_1 [i_0 - 2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0 + 1])))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_5 [i_1] &= ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (unsigned char)173)) : (-1073741824));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1850901177950534947ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) : (1183044251U)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_2))))) : (((((/* implicit */int) (unsigned char)48)) << (((((/* implicit */int) var_2)) + (32707)))))))) ? (((/* implicit */long long int) (~(arr_0 [i_1])))) : ((+(((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_12 = ((/* implicit */int) max((var_12), (arr_9 [i_2])));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)7), ((signed char)-1)))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) var_8))) / (9223372036854775807LL))))) : (((/* implicit */long long int) min((arr_9 [0LL]), (((/* implicit */int) var_0))))))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (((((16595842895759016668ULL) | (((/* implicit */unsigned long long int) 917504U)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)0]))))))))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((((((/* implicit */int) var_7)) - (((/* implicit */int) var_8)))) + (2147483647))) << (((/* implicit */int) var_1))))) : (var_3)));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)35)) || (((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)48)) ? (995924654) : (((/* implicit */int) (_Bool)0)))))))) : (((/* implicit */int) var_2))));
}
