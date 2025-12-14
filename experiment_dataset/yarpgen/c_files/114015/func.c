/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114015
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)194)), ((short)-14191)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14191))) : (18446744073709551606ULL)));
    var_15 = (short)14191;
    var_16 = ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((((unsigned int) (signed char)39)) / (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))) + (((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)118)))))))));
        arr_2 [(unsigned char)11] [i_0] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) min(((_Bool)1), (var_7)))))), (((/* implicit */int) (signed char)-1))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = 662674050;
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(_Bool)0])) >> (((long long int) var_5)))))));
    }
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))) ^ (9223168486349447348LL)))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (short)0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)76)))))))) : ((~(((/* implicit */int) var_10)))));
}
