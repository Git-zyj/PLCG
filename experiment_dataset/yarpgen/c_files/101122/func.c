/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101122
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) min((4159633629670653529LL), (4159633629670653529LL))))));
        var_16 = arr_3 [i_0];
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((((/* implicit */unsigned long long int) (~(min((arr_3 [i_1]), (-4159633629670653508LL)))))) % (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_6)) : (var_5))) | (((/* implicit */unsigned long long int) arr_2 [(signed char)12] [i_1])))));
        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) var_5)))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) (signed char)-81)) ? (-3689668164809119039LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))));
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 44481110677623733ULL)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 2])))))));
        var_20 = ((/* implicit */int) (!((!(((/* implicit */_Bool) -1675343851))))));
        arr_11 [i_2 + 1] [i_2 + 1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)50))) != (-4159633629670653508LL)));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2979547595724193218LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18226))) : (17317308137472ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (var_5))))) : (((var_13) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47303)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18232)) ? (15397503197478964857ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))) : (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned long long int) 4159633629670653507LL)))))) : (((/* implicit */unsigned long long int) var_0))));
    var_22 = ((/* implicit */long long int) ((unsigned short) var_9));
}
