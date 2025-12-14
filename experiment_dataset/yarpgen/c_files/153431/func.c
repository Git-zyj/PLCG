/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153431
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)3336)) ? (var_12) : (((/* implicit */unsigned long long int) 3567155338U))));
        var_14 = ((_Bool) var_8);
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((short) var_10)))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_7 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)105)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18159))) : (((((10448383818618709497ULL) == (4ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))) : (((((/* implicit */_Bool) (unsigned short)22354)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        arr_8 [i_1] = (-(((((/* implicit */unsigned long long int) ((long long int) (unsigned char)236))) % (max((0ULL), (18446744073709551584ULL))))));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(18446744073709551612ULL)))) ? (var_6) : (((/* implicit */unsigned int) (-(-1400300138))))));
    var_17 = min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) (unsigned char)19)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) 1641416471)))));
    var_18 = ((/* implicit */unsigned short) var_7);
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
}
