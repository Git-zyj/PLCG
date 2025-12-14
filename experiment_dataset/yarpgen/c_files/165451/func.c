/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165451
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
    var_17 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (73477182) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 134217727)) ? (322674109904798557ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3971))))) : (var_14))));
    var_18 = ((/* implicit */short) max((((((/* implicit */int) var_9)) >> (((/* implicit */int) ((5699032628820464932ULL) != (((/* implicit */unsigned long long int) -1))))))), (((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) (((~(((/* implicit */int) var_10)))) * (((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) arr_1 [(unsigned char)18])))) : ((-(((/* implicit */int) max((((/* implicit */short) arr_1 [6ULL])), ((short)1008)))))));
        arr_4 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((var_2) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (max((var_5), (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((var_9) ? (2487620179U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))));
    }
    var_19 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_1)))))), (var_2)));
    var_20 ^= ((/* implicit */unsigned short) var_6);
}
