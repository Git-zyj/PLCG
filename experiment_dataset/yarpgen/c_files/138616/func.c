/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138616
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 = ((((/* implicit */int) ((signed char) (-(((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) ((_Bool) var_8))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (-85946312144970275LL) : (-4520649975070088221LL)))) ? (((/* implicit */int) ((_Bool) (unsigned short)31812))) : (((((/* implicit */int) (signed char)28)) / (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((unsigned short) var_0))))))));
        var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (_Bool)1))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65514))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] = (!((((!(((/* implicit */_Bool) (unsigned short)58552)))) && ((!(((/* implicit */_Bool) (signed char)28)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_8 [i_1] = ((signed char) (_Bool)1);
        arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((/* implicit */int) (_Bool)1))));
        arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((long long int) (unsigned short)1963)) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)6]))) : (-4520649975070088228LL)));
    }
    for (long long int i_2 = 3; i_2 < 22; i_2 += 4) 
    {
        arr_13 [i_2] = ((/* implicit */_Bool) (((!(var_1))) ? (((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((signed char) var_1)))));
        var_15 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [i_2 + 1])) || (var_6)))))));
    }
    var_16 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
}
