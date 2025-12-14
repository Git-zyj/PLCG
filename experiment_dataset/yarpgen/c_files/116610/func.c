/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116610
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
    var_17 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [(unsigned char)4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0]), (arr_2 [3ULL] [i_0]))))) : (((((/* implicit */_Bool) var_6)) ? (1156876691U) : (var_4)))))) ? (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) : (((/* implicit */long long int) ((((((/* implicit */int) var_10)) != (((/* implicit */int) arr_2 [i_0] [i_0])))) ? ((((_Bool)1) ? (var_3) : (((/* implicit */int) var_6)))) : (min((var_3), (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        arr_4 [i_0] &= ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)535)) : (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) (short)2047)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))));
    }
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (signed char)-118)), (0U)));
        var_19 = min((4294967289U), (((/* implicit */unsigned int) 13)));
    }
}
