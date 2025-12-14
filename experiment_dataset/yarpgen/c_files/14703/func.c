/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14703
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
    var_12 = ((/* implicit */unsigned int) ((long long int) ((short) ((_Bool) var_4))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_13 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) -1263338783)), (0ULL)));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-59);
        arr_5 [i_0] = ((/* implicit */short) ((unsigned long long int) (short)-16526));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_14 = ((/* implicit */int) arr_0 [i_1]);
        var_15 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [(signed char)12])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (1857114931U))) : (2437852371U)))));
    }
    var_16 = ((/* implicit */unsigned short) ((var_2) ? (max((((/* implicit */int) (_Bool)0)), (((int) var_3)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1949617554)))))))));
}
