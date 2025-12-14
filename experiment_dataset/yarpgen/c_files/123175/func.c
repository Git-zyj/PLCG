/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123175
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
    var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_0), (var_12)))) || (((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) (signed char)56))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((14231244488333954594ULL) == (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)127)) >> ((((~((-(arr_0 [i_0]))))) + (8623554755715000360LL))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) (-(arr_2 [i_0])))) : (4215499585375597029ULL)));
    }
    for (unsigned char i_1 = 4; i_1 < 23; i_1 += 3) 
    {
        arr_6 [i_1 + 1] [i_1] = ((/* implicit */signed char) 6ULL);
        arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((4215499585375597025ULL), (((/* implicit */unsigned long long int) var_18))))) ? (((/* implicit */int) ((signed char) 4215499585375597033ULL))) : (((/* implicit */int) ((signed char) 0U)))))) : ((~(((((/* implicit */_Bool) var_5)) ? (var_4) : (5671414159909336925LL))))));
        var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((6592647433083094857ULL) | (var_0))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_3))) : ((~(10348218907710706737ULL)))))));
    }
}
