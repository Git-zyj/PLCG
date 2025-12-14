/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122526
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned short) var_0);
        var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_2 [(signed char)11]))));
        var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7668434548910085143LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0 - 1])));
        var_13 *= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (unsigned short)9))) >> (((((/* implicit */int) arr_2 [i_0 - 2])) - (52351)))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) & (arr_1 [i_0 + 1])));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4362862139015168LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -5513101900920628143LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)2047)))))) : (((/* implicit */int) ((unsigned char) var_9)))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_5))));
        var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (arr_4 [i_1])))));
    }
    var_16 = ((/* implicit */int) min((max(((((_Bool)1) ? (4ULL) : (((/* implicit */unsigned long long int) 5513101900920628161LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (var_9)))))), (((/* implicit */unsigned long long int) (signed char)-126))));
}
